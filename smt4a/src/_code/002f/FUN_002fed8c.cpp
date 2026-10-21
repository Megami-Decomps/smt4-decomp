/* NON_MATCHING: null-capacity control flow, allocation registers and header-store ordering differ; -O2 does not resolve them. */
#include "shard/W6_W6Match3_ChunkPool.h"

struct TreePoolNode {
    u8 color;
    u8 unk01[3];
    TreePoolNode *left;
    TreePoolNode *right;
    TreePoolNode *parent;
    u32 payload[2];
};

extern "C" {
void *rt_malloc(u32 size);
u32 vectorGrowCapacity_0012d2bc(u32 capacity, ChunkPool *context);

// Acquire a recycled or newly allocated 24-byte tree node and reset its links.
TreePoolNode *FUN_002fed8c(ChunkPool *pool)
{
    TreePoolNode *node = static_cast<TreePoolNode *>(pool->freeList);
    if (node != NULL) {
        pool->freeList = node->parent;
    } else {
        node = reinterpret_cast<TreePoolNode *>(pool->cursor);
        if (pool->cursor == pool->limit) {
            u32 capacity = 0;
            if (pool->chunks != NULL)
                capacity = pool->chunks->capacity;
            capacity = vectorGrowCapacity_0012d2bc(capacity, pool);
            PoolChunk *chunk = static_cast<PoolChunk *>(rt_malloc(sizeof(PoolChunk)));
            u32 bytes = capacity * sizeof(TreePoolNode);
            chunk->data = static_cast<u8 *>(rt_malloc(bytes));
            chunk->capacity = capacity;
            chunk->next = pool->chunks;
            pool->chunks = chunk;
            node = reinterpret_cast<TreePoolNode *>(chunk->data);
            pool->limit = reinterpret_cast<u8 *>(node) + bytes;
            pool->cursor = reinterpret_cast<u8 *>(node);
        }
        pool->cursor = reinterpret_cast<u8 *>(node + 1);
    }
    node->left = NULL;
    node->right = NULL;
    node->parent = NULL;
    node->color = 0;
    return node;
}
}
