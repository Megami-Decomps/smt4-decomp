/* NON_MATCHING: compiler removes the null-capacity MOV/branch and rotates capacity/chunk/byte-count registers and header-store order. */
#include "shard/W6_W6Match3_ChunkPool.h"
#include "shard/W6_W6Match3_TreeCopy.h"

struct PoolTreeNode20 {
    TreeCopyNode links;
    u32 value;
};

extern "C" {
void* rt_malloc(u32 size);
u32 vectorGrowCapacity_0012d21a(u32 capacity, ChunkPool* pool);

PoolTreeNode20* FUN_0012f76e(ChunkPool* pool)
{
    PoolTreeNode20* node = static_cast<PoolTreeNode20*>(pool->freeList);
    if (node != NULL) {
        pool->freeList = node->links.right;
    } else {
        node = reinterpret_cast<PoolTreeNode20*>(pool->cursor);
        if (pool->cursor == pool->limit) {
            u32 capacity = pool->chunks ? pool->chunks->capacity : 0;
            capacity = vectorGrowCapacity_0012d21a(capacity, pool);
            PoolChunk* chunk = static_cast<PoolChunk*>(rt_malloc(sizeof(PoolChunk)));
            u32 bytes = capacity * sizeof(PoolTreeNode20);
            chunk->data = static_cast<u8*>(rt_malloc(bytes));
            chunk->capacity = capacity;
            chunk->next = pool->chunks;
            pool->chunks = chunk;
            node = reinterpret_cast<PoolTreeNode20*>(chunk->data);
            pool->limit = reinterpret_cast<u8*>(node) + bytes;
            pool->cursor = reinterpret_cast<u8*>(node);
        }
        pool->cursor = reinterpret_cast<u8*>(node) + sizeof(PoolTreeNode20);
    }
    node->links.parent = NULL;
    node->links.left = NULL;
    node->links.right = NULL;
    node->links.colorByte = 0;
    return node;
}
}
