LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE        := libcl1
LOCAL_CFLAGS = -DSTDC_HEADERS
APP_ABI := armeabi-v7a arm64-v8a

LOCAL_SRC_FILES     := cl1.cpp

LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)