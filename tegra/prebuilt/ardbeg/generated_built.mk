# Generated by release script
LOCAL_PATH := $(call my-dir)
subdirs := \
  ../../core/drivers/nvavpgpio \
  ../../core/drivers/nvpinmux \
  ../../core/drivers/nvavp/uart \
  ../../core/drivers/nvavp/sdmmc \
  ../../core/drivers/nvddk/disp \
  ../../core/drivers/nvddk/aes \
  ../../core/drivers/nvddk/usb \
  ../../core/drivers/nvddk/spi_flash \
  ../../core/drivers/nvddk/sata \
  ../../core/drivers/nvddk/snor \
  ../../core/drivers/nvddk/i2s \
  ../../core/drivers/nvddk/spi \
  ../../core/drivers/nvddk/blockdev \
  ../../core/drivers/nvddk/sdio \
  ../../core/drivers/nvddk/fuses \
  ../../core/drivers/nvddk/keyboard \
  ../../core/drivers/nvddk/i2c \
  ../../core/drivers/nvddk/se \
  ../../core/drivers/nvodm \
  ../../core/drivers/nvrm/nvrmkernel \
  ../../core/drivers/nvrm/graphics \
  ../../core/system/nv3p \
  ../../core/system/nvaboot \
  ../../core/system/fastboot \
  ../../core/system/nvfs \
  ../../core/system/utils \
  ../../core/system/nvbdktest \
  ../../core/system/nvbct \
  ../../core/system/nvcrypto \
  ../../core/system/nvpartmgr \
  ../../core/system/nvflash/app \
  ../../core/system/nvflash/lib \
  ../../core/system/nv3pserver \
  ../../core/system/nvfsmgr \
  ../../core/system/nvbuildbct \
  ../../core/system/nvstormgr \
  ../../core/mobile_linux/daemons/nv_hciattach \
  ../../core/include \
  ../../core/utils/chipid \
  ../../core/utils/aes_ref \
  ../../core/utils/nvos \
  ../../core/utils/nvosutils \
  ../../core/utils/nvintr \
  ../../core/utils/nvappmain \
  ../../core/utils/nvfxmath \
  ../../core/utils/tegrastats \
  ../../core/utils/nvapputil \
  ../../core/utils/nvusbhost/libnvusbhost \
  ../../core/utils/md5 \
  ../../3rdparty/libusb/libusb \
  ../../3rdparty/python-support-files \
  ../../3rdparty/khronos/conform/opengles2/conform/GTF_ES/utilityLibs/expat1.95.8 \
  ../../tests-partner/hdcp/libhdcp_up \
  ../../tests-partner/hdcp/nvhdcp_test \
  ../../tests-partner/openmax/omxplayer2 \
  ../../secureos/nvsi \
  ../../ote/daemon \
  ../../ote/client/tests/testapp/tasks/trusted_app2 \
  ../../ote/client/tests/testapp/tasks/trusted_app \
  ../../ote/client/samples/storagedemo \
  ../../ote/storage/hwkeystore/client \
  ../../ote/storage/hwkeystore/task \
  ../../ote/storage/service \
  ../../multimedia-partner/utils/nvavp \
  ../../multimedia-partner/android/libaudio \
  ../../multimedia-partner/android/libstagefrighthw \
  ../../multimedia-partner/openmax/ilclient \
  ../../multimedia-partner/wfd/nvcap_test \
  ../../multimedia-partner/wfd/NvwfdService \
  ../../graphics-partner/android/frameworks/Graphics \
  ../../graphics-partner/android/hwcomposer \
  ../../graphics-partner/android/libnvgr \
  ../../graphics-partner/android/gralloc \
  ../../icera/ril \
  ../../icera/apps/ModemErrorReporter \
  ../../camera-partner/imager \
  ../../camera-partner/android/libnvcamerategra

productfiles := \
  $(TEGRA_TOP)/odm/Android.mk \
  $(TEGRA_TOP)/prebuilt/$(REFERENCE_DEVICE)/Android.mk \
  

ifeq (,$(filter-out tegra%,$(TARGET_BOARD_PLATFORM)))
ifneq ($(HAVE_NVIDIA_PROP_SRC),false)
  include $(call all-named-subdir-makefiles,$(subdirs)) $(productfiles)
  include $(TEGRA_TOP)/core/modules.mk
endif
endif
