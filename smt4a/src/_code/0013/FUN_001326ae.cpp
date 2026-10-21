/* NON_MATCHING: capacity fallback branching and allocation-size/register scheduling differ from retail. */
#include "common.h"

struct PoolElement24 { u8 data[0x18]; };
struct PoolBlock24 {
    PoolBlock24 *next; // 0x00
    u32 capacity; // 0x04
    PoolElement24 *elements; // 0x08
};
struct BlockPool24 {
    PoolBlock24 *blocks; // 0x00
    u32 unk04;
    PoolElement24 *begin; // 0x08
    PoolElement24 *end; // 0x0c
};

extern "C" {
u32 vectorGrowCapacity_0012d3b8(u32 capacity, BlockPool24 *pool);
void *rt_malloc(u32 size);

// Add a block of 24-byte elements to the pool's free range.
void FUN_001326ae(BlockPool24 *pool, s32 singleElement)
{
    u32 capacity = 1;
    if (singleElement == 0) {
        capacity = vectorGrowCapacity_0012d3b8(pool->blocks != NULL ? pool->blocks->capacity : 0, pool);
    }
    PoolBlock24 *block = (PoolBlock24 *)rt_malloc(sizeof(PoolBlock24));
    block->elements = (PoolElement24 *)rt_malloc(capacity * sizeof(PoolElement24));
    PoolBlock24 *previous = pool->blocks;
    block->capacity = capacity;
    block->next = previous;
    pool->blocks = block;
    PoolElement24 *elements = block->elements;
    pool->end = elements + capacity;
    pool->begin = elements;
}
}
