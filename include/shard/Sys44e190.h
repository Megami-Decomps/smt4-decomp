/* The block held in g_statusDown. */
#ifndef SHARD_SYS44E190_H
#define SHARD_SYS44E190_H

#include "common.h"

typedef struct Sys44e190 {
    /* 0x0000 */ u8 unk0000[0x3FC];
    /* 0x03FC */ u8 unk3FC;
    /* 0x03FD */ u8 unk03FD[0x3];
    /* 0x0400 */ s32 unk400;
    /* 0x0404 */ u8 unk0404[0xD];
    /* 0x0411 */ u8 unk411;
    /* 0x0412 */ u8 unk412;
    /* 0x0413 */ u8 unk0413[0xC1];
    /* 0x04D4 */ u8 unk4D4[1];
    /* 0x04D5 */ u8 unk04D5[0x67];
    /* 0x053C */ u32 unk53C;
    /* 0x0540 */ u8 unk0540[0x1E51];
    /* 0x2391 */ u8 unk2391;
} Sys44e190;

extern Sys44e190 *g_statusDown;

#endif
