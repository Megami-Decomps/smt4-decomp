/* NON_MATCHING: compiler schedules the zero-kind constant before loading the active queue index. */
#include "shard/W6_W6Match2_VectorQueue.h"

extern "C" VectorQueueWork* g_vectorQueueWork;

// Append a position to the active vector queue.
extern "C" void FUN_00353cd4(f32 x, f32 y, f32 z)
{
    VectorQueue* queue = &g_vectorQueueWork->queues[g_vectorQueueWork->activeQueue];
    QueuedVector* entry = &queue->entries[queue->count];
    entry->kind = 0;
    entry->x = x;
    entry->y = y;
    entry->z = z;
    ++queue->count;
}
