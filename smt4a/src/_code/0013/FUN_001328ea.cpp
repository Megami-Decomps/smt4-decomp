/* NON_MATCHING: retail retains an explicit zero-capacity branch and orders chunk initialization differently. */
#include "shard/W6_W6Match2_ChunkPool.h"

extern "C" u32 vectorGrowCapacity_0012d3ee(u32 capacity, ChunkPool<0x38>* pool);

// Allocate and prepend another chunk of 0x38-byte pool elements.
extern "C" void FUN_001328ea(ChunkPool<0x38>* pool, s32 singleElement)
{
    u32 capacity = 1;
    if (singleElement == 0) {
        u32 previousCapacity = pool->chunks ? pool->chunks->capacity : 0;
        capacity = vectorGrowCapacity_0012d3ee(previousCapacity, pool);
    }
    PoolChunk<0x38>* chunk = (PoolChunk<0x38>*)rt_malloc(sizeof(PoolChunk<0x38>));
    chunk->elements = (PoolElement<0x38>*)rt_malloc(capacity * sizeof(PoolElement<0x38>));
    chunk->capacity = capacity;
    chunk->next = pool->chunks;
    pool->chunks = chunk;
    pool->end = chunk->elements + capacity;
    pool->next = chunk->elements;
}
