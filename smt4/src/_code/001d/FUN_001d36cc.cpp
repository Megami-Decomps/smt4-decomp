/* NON_MATCHING: only the radius-table addressing differs: retail reaches the table from the DAT_00448c20 literal (add r8, r7, #24 ... vldr [r0, #640], id - 0x1000000 folded into the offset, no relocation of its own); with the table as its own symbol this build loads its address separately. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {

struct SoundListener {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ SoundActorQueuePosition position;
};

extern SoundActorQueue *DAT_00448c20;
extern SoundListener *DAT_004474f4;
/* Hearing radius of each sound actor id, indexed by id - 0x1000000 (lies at 0x4482b8, just before DAT_00448c20). */
extern f32 DAT_004482b8[];

f32 mathDistanceBetweenPoints(SoundActorQueuePosition from, SoundActorQueuePosition to);
void FUN_002877d4(u32 handle);
s32 asd3dSoundActorIsPlaying(u32 handle);

/* Starts the positional actor sounds the listener comes within hearing range of and stops the ones
 * it has moved well out of (or that finished) for more than eight frames. */
void FUN_001d36cc(void)
{
    if (DAT_00448c20->pending) {
        return;
    }
    for (s32 i = 0; i < DAT_00448c20->count; ++i) {
        SoundActorQueueEntry *entry = &DAT_00448c20->entries[i];
        if (!entry->active || entry->positional != 1) {
            continue;
        }
        f32 radius = DAT_004482b8[entry->soundId - 0x1000000];
        f32 distance = mathDistanceBetweenPoints(DAT_004474f4->position, entry->position);
        if (!entry->started) {
            if (distance < radius) {
                entry->handle = FUN_00291e40(entry->soundId, entry->position);
                entry->started = 1;
                entry->inactiveFrames = 0;
            }
        } else {
            u32 handle = entry->handle;
            if (distance > radius + 50.0f) {
                FUN_002877d4(handle);
                entry->started = 0;
                entry->inactiveFrames = 0;
                entry->handle = 0;
            } else if (!asd3dSoundActorIsPlaying(handle)) {
                entry->inactiveFrames = entry->inactiveFrames + 1;
                if (entry->inactiveFrames > 8) {
                    FUN_002877d4(entry->handle);
                    entry->started = 0;
                    entry->inactiveFrames = 0;
                }
            }
        }
    }
}

} /* extern "C" */
