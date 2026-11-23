/* NON_MATCHING: 33 lines: retail loads the point's kind separately in each arm where armcc hoists one load above
 * the index test, which also swaps the queue and previous-point registers (r6/r7). */
#include "shard/W6_W6Match2_VectorQueue.h"

extern "C" {
f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

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
            f32 length = distSpatial(entry->position.x, entry->position.y, entry->position.z,
                                     previous->position.x, previous->position.y, previous->position.z);
            if (length < 0.0f)
                length = -length;
            MapVector previousPosition = previous->position;
            MapVector position = entry->position;
            MapVector direction;
            direction.x = previousPosition.x - position.x;
            direction.y = previousPosition.y - position.y;
            direction.z = previousPosition.z - position.z;
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
