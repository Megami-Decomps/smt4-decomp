/* NON_MATCHING: queue/radius base addressing and active/inactive branch placement differ. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "map/LmapViewGlobals.h"

extern "C" {
f32 distSpatial(MapVector first, SoundActorQueuePosition second);
s32 asd3dSoundActorIsPlaying(u32 handle);
void resourceHandleRelease(u32 handle);
u32 soundActorStartOnFreeChannel(u32 soundId, SoundActorQueuePosition position);

// Start nearby ambient sounds, with distance hysteresis and a short stopped-actor grace period.
void FUN_00275558(void)
{
    struct SoundTriggerGlobals {
        SoundActorQueue *queue;
        f32 radii[1];
    };
    extern SoundTriggerGlobals g_soundActorQueue;
    if (g_soundActorQueue.queue->pending)
        return;
    for (s32 index = 0; index < g_soundActorQueue.queue->count; ++index) {
        SoundActorQueueEntry *entry = &g_soundActorQueue.queue->entries[index];
        if (entry->active && entry->unk10 == 1) {
            // Ambient sound identifiers index a bank beginning at this identifier.
            f32 radius = g_soundActorQueue.radii[entry->soundId - 0x100030c];
            f32 distance = distSpatial(g_lmapView->savedEye, entry->position);
            if (entry->unk0c) {
                if (distance > radius + 50.0f) {
                    resourceHandleRelease(entry->handle);
                    entry->unk0c = 0;
                    entry->inactiveFrames = 0;
                    entry->handle = 0;
                } else {
                    if (!asd3dSoundActorIsPlaying(entry->handle) && ++entry->inactiveFrames > 8) {
                        resourceHandleRelease(entry->handle);
                        entry->unk0c = 0;
                        entry->inactiveFrames = 0;
                    }
                }
            } else if (distance < radius) {
                entry->handle = soundActorStartOnFreeChannel(entry->soundId, entry->position);
                entry->unk0c = 1;
                entry->inactiveFrames = 0;
            }
        }
    }
}
}
