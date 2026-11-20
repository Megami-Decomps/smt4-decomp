#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(void *);
s32 nw_snd_SoundArchive_GetSoundType(void *, u32);
s32 asd3dSoundActorIsPlaying(u32);
s32 asdSndEnsureCurrentSlotData(u32);
u32 nw_snd_SoundStartable_StartSound(void *, s32 *, u32, s32);

/* Start an idle spatial actor and convert the 0..127 volume to its relative gain. */
u8 soundActorStartIdle(u32 soundId, u32 actorIndex, u32 volume)
{
    AsdSnd3dStateA &sound3d = g_asdSoundSystem.sound3d;
    AsdSndSlotBA *slot = g_asdSoundSystem.currentSlotB;
    u8 started = 0;
    if (!sound3d.enabled || !slot->heapBase || actorIndex >= 16)
        return started;

    void *archive = g_asdSoundSystem.archive;
    if (nw_snd_SoundArchive_IsAvailable(archive) &&
        nw_snd_SoundArchive_GetSoundType(archive, soundId) &&
        !asd3dSoundActorIsPlaying(actorIndex) && asdSndEnsureCurrentSlotData(soundId)) {
        started = (u8)nw_snd_SoundStartable_StartSound(&sound3d.actors[actorIndex],
                                                      &sound3d.handles[actorIndex], soundId, 0) == 0;
        f32 gain;
        if (volume == 0)
            gain = 0.0f;
        else
            gain = ((f32)volume - 64.0f) * (2.0f / 127.0f) + 1.0f;
        sound3d.actors[actorIndex].volume = gain;
        if (started)
            sound3d.playingMask |= 1u << actorIndex;
    }
    return started;
}
} /* extern "C" */
