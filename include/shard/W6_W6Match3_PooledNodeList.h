#ifndef SHARD_W6_W6MATCH3_POOLEDNODELIST_H
#define SHARD_W6_W6MATCH3_POOLEDNODELIST_H

#include "shard/W6_W6Match3_ChunkPool.h"

struct PooledListNode {
    PooledListNode* next;
    PooledListNode* prev;
};

struct PooledNodeList {
    PoolChunk* chunks;
    PooledListNode* freeHead;
    u8* cursor;
    u8* limit;
    PooledListNode* end;
    u32 count;
};

#endif
