/* The block at 0x471a70 (first bytes are flags). */
#ifndef SHARD_SYS471A70_H
#define SHARD_SYS471A70_H

#include "common.h"

typedef struct Sys471a70 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ s8 unk02;
    /* 0x03 */ u8 unk03[0x19];
    /* 0x1C */ u32 unk1C;
} Sys471a70;

extern Sys471a70 DAT_00471a70;

#endif
