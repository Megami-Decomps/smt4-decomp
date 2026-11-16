#include "shard/W6_W6Match2_VectorQueue.h"

extern "C" VectorQueueWork* g_vectorQueueWork;

/* Appends a vector of the given kind to a queue. */
static __inline void vectorQueuePush(VectorQueue* queue, u32 kind, f32 x, f32 y, f32 z)
{
    QueuedVector* entry = &queue->entries[queue->count];
    entry->kind = kind;
    entry->x = x;
    entry->y = y;
    entry->z = z;
    ++queue->count;
}

// Append a position (kind 0) to the active vector queue.
extern "C" void vectorQueuePushPosition(f32 x, f32 y, f32 z)
{
    VectorQueue* queue = &g_vectorQueueWork->queues[g_vectorQueueWork->activeQueue];
    vectorQueuePush(queue, 0, x, y, z);
}
