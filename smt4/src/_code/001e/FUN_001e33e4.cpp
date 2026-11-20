/* NON_MATCHING: 44 lines: retail loads the point's kind separately in each arm where armcc hoists one load above
 * the index test, which also swaps the queue and previous-point registers (r6/r7). */
#include "shard/W6_W6Match2_VectorQueue.h"
#include "util/MathFunctions.h"

extern "C" {
extern VectorQueueWork *g_vectorQueueWork;

// Finish the active path by storing each point's direction toward its predecessor.
void FUN_001e33e4(void)
{
    VectorQueue *queue = &g_vectorQueueWork->queues[g_vectorQueueWork->activeQueue];
    for (s32 index = 0; index < (s32)queue->count; ++index) {
        QueuedVector *point = &queue->entries[index];
        if (index == 0) {
            point->kind |= ~1U;
            point->direction.x = 0.0f;
            point->direction.y = 0.0f;
            point->direction.z = 0.0f;
        } else {
            QueuedVector *previous = point - 1;
            point->kind |= 1;
            f32 distance = mathDistanceBetweenPoints(point->position.x, point->position.y, point->position.z,
                                     previous->position.x, previous->position.y, previous->position.z);
            if (distance < 0.0f)
                distance = -distance;
            MapVector previousPosition = previous->position;
            MapVector position = point->position;
            MapVector direction;
            direction.x = previousPosition.x - position.x;
            direction.y = previousPosition.y - position.y;
            direction.z = previousPosition.z - position.z;
            if (distance != 0.0f) {
                f32 inverseDistance = 1.0f / distance;
                direction.x *= inverseDistance;
                direction.y *= inverseDistance;
                direction.z *= inverseDistance;
            }
            point->direction = direction;
        }
    }
    ++g_vectorQueueWork->activeQueue;
}
}
