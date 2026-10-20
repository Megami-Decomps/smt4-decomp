/* NON_MATCHING: register allocation only: retail loads the pool limit into r2, built into r1 */
/* Pool allocator: pops a node from the free list, otherwise bump-allocates one 0x2C-byte element (growing the pool first when the current block is full). */
#include "common.h"

extern "C" {

typedef struct Element {
    u8 data[0x2C];
} Element;

typedef struct FreeNode {
    struct FreeNode *next;
} FreeNode;

typedef struct Pool {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ FreeNode *freeList;
    /* 0x08 */ Element *cursor;
    /* 0x0C */ Element *limit;
} Pool;

extern void FUN_00132814(Pool *pool);

Element *FUN_0030710c(Pool *pool)
{
    FreeNode *node = pool->freeList;
    Element *element;

    if (node != NULL) {
        pool->freeList = node->next;
        return (Element *)node;
    }
    if (pool->cursor == pool->limit) {
        FUN_00132814(pool);
    }
    element = pool->cursor;
    pool->cursor = element + 1;
    return element;
}

}
