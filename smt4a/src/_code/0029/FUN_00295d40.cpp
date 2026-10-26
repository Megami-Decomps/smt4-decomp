/* NON_MATCHING: branch layout (first-entry arm out of line) and the length sign test now match retail; retail loads the Vec3 operands with vldm triples where this build loads individual components. */
#include "shard/W6_W6Match2_VectorQueue.h"
#include "shard/S1Mover.h"

extern "C" {
extern VectorQueueWork *g_vectorQueueWork;
f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

/* Build normalized backward directions for the active queue, then advance it. */
void FUN_00295d40(void)
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
            entry->kind |= 1;
            QueuedVector *previous = entry - 1;
            f32 length = distSpatial(entry->x, entry->y, entry->z,
                                     previous->x, previous->y, previous->z);
            if (length < 0.0f)
                length = -length;
            Vec3f previousPosition = *(const Vec3f *)&previous->x;
            Vec3f position = *(const Vec3f *)&entry->x;
            Vec3f direction;
            direction.x = previousPosition.x - position.x;
            direction.y = previousPosition.y - position.y;
            direction.z = previousPosition.z - position.z;
            if (length != 0.0f) {
                f32 reciprocal = 1.0f / length;
                direction.x *= reciprocal;
                direction.y *= reciprocal;
                direction.z *= reciprocal;
            }
            *(Vec3f *)&entry->direction = direction;
        }
    }
    ++g_vectorQueueWork->activeQueue;
}
}
