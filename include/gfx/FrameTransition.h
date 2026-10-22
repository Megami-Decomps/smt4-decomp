#ifndef GFX_FRAMETRANSITION_H
#define GFX_FRAMETRANSITION_H

#include "common.h"

struct FrameTransitionColors {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ u32 red;
    /* 0x80 */ u32 green;
    /* 0x84 */ u32 blue;
    /* 0x88 */ u32 firstAlpha;
    /* 0x8C */ u32 secondAlpha;
    /* 0x90 */ u32 thirdAlpha;
    /* 0x94 */ u32 firstColor;
    /* 0x98 */ u32 secondColor;
    /* 0x9C */ u32 thirdColor;
};

#endif
