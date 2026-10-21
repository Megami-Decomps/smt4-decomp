/* NON_MATCHING: capacity fallback branching and allocation-size/register scheduling differ from retail. */
#include "shard/W6_W6Match4_BlockPool12.h"

extern "C" {
u32 vectorGrowCapacity_0012d490(u32 capacity, BlockPool12 *pool);
void *rt_malloc(u32 size);

// Add a block of 12-byte elements to the pool's free range.
void FUN_00302ee0(BlockPool12 *pool, s32 singleElement)
{
    u32 capacity = 1;
    if (singleElement == 0) {
        capacity = vectorGrowCapacity_0012d490(pool->blocks != NULL ? pool->blocks->capacity : 0, pool);
    }
    PoolBlock12 *block = (PoolBlock12 *)rt_malloc(sizeof(PoolBlock12));
    block->elements = (PoolElement12 *)rt_malloc(capacity * sizeof(PoolElement12));
    PoolBlock12 *previous = pool->blocks;
    block->capacity = capacity;
    block->next = previous;
    pool->blocks = block;
    PoolElement12 *elements = block->elements;
    pool->end = elements + capacity;
    pool->begin = elements;
}
}
