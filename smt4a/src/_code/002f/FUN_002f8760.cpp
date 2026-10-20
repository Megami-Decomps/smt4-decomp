#include "common.h"

extern "C" {

void FUN_00132384(void *object);
void FUN_002fe9d2(void *object);

typedef struct Node {
    /* 0x00 */ struct Node *next;
} Node;

typedef struct Pool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Node *free;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ Node *current;
} Pool;

/* Returns the current node to the pool's free list (running FUN_002fe9d2 first and FUN_00132384 after); returns the pool. */
Pool *FUN_002f8760(Pool *pool)
{
    Node *node;

    if (pool->current != NULL) {
        FUN_002fe9d2(pool);
        node = pool->current;
        node->next = pool->free;
        pool->free = node;
        FUN_00132384(pool);
    }
    return pool;
}

} /* extern "C" */
