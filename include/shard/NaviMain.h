/* The navigation screen's state block, held in DAT_0044cdf0. */
#ifndef SHARD_NAVIMAIN_H
#define SHARD_NAVIMAIN_H

#include "common.h"

typedef struct NaviMain {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[0x4];
    /* 0x0008 */ u8 closeRequested;
    /* 0x0009 */ u8 unk0009[0x1];
    /* 0x000A */ u8 active;
    /* 0x000B */ u8 unk000B[0x1];
    /* 0x000C */ u32 posX;
    /* 0x0010 */ u32 posY;
    /* 0x0014 */ u8 unk0014[0x14];
    /* 0x0028 */ u32 currentMap;
    /* 0x002C */ u8 unk002C[0xC];
    /* 0x0038 */ u8 cursorPos[1];
    /* 0x0039 */ u8 unk0039[0x7];
    /* 0x0040 */ u32 unk00040[1];
    /* 0x0044 */ u8 unk0044[0x122F0];
    /* 0x12334 */ u8 unk12334[1];
} NaviMain;

extern NaviMain *DAT_0044cdf0;

#endif
