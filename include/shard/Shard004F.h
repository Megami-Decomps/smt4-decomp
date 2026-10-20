/* Structs shared by the helper functions in code shard 004F. */
#ifndef SHARD_SHARD004F_H
#define SHARD_SHARD004F_H

#include "common.h"

#include "shard/Shard004E.h"

typedef struct Obj4F {
    /* 0x000 */ u8 unk000[0x38];
    /* 0x038 */ u32 state;
    /* 0x03C */ u32 unk3C;
    /* 0x040 */ u8 unk040[0x618];
    /* 0x658 */ u32 unk658;
    /* 0x65C */ u32 unk65C;
    /* 0x660 */ u8 block660[0x44];
    /* 0x6A4 */ u32 unk6A4;
} Obj4F;

typedef struct State339C {
    /* 0x0000 */ u8 unk0000[0x339C];
    /* 0x339C */ u32 flags;
    /* 0x33A0 */ u32 unk33A0;
    /* 0x33A4 */ u32 unk33A4;
} State339C;

typedef struct RefTo14 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 unk14;
    /* 0x18 */ u8 unk18[0x10];
    /* 0x28 */ u32 unk28;
} RefTo14;

#endif
