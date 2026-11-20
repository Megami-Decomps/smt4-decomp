#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "code/Code002b.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 nw_snd_SoundArchive_GetSoundType(AsdSoundSystem *, u32);
s32 asd3dSoundActorIsPlaying(u32);
bool asdSndEnsureCurrentSlotData(u32);
u32 nw_snd_SoundStartable_StartSound(SpatialSoundActor *, u32 *, u32, u32);

/* Start an idle positional sound actor and apply the system's default gain. */
u8 spatialSoundActorStart(u32 soundId, u32 actorIndex)
{
    SpatialSoundPlayback &playback = g_asdSound.sound3d;
    AsdSndSlotB *slot = g_asdSound.currentSlotB;
    u8 started = 0;
    if (!playback.enabled || !slot->heapBase || actorIndex >= 16)
        return started;

    AsdSoundSystem *archive = &g_asdSound;
    if (nw_snd_SoundArchive_IsAvailable(archive) && nw_snd_SoundArchive_GetSoundType(archive, soundId) &&
        !asd3dSoundActorIsPlaying(actorIndex) && asdSndEnsureCurrentSlotData(soundId)) {
        started = (u8)nw_snd_SoundStartable_StartSound(&playback.actors[actorIndex],
                                                      &playback.handles[actorIndex], soundId, 0) == 0;
        f32 volume;
        if (!playback.volume) {
            volume = 0.0f;
        } else {
            volume = ((f32)playback.volume - 64.0f) * (2.0f / 127.0f) + 1.0f;
            if (volume > 1.0f)
                volume = 1.0f;
        }
        playback.actors[actorIndex].volume = volume;
        if (started)
            playback.activeMask |= 1u << actorIndex;
    }
    return started;
}
} /* extern "C" */
