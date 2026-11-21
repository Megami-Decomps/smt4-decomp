#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(const void *archive);
s32 nw_snd_SoundArchive_GetSoundType(const void *archive, s32 soundId);
s32 asd3dSoundActorIsPlaying(u32 actor);
s32 asdSndEnsureCurrentSlotData(s32 soundId);
u32 nw_snd_SoundStartable_StartSound(AsdSnd3dActorA *actor, s32 *handle, s32 soundId, s32 flags);

/* Starts a sound on an idle spatial actor and applies the system's default gain. */
u8 spatialSoundActorStart(s32 soundId, u32 actorIndex)
{
    AsdSnd3dStateA &sound3d = g_asdSoundSystem.sound3d;
    AsdSndSlotBA *slot = g_asdSoundSystem.currentSlotB;
    u8 success = 0;
    if (!sound3d.enabled || !slot->heapBase || actorIndex >= 16)
        return success;

    const void *archive = g_asdSoundSystem.archive;
    if (nw_snd_SoundArchive_IsAvailable(archive) && nw_snd_SoundArchive_GetSoundType(archive, soundId) &&
        !asd3dSoundActorIsPlaying(actorIndex) && asdSndEnsureCurrentSlotData(soundId)) {
        success = (u8)nw_snd_SoundStartable_StartSound(&sound3d.actors[actorIndex], &sound3d.handles[actorIndex], soundId, 0) == 0;
        f32 volume;
        if (!sound3d.volume) {
            volume = 0.0f;
        } else {
            volume = ((f32)sound3d.volume - 64.0f) * (2.0f / 127.0f) + 1.0f;
            if (volume > 1.0f)
                volume = 1.0f;
        }
        sound3d.actors[actorIndex].volume = volume;
        if (success)
            sound3d.playingMask |= 1u << actorIndex;
    }
    return success;
}
}
