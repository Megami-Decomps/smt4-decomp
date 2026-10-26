#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern SoundActorQueue *DAT_00448c20;
u32 FUN_00291e40(u32 soundId, SoundActorQueuePosition position);

// When the queue was flagged pending, start the sound of every active non-positional entry that has no handle yet.
void FUN_00275714()
{
    SoundActorQueue *queue = DAT_00448c20;
    if (queue->enabled && queue->pending) {
        s32 index = 0;
        queue->pending = 0;
        if (queue->count > 0) {
            do {
                SoundActorQueueEntry *entry = &DAT_00448c20->entries[index];
                if (entry->active && entry->unk10 == 0 && entry->handle == 0) {
                    entry->handle = FUN_00291e40(entry->soundId, entry->position);
                }
                ++index;
            } while (index < DAT_00448c20->count);
        }
    }
}
}
