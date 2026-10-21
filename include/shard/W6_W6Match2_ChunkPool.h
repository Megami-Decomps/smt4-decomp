#ifndef SHARD_W6_W6MATCH2_CHUNK_POOL_H
#define SHARD_W6_W6MATCH2_CHUNK_POOL_H

#include "common.h"

template <u32 Stride> struct PoolElement {
    u8 storage[Stride];
};

template <u32 Stride> struct PoolChunk {
    PoolChunk* next;               // 0x00
    u32 capacity;                   // 0x04
    PoolElement<Stride>* elements;   // 0x08
};

template <u32 Stride> struct ChunkPool {
    PoolChunk<Stride>* chunks;       // 0x00
    u32 unk04;                       // 0x04
    PoolElement<Stride>* next;       // 0x08
    PoolElement<Stride>* end;        // 0x0c
};

extern "C" void* rt_malloc(u32 size);

#endif
