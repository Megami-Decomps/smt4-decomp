/* The state block at 0x43e0b8. */
#ifndef SHARD_SYS43E0B8_H
#define SHARD_SYS43E0B8_H

#include "common.h"

typedef struct Sys43e0b8 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ u8 unk01[0x1];
    /* 0x02 */ s8 unk02;
    /* 0x03 */ s8 unk03;
    /* 0x04 */ s32 unk04;
} Sys43e0b8;

extern Sys43e0b8 DAT_0043e0b8;

#endif
