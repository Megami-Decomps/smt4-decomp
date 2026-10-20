/* Structs shared by the helper functions in code shard 0048. */
#ifndef SHARD_SHARD0048_H
#define SHARD_SHARD0048_H

#include "common.h"

#include "shard/Shard0047.h"

typedef struct StateSetter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 flags;
} StateSetter;

typedef struct TwoObjects {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ Object *first;
    /* 0x9C */ Object *second;
} TwoObjects;

typedef struct Block66Owner {
    /* 0x000 */ u8 unk000[0x66];
    /* 0x066 */ u8 block66[0x100];
    /* 0x166 */ u8 unk166[0x280];
    /* 0x3E6 */ u8 block3E6[0xA0];
} Block66Owner;

#endif
