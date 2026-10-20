/* The block at 0x4651e8 (applet/shutdown state words). */
#ifndef SHARD_SYS4651E8_H
#define SHARD_SYS4651E8_H

#include "common.h"

typedef struct Sys4651e8 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[0x4];
    /* 0x10 */ u32 unk10;
} Sys4651e8;

extern Sys4651e8 DAT_004651e8;

#endif
