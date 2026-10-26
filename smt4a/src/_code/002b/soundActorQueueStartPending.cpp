#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern SoundActorQueue *DAT_005821a0;
u32 FUN_003d4ed8(u32 soundId, SoundActorQueuePosition position);

// When the queue was flagged pending, start the sound of every active non-positional entry that has no handle yet.
void soundActorQueueStartPending()
{
    SoundActorQueue *queue = DAT_005821a0;
    if (queue->enabled && queue->pending) {
        s32 index = 0;
        queue->pending = 0;
        if (queue->count > 0) {
            do {
                SoundActorQueueEntry *entry = &DAT_005821a0->entries[index];
                if (entry->active && entry->unk10 == 0 && entry->handle == 0) {
                    entry->handle = FUN_003d4ed8(entry->soundId, entry->position);
                }
                ++index;
            } while (index < DAT_005821a0->count);
        }
    }
}
}
