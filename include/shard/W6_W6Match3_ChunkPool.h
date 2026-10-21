#ifndef SHARD_W6_W6MATCH3_CHUNKPOOL_H
#define SHARD_W6_W6MATCH3_CHUNKPOOL_H

#include "common.h"

struct PoolChunk {
    /* 0x00 */ PoolChunk* next;
    /* 0x04 */ u32 capacity;
    /* 0x08 */ u8* data;
};

struct ChunkPool {
    /* 0x00 */ PoolChunk* chunks;
    /* 0x04 */ void* freeList;
    /* 0x08 */ u8* cursor;
    /* 0x0C */ u8* limit;
};

#endif
