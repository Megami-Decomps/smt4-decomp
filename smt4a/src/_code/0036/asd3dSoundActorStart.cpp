/* NON_MATCHING: playback-base folding, return-byte test and early-exit layout differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
u32 nw_snd_SoundArchive_GetSoundType(void *archive, s32 id);
s32 asd3dSoundActorIsPlaying(u32 channel);
u32 asdSoundEnsureArchiveItemLoaded(u32 id);
u8 nw_snd_SoundStartable_StartSound(AsdSnd3dActorA *actor, s32 *handle, s32 id, s32 flags);

/* Starts sound `id` on idle 3D actor `channel` at the 3D start volume; returns whether it started. */
u8 asd3dSoundActorStart(s32 id, u32 channel)
{
    AsdSnd3dStateA *sound3d = &g_asdSoundSystem.sound3d;
    AsdSndSlotA *slot = g_asdSoundSystem.currentSlotA;
    u8 success = 0;
    if (sound3d->enabled && channel < 16 &&
        nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem) &&
        nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, id) &&
        slot && !asd3dSoundActorIsPlaying(channel)) {
        u32 type = nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, id);
        if (slot->hasHeap && type == 3) {
            if (!asdSoundEnsureArchiveItemLoaded(id)) {
                return 0;
            }
        } else if (type != 2) {
            return 0;
        }
        AsdSnd3dActorA *actor = &sound3d->actors[channel];
        success = nw_snd_SoundStartable_StartSound(actor, &sound3d->handles[channel], id, 0) == 0;
        f32 volume;
        if (sound3d->volume == 0) {
            volume = 0.0f;
        } else {
            volume = ((f32)(u32)sound3d->volume - 64.0f) * 0.015748031f + 1.0f;
            if (volume > 1.0f) {
                volume = 1.0f;
            }
        }
        actor->volume = volume;
        if (success) {
            sound3d->playingMask |= 1u << channel;
        }
    }
    return success;
}
}
