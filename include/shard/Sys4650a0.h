/* The block at 0x4650a0. */
#ifndef SHARD_SYS4650A0_H
#define SHARD_SYS4650A0_H

#include "common.h"

typedef struct Sys4650a0 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
} Sys4650a0;

extern Sys4650a0 DAT_004650a0;

#endif
