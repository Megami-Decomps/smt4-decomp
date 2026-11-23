#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "map/LmapViewGlobals.h"

extern "C" {
f32 distSpatial(MapVector first, SoundActorQueuePosition second);
s32 asd3dSoundActorIsPlaying(u32 handle);
void resourceHandleRelease(u32 handle);
u32 soundActorStartOnFreeChannel(u32 soundId, SoundActorQueuePosition position);

/* The queue the pointer below starts out pointing at (.bss, unnamed). */
extern SoundActorQueue g_soundActorQueueStorage;

/* This file's data: the queue pointer and, right after it, the radius table. Retail reaches the table
 * from the pointer's pool word (add #4), which armcc does only for data its translation unit defines. */
SoundActorQueue *g_soundActorQueue = &g_soundActorQueueStorage;

/* Hearing radius of each ambient sound, indexed from the first ambient sound id (0x100030c). */
f32 g_ambientSoundRadii[8] = { 2000.0f, 2500.0f, 1500.0f, 3000.0f, 2000.0f, 1500.0f, 2500.0f, 2500.0f };

/* Starts and stops the queued ambient sounds by the listener's distance: a sound starts inside its
 * radius, stops 50 units beyond it, and is released after more than 8 frames without playing. */
void ambientSoundUpdateByDistance(void)
{
    if (g_soundActorQueue->pending)
        return;
    for (s32 index = 0; index < g_soundActorQueue->count; ++index) {
        SoundActorQueueEntry *entry = &g_soundActorQueue->entries[index];
        if (entry->active && entry->positional == 1) {
            f32 radius = g_ambientSoundRadii[entry->soundId - 0x100030c];
            f32 distance = distSpatial(g_lmapView->savedEye, entry->position);
            if (entry->started == 0) {
                if (distance < radius) {
                    entry->handle = soundActorStartOnFreeChannel(entry->soundId, entry->position);
                    entry->started = 1;
                    entry->inactiveFrames = 0;
                }
            } else if (distance > radius + 50.0f) {
                resourceHandleRelease(entry->handle);
                entry->started = 0;
                entry->inactiveFrames = 0;
                entry->handle = 0;
            } else if (!asd3dSoundActorIsPlaying(entry->handle) && ++entry->inactiveFrames > 8) {
                resourceHandleRelease(entry->handle);
                entry->started = 0;
                entry->inactiveFrames = 0;
            }
        }
    }
}

} /* extern "C" */
