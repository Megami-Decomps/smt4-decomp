/* NON_MATCHING: cursor initialization is scheduled differently around the empty-queue gate. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern SoundActorQueue *DAT_005821a0;
u32 FUN_003d4ed8(u32 soundId, SoundActorQueuePosition position);

void FUN_002b9520()
{
    SoundActorQueue *queue = DAT_005821a0;
    if (queue->enabled && queue->pending) {
        queue->pending = 0;
        if (queue->count > 0) {
            s32 index = 0;
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
