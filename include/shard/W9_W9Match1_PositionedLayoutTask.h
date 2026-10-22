#ifndef SHARD_W9_W9MATCH1_POSITIONED_LAYOUT_TASK_H
#define SHARD_W9_W9MATCH1_POSITIONED_LAYOUT_TASK_H

#include "common.h"
#include <stddef.h>

struct PositionedLayoutPosition { s32 x, y, z; };

struct PositionedLayoutParameters {
    u8 unk000[0x120];
    PositionedLayoutPosition position; // 0x120
    u8 unk12c[8];
};

struct PositionedLayoutData {
    u8 unk00[0x4c];
    s32 depth; // 0x4c
    u8 unk50[0x60];
};

struct PositionedLayoutTaskWork {
    u32 unk000;
    f32 depth; // 0x004
    u8 unk008[4];
    f32 origin[3]; // 0x00c
    f32 dimensions[3]; // 0x018
    u8 unk024[4];
    f32 firstPair[2]; // 0x028
    f32 secondPair[2]; // 0x030
    u8 unk038[0x1c];
    PositionedLayoutPosition position; // 0x054
    u8 unk060[4];
    PositionedLayoutParameters parameters; // 0x064
    PositionedLayoutData layout; // 0x198
    u32 value; // 0x248
    f32 speed; // 0x24c
    u32 owner; // 0x250
    f32 scale; // 0x254
    u8 kind; // 0x258
    u8 unk259[3];
    s32 firstState; // 0x25c
    s32 secondState; // 0x260
    u8 unk264[0xc8];
    u16 frame; // 0x32c
    u16 startFrame; // 0x32e
};

typedef char PositionedLayoutTaskLayoutCheck[sizeof(PositionedLayoutParameters) == 0x134 && sizeof(PositionedLayoutData) == 0xb0 && sizeof(PositionedLayoutTaskWork) == 0x330 && offsetof(PositionedLayoutTaskWork, position) == 0x54 && offsetof(PositionedLayoutTaskWork, parameters) == 0x64 && offsetof(PositionedLayoutTaskWork, layout) == 0x198 && offsetof(PositionedLayoutTaskWork, value) == 0x248 && offsetof(PositionedLayoutTaskWork, startFrame) == 0x32e ? 1 : -1];

#endif
