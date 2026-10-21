#ifndef SHARD_W6_W6MATCH7_FACINGANGLES_H
#define SHARD_W6_W6MATCH7_FACINGANGLES_H
#include "common.h"

struct FacingVector3 {
    f32 x, y, z;
};

struct FacingPoint2 {
    f32 x, y;
};

struct FacingAngles {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 pitch;
    /* 0x008 */ u8 unk008[4];
    /* 0x00c */ s32 yaw;
    /* 0x010 */ u8 unk010[0x110];
    /* 0x120 */ FacingVector3 direction;
    /* 0x12c */ u8 unk12c[4];
    /* 0x130 */ u8 flags;
    /* 0x131 */ u8 unk131[0xa7];
    /* 0x1d8 */ u8 mode;
    /* 0x1d9 */ u8 unk1d9[0xfb];
    /* 0x2d4 */ FacingPoint2 target;
    /* 0x2dc */ u8 unk2dc[0x70];
    /* 0x34c */ f32 divisor;
};
#endif
