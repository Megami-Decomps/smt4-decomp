/* NON_MATCHING: capacity null-path folding, allocation registers, and element-range stores differ from retail. */
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
u32 vectorGrowCapacity_0012d424(u32, ElementPool12 *);
void *rt_malloc(u32);

// Prepend a new allocation block and expose its element range.
void FUN_00132b7a(ElementPool12 *pool, s32 singleElement)
{
    u32 capacity = 1;
    if (!singleElement)
        capacity = vectorGrowCapacity_0012d424(pool->blocks ? pool->blocks->capacity : 0,
                                               pool);
    PoolBlock12 *block = (PoolBlock12 *)rt_malloc(sizeof(PoolBlock12));
    block->elements = (PoolElement12 *)rt_malloc(capacity * sizeof(PoolElement12));
    block->capacity = capacity;
    block->next = pool->blocks;
    pool->blocks = block;
    pool->end = block->elements + capacity;
    pool->current = block->elements;
}
}
