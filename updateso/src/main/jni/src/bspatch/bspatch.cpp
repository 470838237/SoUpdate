/*-
 * Copyright 2003-2005 Colin Percival
 * All rights reserved
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted providing that the following conditions 
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#ifdef WIN32
	#include <io.h>
	#include <Windows.h>
#endif
#include <jni.h>
#include <android/log.h>
#include <cstring>
#include "bzlib.h"




typedef unsigned char u_char;
#if !defined(__aarch64__) && !defined(PLATFORM_IOS)
	//typedef signed int ssize_t;
#endif

template<class T1, class T2>
void err(int i, const char* str, T1 arg1, T2 arg2) {
	/*
	char lastErrorTxt[1024];
	FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM|FORMAT_MESSAGE_IGNORE_INSERTS,NULL,GetLastError(),0,lastErrorTxt,1024,NULL);
	printf("%s",lastErrorTxt);
	printf(str, arg1, arg2);
	exit(i);
	*/
}
template<class T>
void err(int i, const char* str, T arg) {
	/*
	char lastErrorTxt[1024];
	FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM|FORMAT_MESSAGE_IGNORE_INSERTS,NULL,GetLastError(),0,lastErrorTxt,1024,NULL);
	printf("%s",lastErrorTxt);
	printf(str, arg);
	exit(i);
	*/
}
void err(int i, const char* str) {
	/*
	char lastErrorTxt[1024];
	FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM|FORMAT_MESSAGE_IGNORE_INSERTS,NULL,GetLastError(),0,lastErrorTxt,1024,NULL);
	printf("%s",lastErrorTxt);
	if (str!=NULL) {
		printf("%s",str);
	}
	exit(i);
	*/
}
template<class T>
void errx(int i, const char* str, T arg) {
	printf(str, arg);
	//exit(i);
}
void errx(int i, const char* str) {
	printf("%s",str);
	//exit(i);
}


static off_t offtin(u_char *buf)
{
	off_t y;

	y=buf[7]&0x7F;
	y=y*256;y+=buf[6];
	y=y*256;y+=buf[5];
	y=y*256;y+=buf[4];
	y=y*256;y+=buf[3];
	y=y*256;y+=buf[2];
	y=y*256;y+=buf[1];
	y=y*256;y+=buf[0];

	if(buf[7]&0x80) y=-y;

	return y;
}


int bsdiff_ReadFile(FILE *fp, unsigned char *buf, size_t len)
{
	size_t n;

	while (len) {
		n = fread(buf, 1, len, fp);
		if (!n)
			return 0;
		buf += n;
		len -= n;
	}
	return 1;
}

int bsdiff_WriteFile(FILE *fp, const unsigned char *buf, size_t len)
{
	size_t n;

	while (len) {
		n = fwrite(buf, 1, len, fp);
		if (!n)
			return 0;
		buf += n;
		len -= n;
	}
	return 1;
}

int bsdiff_GetFileSize(FILE *fp, int *fileSize)
{
	if (fseek(fp, 0, SEEK_END))
		return 0;

	*fileSize = ftell(fp);
	if (*fileSize < 0)
		return 0;

	if (fseek(fp, 0, SEEK_SET))
		return 0;

	return 1;
}

int bsdiff_ReadOffset(unsigned char buf[8])
{
	long long value = 0;

	value = buf[7] & 0x7F;
	value *= 256;  value += buf[6];
	value *= 256;  value += buf[5];
	value *= 256;  value += buf[4];
	value *= 256;  value += buf[3];
	value *= 256;  value += buf[2];
	value *= 256;  value += buf[1];
	value *= 256;  value += buf[0];
	if (buf[7] & 0x80)
		value = -value;

	return (int)value;
}

void bsdiff_WriteOffset(int offset, unsigned char buf[8])
{
	long long value = offset;

	if (offset < 0)
		value = -value;

	buf[0] = value % 256;  value -= buf[0];  value /= 256;
	buf[1] = value % 256;  value -= buf[1];  value /= 256;
	buf[2] = value % 256;  value -= buf[2];  value /= 256;
	buf[3] = value % 256;  value -= buf[3];  value /= 256;
	buf[4] = value % 256;  value -= buf[4];  value /= 256;
	buf[5] = value % 256;  value -= buf[5];  value /= 256;
	buf[6] = value % 256;  value -= buf[6];  value /= 256;
	buf[7] = (unsigned char)value;

	if (offset < 0)
		buf[7] |= 0x80;
}
void bsdiff_SetError(char error[64], const char *str)
{
	int i;

	if (error) {
		for (i = 0; i < 63; ++i) {
			if (!str[i])
				break;
			error[i] = str[i];
		}
		error[i] = '\0';
	}
}

