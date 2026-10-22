#ifndef SHARD_W9_W9MATCH1_MOTION_PLAYER_H
#define SHARD_W9_W9MATCH1_MOTION_PLAYER_H

#include "common.h"
#include <stddef.h>

struct MotionInfo {
    u8 unk00[0x54];
    u32 frame; // 0x54
};
struct MotionSource {
    u8 unk00[0x0c];
    u32 flags; // 0x0c
    s32 keyCount; // 0x10
    u8 unk14[0x0c];
    MotionInfo *info; // 0x20
};
struct MotionTargets {
    u8 unk00[0x10];
    u32 first; // 0x10
    u32 second; // 0x14
};
struct MotionPlayer {
    void *active; // 0x00
    u8 unk04[0x20];
    f32 speed; // 0x24
    MotionTargets *targets; // 0x28
    u32 sound; // 0x2c
    MotionSource *source; // 0x30
};

typedef char MotionPlayerLayoutCheck[sizeof(MotionInfo) == 0x58 && sizeof(MotionSource) == 0x24 && sizeof(MotionTargets) == 0x18 && sizeof(MotionPlayer) == 0x34 && offsetof(MotionSource, keyCount) == 0x10 && offsetof(MotionPlayer, speed) == 0x24 && offsetof(MotionPlayer, source) == 0x30 ? 1 : -1];

#endif
