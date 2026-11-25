/* NON_MATCHING: the stores and the loop match retail; retail sets the loop index (r2) from the zero register before loading the queue pointer (r3), the build gives them r3 and r2. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {

extern SoundActorQueue *g_soundActorQueue;

/* Clears the sound actor queue: its header and all thirty-two entries. */
void soundActorQueueReset(void)
{
    SoundActorQueue *queue = g_soundActorQueue;
    queue->unk00 = 0;
    queue->count = 0;
    queue->pending = 0;
    queue->enabled = 0;
    for (s32 index = 0; index < SOUND_ACTOR_QUEUE_CAPACITY; ++index) {
        SoundActorQueueEntry *entry = &queue->entries[index];
        entry->active = 0;
        entry->position.x = 0.0f;
        entry->position.y = 0.0f;
        entry->position.z = 0.0f;
        entry->soundId = 0;
        entry->handle = 0;
        entry->started = 0;
        entry->positional = 0;
        entry->inactiveFrames = 0;
    }
}

} /* extern "C" */
