/* NON_MATCHING: capacity null-path folding and allocation register selection differ from retail. */
#include "common.h"

struct PoolElement12 {
    u8 data[0xc];
};
struct PoolBlock12 {
    PoolBlock12 *next; // 0x00
    u32 capacity; // 0x04
    PoolElement12 *elements; // 0x08
};
struct ElementPool12 {
    PoolBlock12 *blocks; // 0x00
    u32 unk04;
    PoolElement12 *current; // 0x08
    PoolElement12 *end; // 0x0c
};

extern "C" {
u32 vectorGrowCapacity_0012d47e(u32, ElementPool12 *);
void *rt_malloc(u32);

// Prepend a new allocation block and expose its element range.
void FUN_00133012(ElementPool12 *pool, s32 singleElement)
{
    u32 capacity = 1;
    if (!singleElement) {
        u32 previousCapacity;
        if (pool->blocks != NULL)
            previousCapacity = pool->blocks->capacity;
        else
            previousCapacity = 0;
        capacity = vectorGrowCapacity_0012d47e(previousCapacity, pool);
    }
    PoolBlock12 *block = (PoolBlock12 *)rt_malloc(sizeof(PoolBlock12));
    block->elements = (PoolElement12 *)rt_malloc(capacity * sizeof(PoolElement12));
    PoolBlock12 *previous = pool->blocks;
    block->capacity = capacity;
    block->next = previous;
    pool->blocks = block;
    PoolElement12 *elements = block->elements;
    pool->end = elements + capacity;
    pool->current = elements;
}
}
