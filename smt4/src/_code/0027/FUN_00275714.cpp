/* NON_MATCHING: cursor initialization is scheduled differently around the empty-queue gate. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern SoundActorQueue *DAT_00448c20;

void FUN_00275714()
{
    SoundActorQueue *queue = DAT_00448c20;
    if (queue->enabled && queue->pending) {
        queue->pending = 0;
        if (queue->count > 0) {
            s32 index = 0;
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
