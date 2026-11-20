#ifndef SHARD_W6_W6MATCH2_VECTOR_QUEUE_H
#define SHARD_W6_W6MATCH2_VECTOR_QUEUE_H

#include "common.h"
#include <stddef.h>
#include "map/MapVector.h"

struct QueuedVector {
    /* 0x00 */ u32 kind;
    /* 0x04 */ MapVector position;
    union {
        /* 0x10 */ u8 unk10[0x18];
        /* 0x10 */ MapVector direction;    /* unit vector toward the previous point (zero for the first) */
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
