/* NON_MATCHING: register allocation only: retail keeps the new block in r6 and the byte size in r7, and the grow call's argument is selected with the pool pointer loaded in both arms; built swaps r6/r7 and loads the pool pointer once */
#include "common.h"

extern "C" {

/* A pool element of 52 bytes; a free element's word at 0x0C links to the next free one. */
typedef struct Element {
    /* 0x00 */ u8 flag;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ struct Element *next;
    /* 0x10 */ u8 data[52 - 0x10];
} Element;

/* A block of elements chained to the previous one. */
typedef struct Block {
    /* 0x0 */ struct Block *previous;
    /* 0x4 */ u32 count;
    /* 0x8 */ Element *elements;
} Block;

typedef struct Pool {
    /* 0x00 */ Block *blocks;
    /* 0x04 */ Element *freeList;
    /* 0x08 */ Element *cursor;      /* next unused element of the newest block */
    /* 0x0C */ Element *blockEnd;
} Pool;

extern u32 vectorGrowCapacity_0012d316(u32 previousCount, Pool *pool);
extern void *rt_malloc(u32 size);

/* Takes an element from the free list, or from the newest block (adding a block when it is full),
 * and clears its first fields. */
Element *FUN_001317de(Pool *pool)
{
    Element *element = pool->freeList;

    if (element != NULL) {
        pool->freeList = element->next;
    } else {
        if (pool->cursor == pool->blockEnd) {
            u32 previousCount = 0;
            u32 count;
            Block *block;
            u32 bytes;

            if (pool->blocks != NULL) {
                previousCount = pool->blocks->count;
            }
            count = vectorGrowCapacity_0012d316(previousCount, pool);
            block = (Block *)rt_malloc(sizeof(Block));
            bytes = count * sizeof(Element);
            block->elements = (Element *)rt_malloc(bytes);
            block->previous = pool->blocks;
            block->count = count;
            pool->blocks = block;
            pool->blockEnd = (Element *)((u8 *)block->elements + bytes);
            pool->cursor = block->elements;
        }
        element = pool->cursor;
        pool->cursor = element + 1;
    }
    element->unk04 = 0;
    element->unk08 = 0;
    element->next = NULL;
    element->flag = 0;
    return element;
}

} /* extern "C" */
