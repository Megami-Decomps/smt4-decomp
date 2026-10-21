#ifndef SHARD_W6_W6MATCH2_VECTOR_QUEUE_H
#define SHARD_W6_W6MATCH2_VECTOR_QUEUE_H

#include "common.h"

struct QueuedVector {
    u32 kind;          // 0x00
    f32 x;             // 0x04
    f32 y;             // 0x08
    f32 z;             // 0x0c
    u8 unk10[0x18];    // 0x10
};

struct VectorQueue {
    QueuedVector entries[16]; // 0x000
    u32 count;                // 0x280
};

struct VectorQueueWork {
    VectorQueue queues[16]; // 0x0000
    u32 activeQueue;         // 0x2840
};

#endif