extern "C"
{	
	#define FUNC(f) Java_com_moba_unityplugin_BinaryPatchManager_##f
	JNIEXPORT jint JNICALL Java_com_moba_unityplugin_BinaryPatchManager_BSPatchPatchFile(JNIEnv *env, jclass type, jstring joldFile, jstring jnewFile, jstring jpatchFile)
	{
		const char *oldFile = (env)->GetStringUTFChars(joldFile, 0);
		const char *newFile = (env)->GetStringUTFChars(jnewFile, 0);
		const char *patchFile = (env)->GetStringUTFChars(jpatchFile, 0);
	
	
		char error[64];
		int retCode = 1;
		unsigned char header[32];
		FILE *fp = NULL, *fpControl = NULL, *fpDiff = NULL, *fpExtra = NULL;
		BZFILE *bfpControl = NULL, *bfpDiff = NULL, *bfpExtra = NULL;
		unsigned char *oldFileBuf = NULL, *newFileBuf = NULL;
		int controlBlockSize, diffBlockSize, newFileSize, oldFileSize;
		int oldPos, newPos;
		int bzError, bzReaded;
		int i, cb, ctrl[3];
		unsigned char temp[24];
		fp = fopen(patchFile, "rb");
		if (!fp) {
			bsdiff_SetError(error, "Can't open patchFile");
			retCode = 1;
			goto MyExit;
		}
		if (!bsdiff_ReadFile(fp, header, 32)) {
			bsdiff_SetError(error, "Invalid patchFile");
			retCode = 2;
			goto MyExit;
		}
		if (memcmp(header, "BSDIFF40", 8) != 0) {
			bsdiff_SetError(error, "Invalid patchFile");
			retCode = 3;
			goto MyExit;
		}
		controlBlockSize = bsdiff_ReadOffset(header + 8);
		diffBlockSize = bsdiff_ReadOffset(header + 16);
		newFileSize = bsdiff_ReadOffset(header + 24);
		if (controlBlockSize < 0 || diffBlockSize < 0 || newFileSize < 0) {
			bsdiff_SetError(error, "Invalid patchFile");
			retCode = 4;
			goto MyExit;
		}

		// ������BZ2���ļ�������ֱ��ȡpatch�ļ�����������
		fpControl = fp;
		fp = NULL;
		bfpControl = BZ2_bzReadOpen(&bzError, fpControl, 0, 0, NULL, 0);
		if (!bfpControl) {
			bsdiff_SetError(error, "Invalid patchFile");
			retCode = 5;
			goto MyExit;
		}

		if (!(fpDiff = fopen(patchFile, "rb")) || fseek(fpDiff, 32 + controlBlockSize, SEEK_SET)) {
			bsdiff_SetError(error, "Invalid patchFile");
			retCode = 6;
			goto MyExit;
		}
		bfpDiff = BZ2_bzReadOpen(&bzError, fpDiff, 0, 0, NULL, 0);
		if (!bfpDiff) {
			bsdiff_SetError(error, "Invalid patchFile");
			retCode = 7;
			goto MyExit;
		}

		if (!(fpExtra = fopen(patchFile, "rb")) || fseek(fpExtra, 32 + controlBlockSize + diffBlockSize, SEEK_SET)) {
			bsdiff_SetError(error, "Invalid patchFile");
			retCode = 8;
			goto MyExit;
		}
		bfpExtra = BZ2_bzReadOpen(&bzError, fpExtra, 0, 0, NULL, 0);
		if (!bfpDiff) {
			bsdiff_SetError(error, "Invalid patchFile");
			retCode = 9;
			goto MyExit;
		}

		// ��ȡoldFile���ݵ�oldFileBuf
		if (!(fp = fopen(oldFile, "rb")) || !bsdiff_GetFileSize(fp, &oldFileSize)) {
			bsdiff_SetError(error, "Can't open oldFile");
			retCode = 10;
			goto MyExit;
		}
		oldFileBuf = (unsigned char*)malloc(oldFileSize + 1);  // oldFileSize����Ϊ0
		if (!oldFileBuf) {
			bsdiff_SetError(error, "Out of memory");
			retCode = 11;
			goto MyExit;
		}
		if (!bsdiff_ReadFile(fp, oldFileBuf, oldFileSize)) {
			bsdiff_SetError(error, "Failed to read oldFile");
			retCode = 12;
			goto MyExit;
		}
		fclose(fp);
		fp = NULL;

		// ����newFileBuf
		newFileBuf = (unsigned char*)malloc(newFileSize + 1);  // newFileSize����Ϊ0
		if (!newFileBuf) {
			bsdiff_SetError(error, "Out of memory");
			retCode = 13;
			goto MyExit;
		}

		// ��ʼѭ������
		oldPos = 0;
		newPos = 0;
		while (newPos < newFileSize) {
			// ��Control data
			bzReaded = BZ2_bzRead(&bzError, bfpControl, temp, 24);
			if ((bzError != BZ_OK && bzError != BZ_STREAM_END) || bzReaded != 24) {
				bsdiff_SetError(error, "Invalid patchFile");
				retCode = 14;
				goto MyExit;
			}
			ctrl[0] = bsdiff_ReadOffset(temp);
			ctrl[1] = bsdiff_ReadOffset(temp + 8);
			ctrl[2] = bsdiff_ReadOffset(temp + 16);

			// ��diff�����ж�ctrl[0]���ֽ�
			if (ctrl[0] < 0 || newPos + ctrl[0] > newFileSize) {
				bsdiff_SetError(error, "Invalid patchFile");
				retCode = 15;
				goto MyExit;
			}
			bzReaded = BZ2_bzRead(&bzError, bfpDiff, newFileBuf + newPos, ctrl[0]);
			if ((bzError != BZ_OK && bzError != BZ_STREAM_END) || bzReaded != ctrl[0]) {
				bsdiff_SetError(error, "Invalid patchFile");
				retCode = 16;
				goto MyExit;
			}

			// �Ӿ��ļ������ж�ȡctrl[0]���ֽڣ���diff���ݽ��мӲ���
			cb = ctrl[0];
			if (oldPos + cb > oldFileSize)
				cb = oldFileSize - oldPos;
			for (i = 0; i < cb; ++i) {
				newFileBuf[newPos + i] += oldFileBuf[oldPos + i];
			}

			// ����pos
			newPos += ctrl[0];
			oldPos += ctrl[0];

			// ��extra�����ж�ȡctrl[1]���ֽ�
			if (ctrl[1] < 0 || newPos + ctrl[1] > newFileSize) {
				bsdiff_SetError(error, "Invalid patchFile");
				retCode = 17;
				goto MyExit;
			}
			bzReaded = BZ2_bzRead(&bzError, bfpExtra, newFileBuf + newPos, ctrl[1]);
			if ((bzError != BZ_OK && bzError != BZ_STREAM_END) || bzReaded != ctrl[1]) {
				bsdiff_SetError(error, "Invalid patchFile");
				retCode = 18;
				goto MyExit;
			}

			// ����pos
			newPos += ctrl[1];
			oldPos += ctrl[2];  // ctrl[2]�����Ǹ���
			if (oldPos > oldFileSize || oldPos < 0) {
				bsdiff_SetError(error, "Invalid patchFile");
				retCode = 19;
				goto MyExit;
			}
		}

		// ��newFileBuf�е�����д����newFile
		fp = fopen(newFile, "wb");
		if (!fp) {
			bsdiff_SetError(error, "Can't open newFile");
			retCode = 20;
			goto MyExit;
		}
		if (!bsdiff_WriteFile(fp, newFileBuf, newFileSize)) {
			bsdiff_SetError(error, "Failed to write newFile");
			retCode = 21;
			goto MyExit;
		}
		fclose(fp);
		fp = NULL;

		// Done
		retCode = 0;

	MyExit:
		free(oldFileBuf);
		free(newFileBuf);
		if (bfpControl)
			BZ2_bzReadClose(&bzError, bfpControl);
		if (bfpDiff)
			BZ2_bzReadClose(&bzError, bfpDiff);
		if (bfpExtra)
			BZ2_bzReadClose(&bzError, bfpExtra);
		if (fp)
			fclose(fp);
		if (fpControl)
			fclose(fpControl);
		if (fpDiff)
			fclose(fpDiff);
		if (fpExtra)
			fclose(fpExtra);
		return retCode;
	}
}
