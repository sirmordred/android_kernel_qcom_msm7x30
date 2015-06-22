GCC_VERSION      := $(shell $(CONFIG_SHELL) $(PWD)/scripts/gcc-version.sh $(CROSS_COMPILE)gcc)
ifeq ($(GCC_VERSION),0404)
CFLAGS_REMOVE_msm_vfe8x.o = -Wframe-larger-than=1024
endif

ifeq ($(CONFIG_MSM_CAMERA_V4L2),y)
  obj-$(CONFIG_MSM_CAMERA) += msm_isp.o msm.o
else
  obj-$(CONFIG_MSM_CAMERA) += msm_camera.o msm_v4l2.o
endif
obj-$(CONFIG_MSM_CAMERA) += msm_axi_qos.o
ifeq ($(CONFIG_MACH_ARIESVE),y)
  obj-$(CONFIG_MSM_CAMERA_FLASH) += flash.o
else
  obj-$(CONFIG_MSM_CAMERA_FLASH) += flash.o ledflash.o
endif
obj-$(CONFIG_ARCH_MSM_ARM11) += msm_vfe7x.o msm_io7x.o
obj-$(CONFIG_ARCH_MSM7X30) += msm_vfe31.o msm_io_vfe31.o msm_vpe1.o
obj-$(CONFIG_ARCH_QSD8X50) += msm_vfe8x.o msm_vfe8x_proc.o msm_io8x.o
obj-$(CONFIG_S5K3E2FX) += s5k3e2fx.o
obj-$(CONFIG_SENSOR_CE147) += ce147.o
obj-$(CONFIG_SENSOR_S5KA3DFX) += s5ka3dfx.o
obj-$(CONFIG_SENSOR_S5K4ECGX) += s5k4ecgx.o
obj-$(CONFIG_MSM_GEMINI) += msm_gemini_dev.o msm_gemini_sync.o msm_gemini_core.o msm_gemini_hw.o msm_gemini_platform.o
obj-$(CONFIG_SENSOR_S5K5CCAF) += s5k5ccaf.o
obj-$(CONFIG_SENSOR_SR030PC30) += sr030pc30.o
obj-$(CONFIG_SENSOR_SR130PC10) += sr130pc10.o
