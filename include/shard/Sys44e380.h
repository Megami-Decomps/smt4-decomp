/* The state block at 0x44e380 (flags and modes; the accessors read or write one field each). */
#ifndef SHARD_SYS44E380_H
#define SHARD_SYS44E380_H

#include "common.h"

typedef struct Sys44e380 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06;
    /* 0x07 */ s8 unk07;
    /* 0x08 */ s8 unk08;
    /* 0x09 */ s8 unk09;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ s8 unk0D;
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
} Sys44e380;

extern Sys44e380 g_nnAppletState;

#endif
