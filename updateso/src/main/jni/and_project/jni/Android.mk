LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../src/
LOCAL_LDLIBS :=-llog
LOCAL_LDLIBS +=-landroid
LOCAL_MODULE_FILENAME := libil2cpp
LOCAL_MODULE    := il2cpp
GAME_SRCS := ../../src/*.c \
             ../../src/*.cpp \
			 ../../src/un7zip/*.c \
			 ../../src/un7zip/src/*.c \
			 ../../src/bspatch/*.c \
			 ../../src/bspatch/*.cpp


LOCAL_SRC_FILES := $(foreach F, $(GAME_SRCS), $(addprefix $(dir $(F)),$(notdir $(wildcard $(LOCAL_PATH)/$(F)))))




include $(BUILD_SHARED_LIBRARY)

