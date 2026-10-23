#ifndef GFX_CAMERA_PARAMETERS_H
#define GFX_CAMERA_PARAMETERS_H
#include "common.h"
#include "shard/S1Mover.h"
#include <stddef.h>

/* Editable camera pose and projection settings. */
struct CameraParameters {
    /* 0x00 */ Vec3f eye;
    /* 0x0C */ Vec3f target;
    /* 0x18 */ Vec3f up;
    /* 0x24 */ f32 fieldOfView;
    /* 0x28 */ f32 nearClip;
    /* 0x2C */ f32 farClip;
    /* 0x30 */ f32 aspect;
    /* 0x34 */ f32 roll;
    /* 0x38 */ Vec3f rotation;
};
struct CameraProjectionSource {
    /* 0x00 */ u8 unk00[0xB4];
    /* 0xB4 */ u32 mode;
};
struct CameraParameterSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ CameraProjectionSource *projection;
    /* 0x0C */ u8 unk0C[0x40];
    /* 0x4C */ f32 transform[3][4];
};
struct CameraParameterOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ CameraParameterSource *camera;
};
typedef char CameraParametersOffsets[
    offsetof(CameraParameters, target) == 0xC &&
    offsetof(CameraParameters, up) == 0x18 &&
    offsetof(CameraParameters, fieldOfView) == 0x24 &&
    offsetof(CameraParameters, nearClip) == 0x28 &&
    offsetof(CameraParameters, farClip) == 0x2C &&
    offsetof(CameraParameters, aspect) == 0x30 &&
    offsetof(CameraParameters, roll) == 0x34 &&
    offsetof(CameraParameters, rotation) == 0x38 &&
    sizeof(CameraParameters) == 0x44 &&
    offsetof(CameraProjectionSource, mode) == 0xB4 &&
    offsetof(CameraParameterSource, transform) == 0x4C &&
    offsetof(CameraParameterOwner, camera) == 8 ? 1 : -1];
#endif
