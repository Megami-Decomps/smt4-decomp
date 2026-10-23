#ifndef SHARD_W6_W6MATCH2_VECTOR_QUEUE_H
#define SHARD_W6_W6MATCH2_VECTOR_QUEUE_H

#include "common.h"
#include <stddef.h>

struct QueuedVector {
    u32 kind;          // 0x00
    f32 x;             // 0x04
    f32 y;             // 0x08
    f32 z;             // 0x0c
    union {
        u8 unk10[0x18];    // 0x10
        struct {
            f32 x;        // 0x10
            f32 y;        // 0x14
            f32 z;        // 0x18
            u8 unk1C[0xC];
        } direction;
    };
};

struct VectorQueue {
    QueuedVector entries[16]; // 0x000
    u32 count;                // 0x280
};

struct VectorQueueWork {
    VectorQueue queues[16]; // 0x0000
    u32 activeQueue;         // 0x2840
};

typedef char QueuedVectorDirectionOffsetCheck[
    offsetof(QueuedVector, direction.x) == 0x10 &&
    offsetof(QueuedVector, direction.y) == 0x14 &&
    offsetof(QueuedVector, direction.z) == 0x18 && sizeof(QueuedVector) == 0x28 ? 1 : -1];

#endif
