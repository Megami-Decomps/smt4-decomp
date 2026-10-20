/* Structs shared by the helper functions in code shard 0035. */
#ifndef SHARD_SHARD0035_H
#define SHARD_SHARD0035_H

#include "common.h"

#include "shard/Shard0034.h"

/* Entry of data table 0x4C (0x30 bytes). */
/* Entry of data table 0x4C (0x30 bytes). */
/* Entry of data table 0x4C (0x30 bytes). */
/* Entry of data table 0x4C (0x30 bytes). */
/* Entry of data table 0x4C (0x30 bytes). */
typedef struct Entry30 {
    /* 0x00 */ s16 unk00;
    /* 0x02 */ u8 unk02[0x6];
    /* 0x08 */ s16 unk08;
    /* 0x0A */ u8 unk0A[0x8];
    /* 0x12 */ s16 unk12;
    /* 0x14 */ u8 unk14[0x18];
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ u8 unk2E[0x2];
} Entry30;

typedef struct Rec148 {
    /* 0x00 */ u8 unk00[0x1];
    /* 0x01 */ u8 key[4];
    /* 0x05 */ u8 unk05[0x143];
} Rec148;

typedef struct Work150 {
    /* 0x00 */ u8 unk00[0x150];
    /* 0x150 */ u32 unk150;
    /* 0x154 */ u8 unk154;
    /* 0x155 */ u8 unk155[0xF];
    /* 0x164 */ u16 unk164;
} Work150;

typedef struct Work150Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Work150 *work;
} Work150Owner;

typedef struct Work2C {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 unk2C;
} Work2C;

typedef struct StateHolder4 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[0x935];
    /* 0x93D */ u8 unk93D;
    /* 0x93E */ u8 unk93E[0x7];
    /* 0x945 */ u8 unk945;
    /* 0x946 */ u8 unk946[0x386];
    /* 0xCCC */ u16 unkCCC;
} StateHolder4;

typedef struct Unit66 {
    /* 0x00 */ u8 unk00[0x66];
    /* 0x66 */ u16 unk66;
} Unit66;

typedef struct Work20 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ void *unk08;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ u32 unk20;
} Work20;

typedef struct Work20Ref {
    /* 0x00 */ Work20 *first;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ void *unk0C;
} Work20Ref;

typedef struct Block6 {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *buffer;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ void *unk14;
} Block6;

#endif
