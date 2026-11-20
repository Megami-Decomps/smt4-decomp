/* NON_MATCHING: only register choice for end pointer differs (retail r2, built r1). */
#include "common.h"

struct PoolNode {
    PoolNode *next;
    u8 unk04[0x14];
};

struct NodePool {
    u32 unk00;
    PoolNode *freeList;
    PoolNode *cursor;
    PoolNode *end;
};

extern "C" {
void FUN_001326ae(NodePool *pool);

/* Pops a node from the free list, or grows the backing chunk and takes the next slot. */
PoolNode *listAllocateSentinelNode(NodePool *pool)
{
    if (pool->freeList != NULL) {
        PoolNode *node = pool->freeList;
        pool->freeList = node->next;
        return node;
    }
    if (pool->cursor == pool->end) {
        FUN_001326ae(pool);
    }
    return pool->cursor++;
}
}
