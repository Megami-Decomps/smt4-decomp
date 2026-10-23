#ifndef SYS_FLAGBLOCKPOOL_H
#define SYS_FLAGBLOCKPOOL_H
#include "common.h"
#include <stddef.h>

struct FlagPoolBlock { u8 data[16]; };
struct FlagBlockPool {
    /* 0x00 */ u8 *occupied;
    /* 0x04 */ FlagPoolBlock *blocks;
    /* 0x08 */ u32 cursor;
};
typedef char FlagBlockPoolLayoutCheck[sizeof(FlagPoolBlock) == 16 &&
    offsetof(FlagBlockPool, blocks) == 4 && offsetof(FlagBlockPool, cursor) == 8 &&
    sizeof(FlagBlockPool) == 12 ? 1 : -1];
#endif
