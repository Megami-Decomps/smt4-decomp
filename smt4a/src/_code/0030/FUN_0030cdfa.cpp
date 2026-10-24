/* NON_MATCHING: register allocation of the chunk/byte-count temporaries and a duplicated grow-call argument setup */
#include "common.h"

struct PoolNode {
    /* 0x00 */ u8 used;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ PoolNode *next; /* free-list link */
    /* 0x10 */ u8 unk10[28];
};

struct PoolChunk {
    /* 0x00 */ PoolChunk *previous;
    /* 0x04 */ u32 capacity;
    /* 0x08 */ PoolNode *nodes;
};

struct NodePool {
    /* 0x00 */ PoolChunk *chunks;
    /* 0x04 */ PoolNode *freeList;
    /* 0x08 */ PoolNode *cursor;
    /* 0x0C */ PoolNode *end;
};

extern "C" {

void *rt_malloc(u32 bytes);
u32 vectorGrowCapacity_0012d274(u32 capacity, NodePool *pool);

/* Takes a node from the pool (free list first, then the current chunk, growing by a new chunk when full) and clears it. */
PoolNode *FUN_0030cdfa(NodePool *pool)
{
    PoolNode *node = pool->freeList;

    if (node != NULL) {
        pool->freeList = node->next;
    } else {
        if (pool->cursor == pool->end) {
            u32 count = vectorGrowCapacity_0012d274(pool->chunks == NULL ? 0 : pool->chunks->capacity, pool);
            PoolChunk *chunk = (PoolChunk *)rt_malloc(sizeof(PoolChunk));
            u32 bytes = count * 44;

            chunk->nodes = (PoolNode *)rt_malloc(bytes);
            chunk->previous = pool->chunks;
            chunk->capacity = count;
            pool->chunks = chunk;
            node = chunk->nodes;
            pool->end = (PoolNode *)((u8 *)node + bytes);
            pool->cursor = node;
        }
        node = pool->cursor;
        pool->cursor = (PoolNode *)((u8 *)node + 44);
    }
    node->unk04 = 0;
    node->unk08 = 0;
    node->next = NULL;
    node->used = 0;
    return node;
}

} /* extern "C" */
