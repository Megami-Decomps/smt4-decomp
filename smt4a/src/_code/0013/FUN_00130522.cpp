/* NON_MATCHING: compiler removes retail's explicit zero-capacity branch and changes capacity/chunk/byte-count registers and header-store scheduling. Ospace also differs; candidate O2. */
#include "shard/W6_W6Match3_ChunkPool.h"

struct PoolNode2C {
    u8 flags;            // 0x00
    u8 unk01[3];         // 0x01
    void* link04;        // 0x04
    void* link08;        // 0x08
    PoolNode2C* nextFree; // 0x0c
    u8 unk10[0x1c];      // 0x10
};

extern "C" {
void* rt_malloc(u32);
u32 vectorGrowCapacity_0012d262(u32, ChunkPool*);

// Reuse a free node or extend the chunk-backed pool, then reset its link header.
PoolNode2C* FUN_00130522(ChunkPool* pool)
{
    PoolNode2C* node = (PoolNode2C*)pool->freeList;
    if (node != NULL) {
        pool->freeList = node->nextFree;
    } else {
        node = (PoolNode2C*)pool->cursor;
        if (pool->cursor == pool->limit) {
            u32 capacity;
            if (pool->chunks != NULL) {
                capacity = pool->chunks->capacity;
            } else {
                capacity = 0;
            }
            capacity = vectorGrowCapacity_0012d262(capacity, pool);
            PoolChunk* chunk = (PoolChunk*)rt_malloc(sizeof(PoolChunk));
            u32 bytes = capacity * sizeof(PoolNode2C);
            chunk->data = (u8*)rt_malloc(bytes);
            chunk->capacity = capacity;
            chunk->next = pool->chunks;
            pool->chunks = chunk;
            node = (PoolNode2C*)chunk->data;
            pool->limit = (u8*)node + bytes;
            pool->cursor = (u8*)node;
        }
        pool->cursor = (u8*)(node + 1);
    }
    node->link04 = NULL;
    node->link08 = NULL;
    node->nextFree = NULL;
    node->flags = 0;
    return node;
}
}
