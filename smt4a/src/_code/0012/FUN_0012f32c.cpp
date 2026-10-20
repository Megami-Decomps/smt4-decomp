/* NON_MATCHING: register allocation and call layout: retail keeps the element in r0/r1 (without a separate pointer register), builds the argument to the growth function through a shared tail (`b.n 28`), and stores the chunk fields in a different order; built allocates r2/r5-r7 differently. */
#include "common.h"

extern "C" {

typedef struct Element {
    /* 0x00 */ u8 used;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 field04;
    /* 0x08 */ u32 field08;
    /* 0x0C */ struct Element *nextFree;  /* while the element is on the free list */
    /* 0x10 */ u32 field10;
} Element;

typedef struct Chunk {
    /* 0x0 */ struct Chunk *previous;
    /* 0x4 */ s32 count;
    /* 0x8 */ Element *elements;
} Chunk;

typedef struct Pool {
    /* 0x0 */ Chunk *chunks;      /* newest chunk first */
    /* 0x4 */ Element *freeList;
    /* 0x8 */ Element *cursor;    /* next unused element of the newest chunk */
    /* 0xC */ Element *end;
} Pool;

void *rt_malloc(s32 size);
s32 vectorGrowCapacity_0012d1f6(s32 previousCount, Pool *pool);

/* Takes an element from the pool (free list first, else the next of the newest chunk, growing a new chunk when full) and clears it. */
void FUN_0012f32c(Pool *pool)
{
    Element *element = pool->freeList;

    if (element != NULL) {
        pool->freeList = element->nextFree;
    } else {
        element = pool->cursor;
        if (element == pool->end) {
            s32 count;
            Chunk *chunk;

            count = vectorGrowCapacity_0012d1f6(pool->chunks != NULL ? pool->chunks->count : 0, pool);
            chunk = (Chunk *)rt_malloc(sizeof(Chunk));
            chunk->elements = (Element *)rt_malloc(count * sizeof(Element));
            chunk->count = count;
            chunk->previous = pool->chunks;
            pool->chunks = chunk;
            element = chunk->elements;
            pool->end = element + count;
            pool->cursor = element;
        }
        pool->cursor = element + 1;
    }
    element->field04 = 0;
    element->field08 = 0;
    element->nextFree = NULL;
    element->used = 0;
}

} /* extern "C" */
