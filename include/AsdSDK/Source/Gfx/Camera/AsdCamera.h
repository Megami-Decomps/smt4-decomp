/* AsdSDK/Source/Gfx/Camera/AsdCamera.cpp: the screen camera (0x50C bytes). */
#ifndef ASDSDK_SOURCE_GFX_CAMERA_ASDCAMERA_H
#define ASDSDK_SOURCE_GFX_CAMERA_ASDCAMERA_H

#include "common.h"
#include <stddef.h>
#include "nw/math/MTX34.h"
#include "nw/math/MTX44.h"

/* The stereo pair's parameters (0x6C bytes); initialized by FUN_0015a0e0. */
struct AsdCameraStereo {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 unk64;
    /* 0x68 */ f32 unk68;
};

struct AsdCamera {
    /* 0x000 */ u8 enabled;
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u8 unk002[0x36];
    /* 0x038 */ nw::math::MTX34 view;
    /* 0x068 */ u8 unk068[0x40];
    /* 0x0A8 */ nw::math::MTX44 projection;
    /* 0x0E8 */ nw::math::MTX44 stereoProjection;
    /* 0x128 */ u8 unk128[0x370];
    /* 0x498 */ f32 unk498;
    /* 0x49C */ u8 unk49c[4];
    /* 0x4A0 */ AsdCameraStereo stereo;
    /* 0x50C: end */
};

typedef char AsdCameraLayoutCheck[offsetof(AsdCamera, view) == 0x38 &&
    offsetof(AsdCamera, projection) == 0xA8 && offsetof(AsdCamera, stereoProjection) == 0xE8 &&
    offsetof(AsdCamera, stereo) == 0x4A0 && sizeof(AsdCamera) == 0x50C ? 1 : -1];

#endif
