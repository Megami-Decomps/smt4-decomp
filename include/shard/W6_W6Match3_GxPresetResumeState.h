#ifndef SHARD_W6_W6MATCH3_GXPRESETRESUMESTATE_H
#define SHARD_W6_W6MATCH3_GXPRESETRESUMESTATE_H

#include "common.h"
#include <stddef.h>

struct GxPresetResumeState {
    u8 unk000[0x1bc];
    u32 unk1bc;
    s32 unk1c0;
    u8 unk1c4[4];
    s32 current;
    s32 pending;
    u8 forceBlackCleared;
};

typedef char GxPresetResumeStateOffsetsCheck[offsetof(GxPresetResumeState, unk1c0) == 0x1C0 && offsetof(GxPresetResumeState, current) == 0x1C8 ? 1 : -1];

#endif
