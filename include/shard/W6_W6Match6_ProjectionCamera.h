#ifndef SHARD_W6_W6MATCH6_PROJECTION_CAMERA_H
#define SHARD_W6_W6MATCH6_PROJECTION_CAMERA_H
#include "common.h"

struct ProjectionLens {
    f32 unk00;
    f32 nearClip; // 0x04
    f32 farClip; // 0x08
    f32 aspect; // 0x0c
    f32 fieldOfView; // 0x10, radians
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
#endif
