/* NON_MATCHING: the endpoint copies: retail copies the target with ldm/stm pairs and stores duration and progress
 * separately (vstr), and keeps the queue pointer in r3 with only r4 saved; armcc copies the target with three-word
 * ldm/stm, stores the two floats with one vstmia and saves r5 too. */
#include "shard/W6_W6Match2_VectorQueue.h"

extern "C" {

/* Hands out the first free mover, walking from the first to the second point of queue `queueIndex`. */
MapTimerSlot *FUN_00312de8(s32 queueIndex, f32 duration)
{
    VectorQueueWork *work = g_vectorQueueWork;
    const VectorQueue *queue = &work->queues[queueIndex];
    for (s32 i = 0; i < 32; ++i) {
        MapTimerSlot *slot = &work->slots[i];
        if (!slot->active) {
            slot->active = 1;
            slot->reached = 0;
            slot->waypoint = 0;
            slot->queue = queueIndex;
            slot->origin = queue->entries[0].position;
            slot->target = queue->entries[1].position;
            slot->duration = duration;
            slot->progress = 0.0f;
            slot->id = i;
            return slot;
        }
    }
    return NULL;
}
}
