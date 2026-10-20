/* The graphics-settings block at 0x464d48: the setter functions write one word each. */
#ifndef SHARD_GX464D48_H
#define SHARD_GX464D48_H

#include "common.h"

typedef struct Gx464d48 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ u32 unk30;
} Gx464d48;

extern Gx464d48 g_asdTextDefaults;

#endif
