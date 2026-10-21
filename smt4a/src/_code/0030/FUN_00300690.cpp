/* NON_MATCHING: compiler removes the null-capacity MOV/branch and rotates capacity/chunk/byte-count registers and header-store order. */
#include "shard/W6_W6Match3_ChunkPool.h"
#include "shard/W6_W6Match3_TreeCopy.h"

struct PoolTreeNode28 {
    TreeCopyNode links;
    u32 value[3];
};

extern "C" {
void* rt_malloc(u32 size);
u32 vectorGrowCapacity_0012d166(u32 capacity, ChunkPool* pool);

PoolTreeNode28* FUN_00300690(ChunkPool* pool)
{
    PoolTreeNode28* node = static_cast<PoolTreeNode28*>(pool->freeList);
    if (node != NULL) {
        pool->freeList = node->links.right;
    } else {
        node = reinterpret_cast<PoolTreeNode28*>(pool->cursor);
        if (pool->cursor == pool->limit) {
            u32 capacity = pool->chunks ? pool->chunks->capacity : 0;
            capacity = vectorGrowCapacity_0012d166(capacity, pool);
            PoolChunk* chunk = static_cast<PoolChunk*>(rt_malloc(sizeof(PoolChunk)));
            u32 bytes = capacity * sizeof(PoolTreeNode28);
            chunk->data = static_cast<u8*>(rt_malloc(bytes));
            chunk->capacity = capacity;
            chunk->next = pool->chunks;
            pool->chunks = chunk;
            node = reinterpret_cast<PoolTreeNode28*>(chunk->data);
            pool->limit = reinterpret_cast<u8*>(node) + bytes;
            pool->cursor = reinterpret_cast<u8*>(node);
        }
        pool->cursor = reinterpret_cast<u8*>(node) + sizeof(PoolTreeNode28);
    }
    node->links.parent = NULL;
    node->links.left = NULL;
    node->links.right = NULL;
    node->links.colorByte = 0;
    return node;
}
}
