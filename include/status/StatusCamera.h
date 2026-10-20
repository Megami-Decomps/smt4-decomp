/* status/StatusCamera.c: the status screen's 3D camera. */
#ifndef STATUS_STATUSCAMERA_H
#define STATUS_STATUSCAMERA_H

#include "common.h"

typedef struct Vec3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
} Vec3;

typedef struct CameraLens {
    /* 0x00 */ f32 fov;
    /* 0x04 */ f32 nearClip;
    /* 0x08 */ f32 farClip;
} CameraLens;

/* Work area, Shin Megami Tensei IV. */
typedef struct StatusCameraWork {
    /* 0x00 */ u8 unk00[0x508];
    /* 0x508 */ Vec3 eye;                   /* camera position */
    /* 0x514 */ Vec3 dir;                   /* view direction */
    /* 0x520 */ Vec3 unk520;
    /* 0x52C */ f32 dist;                   /* distance from the eye to the target along dir */
    /* 0x530 */ CameraLens lens;
} StatusCameraWork;

/* Work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct StatusCameraWorkA {
    /* 0x00 */ u8 unk00[0x50C];
    /* 0x50C */ Vec3 eye;                   /* camera position */
    /* 0x518 */ Vec3 dir;                   /* view direction */
    /* 0x524 */ Vec3 unk524;
    /* 0x530 */ f32 dist;                   /* distance from the eye to the target along dir */
    /* 0x534 */ CameraLens lens;
} StatusCameraWorkA;

#endif
