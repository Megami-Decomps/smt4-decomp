/* Global at 0x57F0C4: a pointer (at 4) to a record holding six 0x8C-byte units, their kinds
 * and a count, among other fields. Offsets are from the shard functions' accesses. */
#ifndef SHARD_BLOCK57F0C4_H
#define SHARD_BLOCK57F0C4_H

#include "common.h"

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x8C];
} Unit;

typedef struct UnitKind {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
} UnitKind;

typedef struct Record57f0c4 {
    /* 0x000 */ u8 unk000[0x0C];
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ u32 unk010;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ Unit units[6];
    /* 0x37C */ u8 unk37C[0x230];
    /* 0x5AC */ UnitKind kinds[6];
    /* 0x5C4 */ u8 unk5C4[0x0C];
    /* 0x5D0 */ s32 count;
    /* 0x5D4 */ u8 unk5D4[0x12];
    /* 0x5E6 */ u16 id;
    /* 0x5E8 */ u8 unk5E8[0x98];
    /* 0x680 */ u32 unk680;
} Record57f0c4;

typedef struct Block57f0c4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record57f0c4 *record;
} Block57f0c4;

extern Block57f0c4 DAT_0057f0c4;

#endif
