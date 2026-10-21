/* NON_MATCHING: capacity fallback branching and allocation-size/register scheduling differ from retail. */
#include "common.h"

struct PoolElement {
    u8 data[0x70];
};
struct PoolBlock {
    PoolBlock *next; // 0x00
    u32 capacity; // 0x04
    PoolElement *elements; // 0x08
};
struct BlockPool {
    PoolBlock *blocks; // 0x00
    u32 unk04;
    PoolElement *begin; // 0x08
    PoolElement *end; // 0x0c
};

extern "C" {
u32 vectorGrowCapacity_0012d34c(u32 capacity, BlockPool *pool);
void *rt_malloc(u32 size);

// Add a new allocation block and expose its free element range.
void FUN_0013233c(BlockPool *pool, s32 singleElement)
{
    u32 capacity = 1;
    if (singleElement == 0) {
        capacity = vectorGrowCapacity_0012d34c(pool->blocks != NULL ? pool->blocks->capacity : 0, pool);
    }
    PoolBlock *block = (PoolBlock *)rt_malloc(sizeof(PoolBlock));
    block->elements = (PoolElement *)rt_malloc(capacity * sizeof(PoolElement));
    PoolBlock *previous = pool->blocks;
    block->capacity = capacity;
    block->next = previous;
    pool->blocks = block;
    PoolElement *elements = block->elements;
    pool->end = elements + capacity;
    pool->begin = elements;
}
}
