#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern SoundActorQueue *g_soundActorQueue;
u32 soundActorStartOnFreeChannel(u32 soundId, SoundActorQueuePosition position);

// When the queue was flagged pending, start the sound of every active non-positional entry that has no handle yet.
void soundActorQueueStartPending()
{
    SoundActorQueue *queue = g_soundActorQueue;
    if (queue->enabled && queue->pending) {
        s32 index = 0;
        queue->pending = 0;
        if (queue->count > 0) {
            do {
                SoundActorQueueEntry *entry = &g_soundActorQueue->entries[index];
                if (entry->active && entry->unk10 == 0 && entry->handle == 0) {
                    entry->handle = soundActorStartOnFreeChannel(entry->soundId, entry->position);
                }
                ++index;
            } while (index < g_soundActorQueue->count);
        }
    }
}
}
