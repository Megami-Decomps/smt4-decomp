/* Structs shared by the helper functions in code shard 0043. */
#ifndef SHARD_SHARD0043_H
#define SHARD_SHARD0043_H

#include "common.h"

#include "shard/Shard0042.h"

typedef struct Words2 {
    /* 0x00 */ u32 w[2];
} Words2;

typedef struct WordsFlag {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u32 w1;
    /* 0x08 */ u32 w2;
    /* 0x0C */ u8 flag;
} WordsFlag;

#endif
