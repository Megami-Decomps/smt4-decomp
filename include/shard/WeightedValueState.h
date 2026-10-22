#ifndef SHARD_WEIGHTEDVALUESTATE_H
#define SHARD_WEIGHTEDVALUESTATE_H

#include "common.h"

struct WeightedValueConfig {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 value;
    /* 0x24 */ s32 multiplier;
    /* 0x28 */ u8 unk28[0x90];
    /* 0xb8 */ s32 fallbackValue;
};
struct WeightedValueState {
    /* 0x00 */ u32 value;
    /* 0x04 */ s32 target;
    /* 0x08 */ f32 scale;
    /* 0x0c */ u8 unk0c[0x28];
    /* 0x34 */ u16 active;
    /* 0x36 */ u8 unk36[2];
};

#endif
