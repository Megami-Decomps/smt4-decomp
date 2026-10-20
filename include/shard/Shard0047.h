/* Structs shared by the helper functions in code shard 0047. */
#ifndef SHARD_SHARD0047_H
#define SHARD_SHARD0047_H

#include "common.h"

#include "shard/Shard0046.h"

typedef struct ByteAtD {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 unk0D;
} ByteAtD;

typedef struct ScriptHolder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ void *buf0C;
    /* 0x10 */ void *buf10;
    /* 0x14 */ u32 proc14;
} ScriptHolder;

#endif
