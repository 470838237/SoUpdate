#include <jni.h>
#include <android/log.h>
#include <dlfcn.h>
#include "Define.h"
#include "il2cpp-api-types.h"

#define LOG_TAG "DYSO"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

extern "C"
{
//!------------------------------------------
#include "UnityFunctiosDeclare.h"
//!------------------------------------------
int mStaticFailedIndex = 0;
void *dllIL2CPPRealHandler = NULL;

void InitUnityFunction() {
#include "UnityFunctiosLoader.h"
}
bool LoadFakeLibIL2CPP(JNIEnv *env) {
    LOGD("Load so...");
    jclass kMobaGameUnityActivityClass = env->FindClass(
            "com/honor/plugin/soupdate/DeviceEnvironment");
    if (NULL == kMobaGameUnityActivityClass) {
        LOGE("%s", "can't find MinimobaGameMainActivity!");
        mStaticFailedIndex = 1;
        return false;
    }
    jmethodID kGetSOPathMethod = env->GetStaticMethodID(kMobaGameUnityActivityClass, "getSoPath",
                                                        "()Ljava/lang/String;");
    if (NULL == kGetSOPathMethod) {
        LOGE("%s", "can't find GetSOPath!");
        mStaticFailedIndex = 2;
        env->DeleteLocalRef(kMobaGameUnityActivityClass);
        return false;
    }
    jstring result = (jstring) env->CallStaticObjectMethod(kMobaGameUnityActivityClass,
                                                           kGetSOPathMethod);
    if (NULL == result) {
        LOGE("%s", "can't get SO path!");
        mStaticFailedIndex = 3;
        env->DeleteLocalRef(kMobaGameUnityActivityClass);
        return false;
    }
    const char *strFullPath = env->GetStringUTFChars(result, NULL);
    if (NULL == strFullPath) {
        LOGE("%s", "GetSOPathA return null!");
        mStaticFailedIndex = 4;
        env->DeleteLocalRef(result);
        env->DeleteLocalRef(kMobaGameUnityActivityClass);
        return false;
    }
    LOGD("Load so: %s", strFullPath);
    dllIL2CPPRealHandler = dlopen(strFullPath, RTLD_LOCAL | RTLD_LAZY);
    if (NULL == dllIL2CPPRealHandler) {
        LOGE("%s", "Load lib failed");
        mStaticFailedIndex = 5;
        env->ReleaseStringUTFChars(result, strFullPath);
        env->DeleteLocalRef(result);
        env->DeleteLocalRef(kMobaGameUnityActivityClass);
        return false;
    }
    env->ReleaseStringUTFChars(result, strFullPath);
    env->DeleteLocalRef(result);
    env->DeleteLocalRef(kMobaGameUnityActivityClass);
    LOGD("%s", "!!Load so success!!");
    InitUnityFunction();
    return true;
}

bool SetupDynamicSO(JNIEnv *env) {
    LOGD("Setup dynamic so...");
    jclass kMobaGameUnityActivityClass = env->FindClass(
            "com/honor/plugin/soupdate/DeviceEnvironment");
    if (NULL == kMobaGameUnityActivityClass) {
        LOGE("%s", "can't find MinimobaGameMainActivity!");
        mStaticFailedIndex = 10;
        return false;
    }
    jmethodID kSetupCPUTypeMethod = env->GetStaticMethodID(kMobaGameUnityActivityClass,
                                                           "setCPUArchitecture", "(I)Z");
    if (NULL == kSetupCPUTypeMethod) {
        LOGE("%s", "can't find SetCPUArchitecture!");
        mStaticFailedIndex = 20;
        env->DeleteLocalRef(kMobaGameUnityActivityClass);
        return false;
    }
    int iType = 0;
#if X86_SO
    iType = 1;
#else
#if __aarch64__
    iType = 3;
#else
    iType = 2;
#endif
#endif
    bool isSuccess = (bool) env->CallStaticBooleanMethod(kMobaGameUnityActivityClass,
                                                         kSetupCPUTypeMethod, iType);
    if (false == isSuccess) {
        LOGE("%s", "SetCPUArchitecture failed");
        mStaticFailedIndex = 30;
        env->DeleteLocalRef(kMobaGameUnityActivityClass);
        return false;
    }

    jmethodID kCopySOToAppLibMethod = env->GetStaticMethodID(kMobaGameUnityActivityClass,
                                                             "copySoToAppLib", "()Z");
    if (NULL == kCopySOToAppLibMethod) {
        LOGE("%s", "can't find CopySOToAppLib!");
        mStaticFailedIndex = 40;
        env->DeleteLocalRef(kMobaGameUnityActivityClass);
        return false;
    }
    isSuccess = (bool) env->CallStaticBooleanMethod(kMobaGameUnityActivityClass,
                                                    kCopySOToAppLibMethod);
    if (false == isSuccess) {
        LOGE("%s", "copy so to applib failed!!");
        mStaticFailedIndex = 50;
        env->DeleteLocalRef(kMobaGameUnityActivityClass);
        return false;
    }
    env->DeleteLocalRef(kMobaGameUnityActivityClass);
    LOGD("!!Setup dynamic so success!!");
    return true;
}


void copyDataManaged(JNIEnv *env, char *toDir) {
    LOGE("%s", "copyAssetsDataToSDCard start");
    char *fromDir = "bin/Data/Managed";
    jclass kDeviceEnvironmentClass = env->FindClass("com/honor/plugin/soupdate/DeviceEnvironment");
    if (NULL == kDeviceEnvironmentClass) {
        LOGE("%s", "can't find DeviceEnvironment!");
        mStaticFailedIndex = 100;
        return;
    }
    jmethodID kCopyAssetsToSDCardMethod = env->GetStaticMethodID(kDeviceEnvironmentClass,
                                                                 "copyDataManaged",
                                                                 "(Ljava/lang/String;Ljava/lang/String;)V");
    if (NULL == kCopyAssetsToSDCardMethod) {
        LOGE("%s", "can't find kCopyAssetsToSDCardMethod!");
        mStaticFailedIndex = 200;
        env->DeleteLocalRef(kDeviceEnvironmentClass);
        return;
    }
    jstring jFromDir = env->NewStringUTF(fromDir);
    jstring jToDir = env->NewStringUTF(toDir);
    env->CallStaticVoidMethod(kDeviceEnvironmentClass,
                              kCopyAssetsToSDCardMethod, jFromDir, jToDir);

    env->DeleteLocalRef(kDeviceEnvironmentClass);
    LOGE("%s", "copyAssetsDataToSDCard end");
}

bool SetupDataPath(JNIEnv *env) {
    LOGD("Setup data path...");
    jclass kDeviceEnvironmentClass = env->FindClass("com/honor/plugin/soupdate/DeviceEnvironment");
    if (NULL == kDeviceEnvironmentClass) {
        LOGE("%s", "can't find DeviceEnvironment!");
        mStaticFailedIndex = 100;
        return false;
    }
    jmethodID kGetPersistentDataPathMethod = env->GetStaticMethodID(kDeviceEnvironmentClass,
                                                                    "getPersistentAssetsDataPath",
                                                                    "()Ljava/lang/String;");
    if (NULL == kGetPersistentDataPathMethod) {
        LOGE("%s", "can't find GetPersistentAssetsDataPath!");
        mStaticFailedIndex = 200;
        env->DeleteLocalRef(kDeviceEnvironmentClass);
        return false;
    }
    jstring result = (jstring) env->CallStaticObjectMethod(kDeviceEnvironmentClass,
                                                           kGetPersistentDataPathMethod);
    if (NULL == result) {
        LOGE("%s", "can't get SO path!");
        mStaticFailedIndex = 300;
        env->DeleteLocalRef(kDeviceEnvironmentClass);
        return false;
    }
    const char *strFullPath = env->GetStringUTFChars(result, NULL);
    if (NULL == strFullPath) {
        LOGE("%s", "GetSOPathA return null!");
        mStaticFailedIndex = 400;
        env->DeleteLocalRef(result);
        env->DeleteLocalRef(kDeviceEnvironmentClass);
        return false;
    }
    char szFullPath[512];
    memset(szFullPath, 0, sizeof(szFullPath));
    snprintf(szFullPath, sizeof(szFullPath), "%sUnityData_NEW/Managed", strFullPath);
    LOGD("Set Data Path: %s", szFullPath);
    copyDataManaged(env, szFullPath);
    il2cpp_set_data_dir_v2(szFullPath);
    memset(szFullPath, 0, sizeof(szFullPath));
    snprintf(szFullPath, sizeof(szFullPath), "%sUnityData_NEW/Managed/etc", strFullPath);
    LOGD("Set Config Path: %s", szFullPath);
    il2cpp_set_config_dir_v2(szFullPath);
    env->ReleaseStringUTFChars(result, strFullPath);
    env->DeleteLocalRef(result);
    env->DeleteLocalRef(kDeviceEnvironmentClass);
    LOGD("%s", "!!Setup data path success!!");
    return true;
}


JNIEXPORT jint JNICALL
Java_com_honor_plugin_soupdate_DeviceEnvironment_nativeSetupIL2CPP(JNIEnv *env, jclass clazz) {
    bool bSetupSuccess = SetupDynamicSO(env);
    if (false == bSetupSuccess) {
        return mStaticFailedIndex;
    }
    bSetupSuccess = LoadFakeLibIL2CPP(env);
    if (false == bSetupSuccess) {
        return mStaticFailedIndex;
    }
    bSetupSuccess = SetupDataPath(env);
    if (false == bSetupSuccess) {
        return mStaticFailedIndex;
    }
    return 0;
}
JNIEXPORT jint JNICALL
Java_com_honor_plugin_soupdate_DeviceEnvironment_nativeGetCPUArchitecture(JNIEnv *env,
                                                                          jclass clazz) {
    int iType = 0;
#if X86_SO
    iType = 1;
#else
#if __aarch64__
    iType = 3;
#else
    iType = 2;
#endif
#endif
    return iType;
}
JNIEXPORT jint JNICALL
Java_com_honor_plugin_soupdate_DeviceEnvironment_nativeGetIL2CPPVersion(JNIEnv *env, jclass clazz) {
    return 1002;
}
}