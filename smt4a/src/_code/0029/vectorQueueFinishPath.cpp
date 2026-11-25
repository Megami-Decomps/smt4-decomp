/* NON_MATCHING: retail loads the point's kind in each arm instead of hoisting it. The previous-point address and position-base order also differ. */
#include "shard/W6_W6Match2_VectorQueue.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

/* Build normalized backward directions for the active queue, then advance it. */
void vectorQueueFinishPath(void)
{
    VectorQueue *queue = &g_vectorQueueWork->queues[g_vectorQueueWork->activeQueue];
    for (s32 i = 0; i < (s32)queue->count; ++i) {
        QueuedVector *entry = &queue->entries[i];
        if (i == 0) {
            entry->kind |= ~1u;
            entry->direction.x = 0.0f;
            entry->direction.y = 0.0f;
            entry->direction.z = 0.0f;
        } else {
            QueuedVector *previous = entry - 1;
            entry->kind |= 1;
            f32 length = distSpatial(entry->position, previous->position);
            if (length < 0.0f)
                length = -length;
            MapVector direction = mapVectorSub(previous->position, entry->position);
            if (length != 0.0f) {
                f32 reciprocal = 1.0f / length;
                direction.x *= reciprocal;
                direction.y *= reciprocal;
                direction.z *= reciprocal;
            }
            entry->direction = direction;
        }
    }
    ++g_vectorQueueWork->activeQueue;
}
}
