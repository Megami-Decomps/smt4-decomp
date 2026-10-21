/* NON_MATCHING: growth-branch merging, capacity/chunk/byte-count register allocation and limit-address ADD register differ; candidate optimization flags. */
#include "shard/W6_W6Match3_ChunkPool.h"

struct PoolTreeNode88 {
    u8 color;
    u8 unk01[3];
    PoolTreeNode88* parent;
    PoolTreeNode88* left;
    PoolTreeNode88* right;
    u8 value[0x78];
};

extern "C" {
void* rt_malloc(u32 size);
u32 vectorGrowCapacity_0012d2f2(u32 capacity, const void* unusedPool);

PoolTreeNode88* nodePoolAcquireRecordTreeNode(ChunkPool* pool)
{
    PoolTreeNode88* node = (PoolTreeNode88*)pool->freeList;
    if (node) {
        pool->freeList = node->right;
    } else {
        node = (PoolTreeNode88*)pool->cursor;
        if (pool->cursor == pool->limit) {
            u32 capacity = vectorGrowCapacity_0012d2f2(
                pool->chunks ? pool->chunks->capacity : 0, pool);
            PoolChunk* chunk = (PoolChunk*)rt_malloc(sizeof(PoolChunk));
            chunk->data = (u8*)rt_malloc(capacity * sizeof(PoolTreeNode88));
            chunk->next = pool->chunks;
            chunk->capacity = capacity;
            pool->chunks = chunk;
            node = (PoolTreeNode88*)chunk->data;
            pool->limit = (u8*)(node + capacity);
            pool->cursor = (u8*)node;
        }
        pool->cursor = (u8*)(node + 1);
    }
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;
    node->color = 0;
    return node;
}
}
