#include "shard/W6_W6Match2_VectorQueue.h"

/* Appends a vector of the given kind to a queue. */
static __inline void vectorQueuePush(VectorQueue* queue, u32 kind, f32 x, f32 y, f32 z)
{
    QueuedVector* entry = &queue->entries[queue->count];
    entry->kind = kind;
    entry->position.x = x;
    entry->position.y = y;
    entry->position.z = z;
    ++queue->count;
}

// Append a position (kind 0) to the active vector queue.
extern "C" void vectorQueuePushPosition(f32 x, f32 y, f32 z)
{
    VectorQueue* queue = &g_vectorQueueWork->queues[g_vectorQueueWork->activeQueue];
    vectorQueuePush(queue, 0, x, y, z);
}
