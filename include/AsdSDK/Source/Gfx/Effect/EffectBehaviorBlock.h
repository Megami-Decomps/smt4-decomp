#ifndef ASDSDK_EFFECT_BEHAVIOR_BLOCK_H
#define ASDSDK_EFFECT_BEHAVIOR_BLOCK_H
#include "common.h"
#include <stddef.h>

struct EffectBehaviorVector { f32 x, y, z, w; };
/* The parameters every behavior type's block starts with (0xC8 bytes); each type's own parameters
 * follow (parameterSize in its EffectBehaviorType). The unkNN floats are lengths every type's scale
 * callback multiplies by the effect's scale. */
struct EffectBehaviorParameters {
    /* 0x00 */ EffectBehaviorVector vectors[2];
    /* 0x20 */ u8 unk20[0x44];
    /* 0x64 */ f32 unk64;
    /* 0x68 */ f32 unk68;
    /* 0x6C */ u8 unk6C[8];
    /* 0x74 */ f32 unk74;
    /* 0x78 */ u8 unk78[4];
    /* 0x7C */ f32 unk7C;
    /* 0x80 */ u8 unk80[4];
    /* 0x84 */ f32 unk84;
    /* 0x88 */ u8 unk88[0x34];
    /* 0xBC */ u8 enabled;
    /* 0xBD */ u8 unkBD[3];
    /* 0xC0 */ s32 rows;
    /* 0xC4 */ s32 columns;
};
struct EffectBehaviorBlock;

/* One behavior type's entry of g_effBehaviorTable (0x14 bytes, indexed by EffectBehaviorBlock.type). */
struct EffectBehaviorType {
    /* 0x00 */ void (*run)(EffectBehaviorBlock *block);
    /* 0x04 */ void (*scale)(EffectBehaviorBlock *block, f32 scale); /* parameters = initialParameters * scale */
    /* 0x08 */ u32 elementSize;
    /* 0x0C */ u32 parameterSize;
    /* 0x10 */ u8 suffix[4];
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
    EffectBehaviorParameters *parameters;        /* the current parameters, scaled */
    EffectBehaviorParameters *initialParameters; /* the parameters as created */
    EffectBehaviorBlock *owner;
    u32 unk2C;
};
/* Behavior type 3's parameters (parameterSize 0xF4). */
struct EffectBehaviorParameters3 {
    /* 0x00 */ EffectBehaviorParameters common;
    /* 0xC8 */ f32 unkC8;
    /* 0xCC */ f32 unkCC;
    /* 0xD0 */ u8 unkD0[4];
    /* 0xD4 */ f32 unkD4;
    /* 0xD8 */ u8 unkD8[0xC];
    /* 0xE4 */ f32 unkE4;
    /* 0xE8 */ u8 unkE8[8];
    /* 0xF0 */ f32 unkF0;
};

/* Behavior type 4's parameters (parameterSize 0xE8). */
struct EffectBehaviorParameters4 {
    /* 0x00 */ EffectBehaviorParameters common;
    /* 0xC8 */ f32 unkC8;
    /* 0xCC */ u8 unkCC[4];
    /* 0xD0 */ f32 unkD0;
    /* 0xD4 */ u8 unkD4[0x10];
    /* 0xE4 */ f32 unkE4;
};

typedef char EffectBehaviorTypeParametersCheck[
    offsetof(EffectBehaviorParameters, unk64) == 0x64 && offsetof(EffectBehaviorParameters, unk84) == 0x84 &&
    sizeof(EffectBehaviorParameters) == 0xC8 && sizeof(EffectBehaviorParameters3) == 0xF4 &&
    offsetof(EffectBehaviorParameters3, unkF0) == 0xF0 && sizeof(EffectBehaviorParameters4) == 0xE8 &&
    offsetof(EffectBehaviorParameters4, unkE4) == 0xE4 && offsetof(EffectBehaviorType, parameterSize) == 0xC &&
    offsetof(EffectBehaviorBlock, parameters) == 0x20 &&
    offsetof(EffectBehaviorBlock, initialParameters) == 0x24 ? 1 : -1];
typedef char EffectBehaviorLayoutCheck[sizeof(EffectBehaviorBlock) == 0x30 &&
    sizeof(EffectBehaviorType) == 0x14 && offsetof(EffectBehaviorParameters, enabled) == 0xBC &&
    offsetof(EffectBehaviorParameters, rows) == 0xC0 ? 1 : -1];
#endif
