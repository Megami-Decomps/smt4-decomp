/* NON_MATCHING: block-growth branch, capacity/size registers, and chunk-link store scheduling differ. */
#include "shard/W6_W6Match3_ChunkPool.h"

extern "C" {
void* rt_malloc(u32 size);
u32 vectorGrowCapacity_0012d400(u32 capacity, ChunkPool* pool);

// Add a block of 0xa0-byte elements, or just one element for a fixed allocation.
void FUN_00132972(ChunkPool* pool, s32 singleElement)
{
    u32 capacity = 1;
    if (singleElement == 0)
        capacity = vectorGrowCapacity_0012d400(pool->chunks != NULL ? pool->chunks->capacity : 0, pool);
    PoolChunk* chunk = (PoolChunk*)rt_malloc(sizeof(PoolChunk));
    u32 bytes = capacity * 0xa0;
    chunk->data = (u8*)rt_malloc(bytes);
    chunk->capacity = capacity;
    chunk->next = pool->chunks;
    pool->chunks = chunk;
    pool->limit = chunk->data + bytes;
    pool->cursor = chunk->data;
}
}
