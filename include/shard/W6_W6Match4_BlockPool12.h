#ifndef SHARD_W6_W6MATCH4_BLOCKPOOL12_H
#define SHARD_W6_W6MATCH4_BLOCKPOOL12_H

#include "common.h"

struct PoolElement12 { u8 data[0x0c]; };
struct PoolBlock12 {
    PoolBlock12 *next; // 0x00
    u32 capacity; // 0x04
    PoolElement12 *elements; // 0x08
};
struct BlockPool12 {
    PoolBlock12 *blocks; // 0x00
    u32 unk04;
    PoolElement12 *begin; // 0x08
    PoolElement12 *end; // 0x0c
};

#endif
