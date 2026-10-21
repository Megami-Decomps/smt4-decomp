#ifndef SHARD_W6_W6MATCH3_COLORFADE_H
#define SHARD_W6_W6MATCH3_COLORFADE_H

#include "common.h"

struct ColorFadeWork {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0x10];
    /* 0x64 */ u32 color;
    /* 0x68 */ u8 unk68[8];
    /* 0x70 */ s32 rgbDuration;
    /* 0x74 */ u32 rgbElapsed;
    /* 0x78 */ s32 alphaDuration;
    /* 0x7C */ u32 alphaElapsed;
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 target;
    /* 0x88 */ u32 start;
};

#endif
