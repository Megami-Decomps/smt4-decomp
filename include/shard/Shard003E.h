/* Structs shared by the helper functions in code shard 003E. */
#ifndef SHARD_SHARD003E_H
#define SHARD_SHARD003E_H

#include "common.h"

#include "shard/Shard003D.h"

typedef struct FlagData {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 flags;
    /* 0x008 */ u8 unk008[0x1AC];
    /* 0x1B4 */ u32 words[3];
} FlagData;

typedef struct FlagLink {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ FlagData *data;
} FlagLink;

typedef struct LinkSlot {
    /* 0x00 */ FlagLink *link;
    /* 0x04 */ u8 unk04[0x58];
} LinkSlot;

typedef struct LinkHolder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ FlagLink *first;
    /* 0x0C */ u8 unk0C[0x18];
    /* 0x24 */ LinkSlot slots[3];
} LinkHolder;

typedef struct Words3 {
    /* 0x00 */ u32 w[3];
} Words3;

#endif
