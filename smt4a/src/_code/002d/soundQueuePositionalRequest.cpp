#include "sound/AmbientSound.h"

extern "C" {
extern SoundActorQueue *g_soundActorQueue;

/* Initializes the first free positional request and increments the live request count. */
void soundQueuePositionalRequest(u32 soundId, s32 kind, SoundActorQueuePosition position)
{
    for (s32 index = 0; index < SOUND_ACTOR_QUEUE_CAPACITY; ++index) {
        SoundActorQueueEntry *request = &g_soundActorQueue->entries[index];
        if (request->active == 0) {
            request->active = 1;
            request->positional = kind;
            request->inactiveFrames = 0;
            request->position = position;
            request->soundId = soundId;
            if (kind == 0) {
                request->handle = soundActorStartOnFreeChannel(soundId, position);
                request->started = 1;
            } else {
                request->handle = 0;
                request->started = 0;
            }
            ++g_soundActorQueue->count;
            return;
        }
    }
}
} /* extern "C" */
