/* NON_MATCHING: system/actor bases use different anchors; readiness guard and volume arithmetic use different register schedules. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(const void *archive);
s32 nw_snd_SoundArchive_GetSoundType(const void *archive, s32 soundId);
s32 asd3dSoundActorIsPlaying(u32 actor);
s32 FUN_00151340(s32 soundId);
u32 nw_snd_SoundStartable_StartSound(AsdSnd3dActorA *actor, s32 *handle, s32 soundId, s32 flags);

// Start a sound on an idle spatial actor and apply the system's normalized volume.
u8 FUN_0032cb58(s32 soundId, u32 actorIndex)
{
    AsdSoundSystemA *system = &g_asdSoundSystem;
    AsdSnd3dStateA *sound3d = &system->sound3d;
    u8 success = 0;
    if (sound3d->enabled != 0 && system->currentSlotB->heapBase != NULL && actorIndex < 16 &&
        nw_snd_SoundArchive_IsAvailable(system->archive) != 0 &&
        nw_snd_SoundArchive_GetSoundType(system->archive, soundId) != 0 &&
        asd3dSoundActorIsPlaying(actorIndex) == 0 && FUN_00151340(soundId) != 0) {
        success = (nw_snd_SoundStartable_StartSound(&sound3d->actors[actorIndex], &sound3d->handles[actorIndex], soundId, 0) & 0xFF) == 0;
        union { f32 value; s32 bits; } volume;
        if (sound3d->volume == 0) {
            volume.value = 0.0f;
        } else {
            volume.value = ((f32)sound3d->volume - 64.0f) * 0.015748031f + 1.0f;
            // Nonnegative IEEE float bit patterns preserve their numeric ordering.
            if (volume.bits > 0x3F800000) {
                volume.value = 1.0f;
            }
        }
        sound3d->actors[actorIndex].volume = volume.value;
        if (success != 0) {
            sound3d->playingMask |= 1 << actorIndex;
        }
    }
    return success;
}
}
