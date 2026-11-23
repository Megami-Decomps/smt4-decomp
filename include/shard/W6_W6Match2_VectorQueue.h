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

/* A mover walking from the first point of a queue to the next (FUN_00312de8 hands one out, FUN_00312ea0 advances
 * it; a map NPC keeps it as its path timer). 0x30 bytes. */
struct MapTimerSlot {
    /* 0x00 */ s8 active;
    /* 0x01 */ u8 reached;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s32 queue;      /* the queue it walks */
    /* 0x08 */ u32 waypoint;   /* the point walked from */
    /* 0x0C */ MapVector origin;
    /* 0x18 */ MapVector target;
    /* 0x24 */ f32 duration;
    /* 0x28 */ f32 progress;
    /* 0x2C */ s32 id;         /* its index, -1 when free */
};

/* g_vectorQueueWork: the map's point queues and the timed transitions taken from them. */
struct VectorQueueWork {
    /* 0x0000 */ VectorQueue queues[16];
    /* 0x2840 */ u32 activeQueue;
    /* 0x2844 */ MapTimerSlot slots[32];
};

extern "C" VectorQueueWork *g_vectorQueueWork;

typedef char QueuedVectorDirectionOffsetCheck[
    offsetof(QueuedVector, direction.x) == 0x10 &&
    offsetof(QueuedVector, direction.y) == 0x14 &&
    offsetof(QueuedVector, direction.z) == 0x18 && sizeof(QueuedVector) == 0x28 ? 1 : -1];
typedef char VectorQueueWorkOffsetCheck[sizeof(VectorQueue) == 0x284 && offsetof(VectorQueueWork, activeQueue) == 0x2840 &&
    offsetof(VectorQueueWork, slots) == 0x2844 && sizeof(MapTimerSlot) == 0x30 && offsetof(MapTimerSlot, id) == 0x2C ? 1 : -1];

#endif
