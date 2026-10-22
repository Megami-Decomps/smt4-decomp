#ifndef SHARD_FRAMECOLORSTATE_H
#define SHARD_FRAMECOLORSTATE_H

#include "common.h"

struct FrameColorState {
    /* 0x00 */ u8 unk00[0x5c];
    /* 0x5c */ u32 highByte;
    /* 0x60 */ u32 upperMiddleByte;
    /* 0x64 */ u32 lowerMiddleByte;
    /* 0x68 */ u32 lowByte;
    /* 0x6c */ u32 secondLowByte;
    /* 0x70 */ u32 thirdLowByte;
    /* 0x74 */ u32 firstColor;
    /* 0x78 */ u32 secondColor;
    /* 0x7c */ u32 thirdColor;
};

#endif
