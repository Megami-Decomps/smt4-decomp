/* NON_MATCHING: growth-branch merging and capacity/chunk/byte-count register allocation differ from retail, as in the record-node allocator; candidate optimization flags. */
#include "shard/W6_W6Match3_ChunkPool.h"
#include "shard/W6_W6Match3_TreeCopy.h"

struct WordTreeNode : TreeCopyNode {
    u32 value[2];
};

extern "C" {
void* rt_malloc(u32 size);
u32 vectorGrowCapacity_0012d2ce(u32 capacity, const void* unusedPool);

WordTreeNode* nodePoolAcquireWordTreeNode(ChunkPool* pool)
{
    WordTreeNode* node = (WordTreeNode*)pool->freeList;
    if (node) {
        pool->freeList = node->right;
    } else {
        node = (WordTreeNode*)pool->cursor;
        if (pool->cursor == pool->limit) {
            u32 capacity = vectorGrowCapacity_0012d2ce(
                pool->chunks ? pool->chunks->capacity : 0, pool);
            PoolChunk* chunk = (PoolChunk*)rt_malloc(sizeof(PoolChunk));
            chunk->data = (u8*)rt_malloc(capacity * sizeof(WordTreeNode));
            chunk->next = pool->chunks;
            chunk->capacity = capacity;
            pool->chunks = chunk;
            node = (WordTreeNode*)chunk->data;
            pool->limit = (u8*)(node + capacity);
            pool->cursor = (u8*)node;
        }
        pool->cursor = (u8*)(node + 1);
    }
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;
    node->colorByte = 0;
    return node;
}
}
