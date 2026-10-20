/* Structs shared by the helper functions in code shard 0050. */
#ifndef SHARD_SHARD0050_H
#define SHARD_SHARD0050_H

#include "common.h"

#include "shard/Shard004F.h"

typedef struct Block30 {
    /* 0x00 */ u8 *data;
    /* 0x04 */ u32 count;
} Block30;

typedef struct Table30 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Block30 *block;
} Table30;

typedef struct SndSource SndSource;
typedef struct SndSourceVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ s32 (*find)(SndSource *source, u32 id);
} SndSourceVtbl;
struct SndSource {
    /* 0x00 */ const SndSourceVtbl *vtbl;
};

#endif
