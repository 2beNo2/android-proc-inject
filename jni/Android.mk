LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := test
LOCAL_SRC_FILES := main.c
LOCAL_LDLIBS := -lc -ldl -llog

include $(BUILD_EXECUTABLE)