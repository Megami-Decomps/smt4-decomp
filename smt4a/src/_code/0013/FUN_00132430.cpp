/* NON_MATCHING: capacity null-path folding, allocation registers, and element-range stores differ from retail. */
#include "common.h"

struct PoolElement {
    u8 data[0x38];
};
struct PoolBlock {
    PoolBlock *next; // 0x00
    u32 capacity; // 0x04
    PoolElement *elements; // 0x08
};
struct ElementPool {
    PoolBlock *blocks; // 0x00
    u32 unk04;
    PoolElement *current; // 0x08
    PoolElement *end; // 0x0c
};

extern "C" {
u32 vectorGrowCapacity_0012d35e(u32, ElementPool *);
void *rt_malloc(u32);

// Prepend a new allocation block and expose its element range.
void FUN_00132430(ElementPool *pool, s32 singleElement)
{
    u32 capacity = 1;
    if (!singleElement)
        capacity = vectorGrowCapacity_0012d35e(pool->blocks ? pool->blocks->capacity : 0,
                                               pool);
    PoolBlock *block = (PoolBlock *)rt_malloc(sizeof(PoolBlock));
    block->elements = (PoolElement *)rt_malloc(capacity * sizeof(PoolElement));
    block->capacity = capacity;
    block->next = pool->blocks;
    pool->blocks = block;
    pool->end = block->elements + capacity;
    pool->current = block->elements;
}
}
