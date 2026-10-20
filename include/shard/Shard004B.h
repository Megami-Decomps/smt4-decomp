/* Structs shared by the helper functions in code shard 004B. */
#ifndef SHARD_SHARD004B_H
#define SHARD_SHARD004B_H

#include "common.h"

#include "shard/Shard004A.h"

typedef struct ListEntry20 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 kind;
    /* 0x21 */ u8 unk21[0x39];
    /* 0x5A */ u16 unk5A;
} ListEntry20;

typedef struct Menu4C {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u32 flags;
    /* 0x024 */ u8 unk024[0x1E];
    /* 0x042 */ u8 value42[6];
    /* 0x048 */ u8 unk048[0x2C];
    /* 0x074 */ u8 block74[0x10];
    /* 0x084 */ u8 flag84;
    /* 0x085 */ u8 unk085[0x23];
    /* 0x0A8 */ u8 blockA8[4];
    /* 0x0AC */ u8 unk0AC[0x73C];
    /* 0x7E8 */ s32 count;
    /* 0x7EC */ ListEntry20 *list[0x7F];
    /* 0x9E8 */ u8 unk9E8[5];
    /* 0x9ED */ u8 unk9ED;
    /* 0x9EE */ u8 unk9EE;
    /* 0x9EF */ u8 unk9EF[0x21];
    /* 0xA10 */ u8 rowsA10[10][0x8C];
    /* 0xF88 */ u8 unkF88[0x8C];
    /* 0x1014 */ u32 unk1014;
    /* 0x1018 */ u32 unk1018;
    /* 0x101C */ u32 unk101C;
    /* 0x1020 */ u32 unk1020;
    /* 0x1024 */ u8 unk1024[0x10];
    /* 0x1034 */ u8 flags1034[0x40];
    /* 0x1074 */ u32 unk1074;
} Menu4C;

typedef struct EntryD0 {
    /* 0x00 */ u8 data[0xD0];
} EntryD0;

typedef struct BitsAt60 {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 bits;
} BitsAt60;

typedef struct Halves34 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 h[8];
} Halves34;

#endif
