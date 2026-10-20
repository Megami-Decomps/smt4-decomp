/* AsdSDK/Source/Gfx/Effect/effBlurFilter.c: blur filter effects. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFBLURFILTER_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFBLURFILTER_H

#include "common.h"

/* One blur sample (0x34 bytes). */
typedef struct BlurSample {
    /* 0x00 */ f32 offset;      /* distance of the sample from the center */
    /* 0x04 */ f32 weight;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ u8 unk18[0x1C];
} BlurSample;

/* Parameters of a blur filter effect. */
typedef struct BlurParams {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ s32 sampleCount;
    /* 0xC4 */ u32 unkc4;
    /* 0xC8 */ f32 step;        /* distance between samples */
    /* 0xCC */ u32 unkcc;
    /* 0xD0 */ f32 unkd0;
    /* 0xD4 */ f32 unkd4;
} BlurParams;

#endif
