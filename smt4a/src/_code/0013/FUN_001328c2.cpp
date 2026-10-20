/* NON_MATCHING: the node-end pointer is loaded into r1 where retail uses r2 (retail keeps the free-list link value in r1 live); same as FUN_00132514. */
#include "common.h"

extern "C" {

typedef struct PoolNode {
    /* 0x00 */ struct PoolNode *next;     /* free-list link while unused */
    /* 0x04 */ u8 unk04[0x34];
} PoolNode;                                /* 0x38 bytes */

typedef struct NodePool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ PoolNode *freeList;
    /* 0x08 */ PoolNode *cursor;           /* next never-used node */
    /* 0x0C */ PoolNode *end;
} NodePool;

extern void FUN_001328ea(NodePool *pool);

/* Takes a node from the pool: the head of the free list, else the next unused node (growing the pool when exhausted). */
PoolNode *FUN_001328c2(NodePool *pool)
{
    PoolNode *node = pool->freeList;

    if (node != NULL) {
        pool->freeList = node->next;
        return node;
    }
    if (pool->cursor == pool->end) {
        FUN_001328ea(pool);
    }
    node = pool->cursor;
    pool->cursor = node + 1;
    return node;
}

} /* extern "C" */
