/* NON_MATCHING (b1454): arm layout and the absolute-value compare match; retail loads previous/point as vldmia triples (vldm, vstmia {s1-s3}) and keeps the point kind load per arm. */
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
            point->kind |= 1;
            QueuedVector *previous = point - 1;
            f32 distance = mathDistanceBetweenPoints(point->x, point->y, point->z,
                                                      previous->x, previous->y, previous->z);
            if (distance < 0.0f)
                distance = -distance;
            f32 x = previous->x - point->x;
            f32 y = previous->y - point->y;
            f32 z = previous->z - point->z;
            if (distance != 0.0f) {
                f32 inverseDistance = 1.0f / distance;
                x *= inverseDistance;
                y *= inverseDistance;
                z *= inverseDistance;
            }
            point->direction.x = x;
            point->direction.y = y;
            point->direction.z = z;
        }
    }
    ++g_vectorQueueWork->activeQueue;
}
}
