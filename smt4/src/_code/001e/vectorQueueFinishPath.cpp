/* NON_MATCHING: retail loads the point's kind in each arm instead of hoisting it. The previous-point address and the VFP loads for its position differ. */
#include "shard/W6_W6Match2_VectorQueue.h"
#include "map/MapVector.h"

extern "C" {
f32 mathDistanceBetweenPoints(MapVector from, MapVector to); // declcheck: local (util/MathFunctions.h declares six floats for its float callers; retail moves this caller's points as by-value vectors, as in mapSelectNearbyDeferredModel)
/* Finishes the active path by storing each point's direction toward its predecessor. */
void vectorQueueFinishPath(void)
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
            f32 distance = mathDistanceBetweenPoints(point->position, previous->position);
            if (distance < 0.0f)
                distance = -distance;
            MapVector direction = mapVectorSub(previous->position, point->position);
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
