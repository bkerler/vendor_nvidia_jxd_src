/**
 * Copyright (c) 2012-2013 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef __IMX132_H__
#define __IMX132_H__

#include <linux/ioctl.h>  /* For IOCTL macros */

#define IMX132_IOCTL_SET_MODE           _IOW('o', 1, struct imx132_mode)
#define IMX132_IOCTL_GET_STATUS         _IOR('o', 2, __u8)
#define IMX132_IOCTL_SET_FRAME_LENGTH   _IOW('o', 3, __u32)
#define IMX132_IOCTL_SET_COARSE_TIME    _IOW('o', 4, __u32)
#define IMX132_IOCTL_SET_GAIN           _IOW('o', 5, __u16)
#define IMX132_IOCTL_GET_FUSEID         _IOR('o', 6, struct nvc_fuseid)
#define IMX132_IOCTL_SET_GROUP_HOLD     _IOW('o', 7, struct imx132_ae)

struct imx132_mode {
  int xres;
  int yres;
  __u32 frame_length;
  __u32 coarse_time;
  __u16 gain;
};

struct imx132_ae {
  __u32 frame_length;
  __u8  frame_length_enable;
  __u32 coarse_time;
  __u8  coarse_time_enable;
  __s32 gain;
  __u8  gain_enable;
};

#endif  /* __IMX132_H__ */
