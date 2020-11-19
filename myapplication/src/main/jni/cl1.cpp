#include <jni.h>

extern "C"
{
JNIEXPORT jbyteArray
JNICALL
Java_com_honor_utils_HonorEncode_encodeBytes(JNIEnv *env, jclass clazz, jbyteArray data,
                                             jint iBytesLenth) {

    jbyte *bBuffer = env->GetByteArrayElements(data, 0);
    unsigned char *pBytes = (unsigned char *) bBuffer;

    if (pBytes == nullptr || iBytesLenth < 1) {
        return data;
    }

    unsigned char iKeys[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int iKeysLenth = sizeof(iKeys);

    int j = 0;
    for (int i = 0; i < iBytesLenth; i++) {
        if (j == iKeysLenth) {
            j = 0;
        }
        int k = (pBytes[i] ^ iKeys[j]);
        k <<= 24;
        k >>= 24;
        pBytes[i] = k;
        j++;
    }
    jbyteArray array = env->NewByteArray(iBytesLenth);
    env->SetByteArrayRegion(array, 0, iBytesLenth, reinterpret_cast<jbyte *>(pBytes));
    return array;
}

}
