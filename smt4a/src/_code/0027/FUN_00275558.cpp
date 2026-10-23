/* NON_MATCHING: queue/radius base addressing and active/inactive branch placement differ. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "map/lmapMain.h"

extern "C" {
f32 distSpatial(MapVector first, SoundActorQueuePosition second);
s32 asd3dSoundActorIsPlaying(u32 handle);
void FUN_003d5000(u32 handle);
u32 FUN_003d4ed8(u32 soundId, SoundActorQueuePosition position);
extern LmapExtraA *g_lmapView;

// Start nearby ambient sounds, with distance hysteresis and a short stopped-actor grace period.
void FUN_00275558(void)
{
    struct SoundTriggerGlobals {
        SoundActorQueue *queue;
        f32 radii[1];
    };
    extern SoundTriggerGlobals DAT_005821a0;
    if (DAT_005821a0.queue->pending)
        return;
    for (s32 index = 0; index < DAT_005821a0.queue->count; ++index) {
        SoundActorQueueEntry *entry = &DAT_005821a0.queue->entries[index];
        if (entry->active && entry->unk10 == 1) {
            // Ambient sound identifiers index a bank beginning at this identifier.
            f32 radius = DAT_005821a0.radii[entry->soundId - 0x100030c];
            f32 distance = distSpatial(g_lmapView->camera.savedEye, entry->position);
            if (entry->unk0c) {
                if (distance > radius + 50.0f) {
                    FUN_003d5000(entry->handle);
                    entry->unk0c = 0;
                    entry->inactiveFrames = 0;
                    entry->handle = 0;
                } else {
                    if (!asd3dSoundActorIsPlaying(entry->handle) && ++entry->inactiveFrames > 8) {
                        FUN_003d5000(entry->handle);
                        entry->unk0c = 0;
                        entry->inactiveFrames = 0;
                    }
                }
            } else if (distance < radius) {
                entry->handle = FUN_003d4ed8(entry->soundId, entry->position);
                entry->unk0c = 1;
                entry->inactiveFrames = 0;
            }
        }
    }
}
}
