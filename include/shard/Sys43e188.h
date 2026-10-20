/* The block at 0x43e188; target points at a status object. */
#ifndef SHARD_SYS43E188_H
#define SHARD_SYS43E188_H

#include "common.h"

typedef struct Target43e188 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ s8 unk08;
    /* 0x09 */ u8 unk09[0xF];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20[0xF];
    /* 0x2F */ u8 unk2F;
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 unk31;
    /* 0x32 */ u8 unk32;
    /* 0x33 */ u8 unk33;
    /* 0x34 */ u8 unk34[0x30];
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u8 unk68[0x8];
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u32 unk74;
    /* 0x78 */ u8 unk78[0x4];
    /* 0x7C */ u8 unk7C;
    /* 0x7D */ u8 unk7D;
    /* 0x7E */ u8 unk7E;
    /* 0x7F */ u8 unk7F;
    /* 0x80 */ u8 unk80;
    /* 0x81 */ u8 unk81;
} Target43e188;

typedef struct StateObj {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u8 state;
    /* 0x009 */ u8 unk009;
    /* 0x00A */ u8 unk00A[0x2A];
    /* 0x034 */ u8 unk034;
    /* 0x035 */ u8 unk035;
    /* 0x036 */ u8 unk036[0x9DA];
    /* 0xA10 */ u8 unkA10;
    /* 0xA11 */ u8 unkA11;
    /* 0xA12 */ u8 unkA12[0x22];
    /* 0xA34 */ u8 unkA34;
} StateObj;

typedef struct Sys43e188 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01[0x3];
    /* 0x04 */ StateObj *state;
    /* 0x08 */ Target43e188 *target;
} Sys43e188;

extern Sys43e188 g_messageMain;

#endif
