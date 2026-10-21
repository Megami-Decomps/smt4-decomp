#ifndef SHARD_W6_W6MATCH3_GXPRESETRESUMESTATE_H
#define SHARD_W6_W6MATCH3_GXPRESETRESUMESTATE_H

#include "common.h"

struct GxPresetResumeState {
    u8 unk000[0x1bc];
    u32 unk1bc;
    u8 unk1c0[8];
    s32 current;
    s32 pending;
    u8 forceBlackCleared;
};

#endif
