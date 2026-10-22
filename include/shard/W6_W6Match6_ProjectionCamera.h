#ifndef SHARD_W6_W6MATCH6_PROJECTION_CAMERA_H
#define SHARD_W6_W6MATCH6_PROJECTION_CAMERA_H
#include "common.h"
#include <stddef.h>

struct ProjectionLens {
    f32 unk00;
    f32 nearClip; // 0x04
    f32 farClip; // 0x08
    f32 aspect; // 0x0c
    union {
        f32 fieldOfView; // 0x10, radians for the perspective lens
        f32 windowSpan;  // 0x10, extent for the off-center lens
    };
    f32 centerX; // 0x14, off-center lens only
    f32 centerY; // 0x18, off-center lens only
};
struct ProjectionCamera {
    u8 unk00[8];
    u8 orientation; // 0x08
    u8 unk09[3];
    f32 scaleX; // 0x0c
    f32 scaleY; // 0x10
    f32 offsetX; // 0x14
    f32 offsetY; // 0x18
    ProjectionLens *lens; // 0x1c
};
struct CameraLookAt {
    f32 eye[3];
    f32 target[3];
    f32 up[3];
    u8 unk24[0x10];
    f32 rollRadians; // 0x34
};
typedef char CameraLookAtLayoutCheck[sizeof(CameraLookAt) == 0x38 &&
    offsetof(CameraLookAt, target) == 0xC && offsetof(CameraLookAt, up) == 0x18 &&
    offsetof(CameraLookAt, rollRadians) == 0x34 ? 1 : -1];

struct ProjectionMatrices {
    u8 unk00[0x38];
    f32 view[3][4]; // 0x38
    u8 unk68[0x40];
    f32 projection[4][4]; // 0xa8
};
typedef char ProjectionMatricesOffsetCheck[sizeof(ProjectionMatrices) == 0xe8 &&
    offsetof(ProjectionMatrices, view) == 0x38 &&
    offsetof(ProjectionMatrices, projection) == 0xa8 ? 1 : -1];
#endif
