/* NON_MATCHING: the pool-growth call keeps `mov r1,r4` duplicated in both capacity arms (movs r0,#0 / ldr r0,[r0,#4]) and the compare is `cmp cursor,end`; the build merges the arms and swaps the compare operands. */
#include "common.h"

extern "C" {

typedef struct PoolBlock {
    /* 0x00 */ struct PoolBlock *next;     /* previous block */
    /* 0x04 */ u32 capacity;               /* elements in the block */
    /* 0x08 */ u8 *elements;
} PoolBlock;

typedef struct ElementPool {
    /* 0x00 */ PoolBlock *blocks;          /* newest block first */
    /* 0x04 */ u8 *freeList;               /* erased elements, linked through +0xC */
    /* 0x08 */ u8 *cursor;                 /* next never-used element of the newest block */
    /* 0x0C */ u8 *end;                    /* end of the newest block */
} ElementPool;

extern void *rt_malloc(u32 size);
extern u32 vectorGrowCapacity_0012d286(u32 capacity, ElementPool *pool);

/* Takes an element (52 bytes) from the pool, growing it by a new block when exhausted, and clears its header fields. */
u8 *FUN_001307be(ElementPool *pool)
{
    u8 *element = pool->freeList;
    u32 capacity;
    PoolBlock *block;

    if (element != NULL) {
        pool->freeList = *(u8 **)(element + 0xC);
    } else {
        element = pool->cursor;
        if (element == pool->end) {
            if (pool->blocks != NULL) {
                capacity = pool->blocks->capacity;
            } else {
                capacity = 0;
            }
            capacity = vectorGrowCapacity_0012d286(capacity, pool);
            block = (PoolBlock *)rt_malloc(sizeof(PoolBlock));
            block->elements = (u8 *)rt_malloc(capacity * 52);
            block->next = pool->blocks;
            block->capacity = capacity;
            pool->blocks = block;
            element = block->elements;
            pool->end = element + capacity * 52;
            pool->cursor = element;
        }
        pool->cursor = element + 52;
    }
    *(u32 *)(element + 4) = 0;
    *(u32 *)(element + 8) = 0;
    *(u32 *)(element + 0xC) = 0;
    *element = 0;
    return element;
}

} /* extern "C" */
