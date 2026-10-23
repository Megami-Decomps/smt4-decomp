#ifndef ASDSDK_EFFECT_BEHAVIOR_BLOCK_H
#define ASDSDK_EFFECT_BEHAVIOR_BLOCK_H
#include "common.h"
#include <stddef.h>

struct EffectBehaviorVector { f32 x, y, z, w; };
struct EffectBehaviorParameters {
    EffectBehaviorVector vectors[2];
    u8 unk20[0x9C];
    u8 enabled;
    u8 unkBD[3];
    s32 rows;
    s32 columns;
};
struct EffectBehaviorType {
    u8 prefix[8];
    u32 elementSize;
    u32 parameterSize;
    u8 suffix[4];
};
struct EffectBehaviorBlock {
    u16 type;
    u16 unk02;
    s32 count;
    s32 elementCount;
    u32 flags;
    u32 state;
    f32 elapsed;
    void *elements;
    void *workspace;
    EffectBehaviorParameters *parameters;
    EffectBehaviorParameters *initialParameters;
    EffectBehaviorBlock *owner;
    u32 unk2C;
};
typedef char EffectBehaviorLayoutCheck[sizeof(EffectBehaviorBlock) == 0x30 &&
    sizeof(EffectBehaviorType) == 0x14 && offsetof(EffectBehaviorParameters, enabled) == 0xBC &&
    offsetof(EffectBehaviorParameters, rows) == 0xC0 ? 1 : -1];
#endif
