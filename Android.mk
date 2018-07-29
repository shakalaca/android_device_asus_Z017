#
# Copyright (C) 2012 The Android Open-Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

ifeq ($(TARGET_DEVICE),Z017)

LOCAL_PATH := $(call my-dir)
include $(call all-subdir-makefiles,$(LOCAL_PATH))

include $(CLEAR_VARS)

BOARD_RECOVERY_IMAGE_PREPARE := \
  sed -i 's/ro.build.id=.*/ro.build.id=OPR1.170623.026/g' $(TARGET_RECOVERY_ROOT_OUT)/default.prop

TEXFAT_MODULE := $(TARGET_RECOVERY_ROOT_OUT)/sbin/texfat.ko
$(TEXFAT_MODULE): $(ANDROID_PRODUCT_OUT)/kernel
	@cp $(KERNEL_MODULES_OUT)/texfat.ko $(TEXFAT_MODULE)
	kernel/asus/Z017/scripts/sign-file sha512 \
		$(ANDROID_PRODUCT_OUT)/obj/KERNEL_OBJ/signing_key.priv \
		$(ANDROID_PRODUCT_OUT)/obj/KERNEL_OBJ/signing_key.x509 \
		$(TEXFAT_MODULE)

ALL_DEFAULT_INSTALLED_MODULES += $(TEXFAT_MODULE)
endif
