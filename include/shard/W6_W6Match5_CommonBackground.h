#ifndef SHARD_W6_W6MATCH5_COMMONBACKGROUND_H
#define SHARD_W6_W6MATCH5_COMMONBACKGROUND_H

#include "common.h"

struct CommonBackgroundState {
    union {
        u8 unk00[8];
        struct {
            u32 unk00;
            s32 frame; // 0x04
        } counters;
    };
    s32 state; // 0x08
    u32 unk0c;
    f32 progress; // 0x10
    union {
        u32 timer; // 0x14
        s32 signedTimer;
    };
};
struct CommonBackgroundChild {
    u32 job;
    s8 shown;      // 0x04: the overlay is wanted
    u8 fadeMode;   // 0x05: 0 idle, 1 fading out, 2 fading in, 3 hidden
    u8 unk06[2];
    u32 unk08;
    u8 unk0c[8];
    f32 fade;      // 0x14
    f32 fadeMax;   // 0x18
    u8 keepAlive; // 0x1c
};
struct CommonBackgroundGlobals {
    union {
        u32 unk00;
        s8 referenceBytes[4]; // reference count is byte 2 in Apocalypse
    };
    CommonBackgroundState *background; // 0x04
    CommonBackgroundChild *child; // 0x08
    CommonBackgroundChild *owned; // 0x0c
};

extern "C" CommonBackgroundGlobals g_commonBg;

#endif
