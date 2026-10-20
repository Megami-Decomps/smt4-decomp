/* Structs shared by the helper functions in code shard 0051. */
#ifndef SHARD_SHARD0051_H
#define SHARD_SHARD0051_H

#include "common.h"

#include "shard/Shard0050.h"

typedef struct Variant {
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 type;
    /* 0x05 */ u8 unk05;
    union {
        /* 0x06 */ u8 byteArg;
        /* 0x06 */ u16 halfArg;
    };
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u32 wordArg;
} Variant;

typedef struct Ref4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 *inner;
} Ref4;

#endif
