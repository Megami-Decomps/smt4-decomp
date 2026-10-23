#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFECTBOUNDS_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFECTBOUNDS_H
#include "common.h"
#include <stddef.h>

struct EffectBoundsImage {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 width;
    /* 0x26 */ u16 height;
};
struct EffectBoundsImageBinding {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ EffectBoundsImage *image;
};
struct EffectBoundsCustomSize {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
};
struct EffectBoundsCustomBinding {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ EffectBoundsCustomSize *size;
};
struct EffectBoundsSource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ EffectBoundsImageBinding *binding;
    /* 0x08 */ EffectBoundsCustomBinding *custom;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ f32 marginX;
    /* 0x14 */ f32 marginY;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ u8 useCustomSize;
    /* 0x1D */ u8 useAlternateMode;
};
typedef char EffectBoundsSourceModeOffsetCheck[
    offsetof(EffectBoundsSource, useAlternateMode) == 0x1D && sizeof(EffectBoundsSource) == 0x20 ? 1 : -1];
#endif
