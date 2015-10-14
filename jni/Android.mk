LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := hello-swift
LOCAL_SRC_FILES := hello-swift.c

include $(BUILD_SHARED_LIBRARY)
