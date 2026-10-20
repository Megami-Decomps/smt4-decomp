/* The system-settings block at 0x464af0. */
#ifndef SHARD_SYS464AF0_H
#define SHARD_SYS464AF0_H

#include "common.h"

typedef struct Sys464af0 {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ s8 unk04;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[0x38];
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u8 unk48[0x34];
    /* 0x7C */ u32 unk7C;
} Sys464af0;

extern Sys464af0 DAT_00464af0;

#endif
