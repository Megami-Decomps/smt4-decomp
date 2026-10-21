#include "common.h"

extern "C" {

/* 12-byte pool element; a free element's first word links to the next free one. */
typedef struct Element {
    struct Element *next;   /* 0x00 */
    u8 data[12 - 4];
} Element;

/* Pool handing out elements from a free list, then from the current block. */
typedef struct {
    u8 unk00[4];
    Element *freeList;      /* 0x04 */
    Element *cursor;        /* 0x08 next unused element of the current block */
    Element *blockEnd;      /* 0x0c */
} ElementPool;

void FUN_00132e50(ElementPool *pool, s32 singleElement);

/* Takes an element from the free list, or from the current block (growing it when full). */
Element *FUN_002eba3c(ElementPool *pool, s32 singleElement)
{
    Element *element = pool->freeList;

    if (element != NULL) {
        pool->freeList = element->next;
        return element;
    }
    if (pool->cursor == pool->blockEnd) {
        FUN_00132e50(pool, singleElement);
    }
    element = pool->cursor;
    pool->cursor = element + 1;
    return element;
}

} /* extern "C" */
