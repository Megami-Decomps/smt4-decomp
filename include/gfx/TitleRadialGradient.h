#ifndef GFX_TITLE_RADIAL_GRADIENT_H
#define GFX_TITLE_RADIAL_GRADIENT_H

#include <stddef.h>
#include "shard/Shard0036.h"

struct TitleGradientPoint {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
};

struct TitleGradientBlock {
    /* 0x00 */ RgbaWord color;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ TitleGradientPoint first;
    /* 0x10 */ TitleGradientPoint last;
};

struct TitleRadialGradient {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ TitleGradientBlock block;
};

typedef char TitleRadialGradientOffsets[offsetof(TitleRadialGradient, block) == 0xC &&
    offsetof(TitleGradientBlock, first) == 8 && offsetof(TitleGradientBlock, last) == 0x10 ? 1 : -1];

extern "C" void titleDrawRadialGradient(const TitleRadialGradient *gradient, u32 value);

#endif
