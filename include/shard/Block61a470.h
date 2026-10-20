/* Global at 0x61A470 and the pool object it points at (offset 0x9C). Offsets are from the
 * accesses in the shard functions; the meaning of each word is a guess from how it is used. */
#ifndef SHARD_BLOCK61A470_H
#define SHARD_BLOCK61A470_H

#include "common.h"

typedef struct Pool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 start;
    /* 0x08 */ s32 length;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ void *entries;     /* array of 0x1C-byte records */
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ s32 entryCount;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3C;
    /* 0x3D */ u8 unk3D;
} Pool;

typedef struct Block61a470 {
    /* 0x000 */ u8 unk000[0x9C];
    /* 0x09C */ Pool *pool;
    /* 0x0A0 */ u8 unk0A0[0x84];
    /* 0x124 */ s32 state;
} Block61a470;

extern Block61a470 DAT_0061a470;

#endif
