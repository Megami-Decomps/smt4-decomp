/* NON_MATCHING: same logic; retail reaches the ready byte through a +0x1254 sub-struct anchor ((base + 0x1000 + 0x254) + 0x88) and schedules `mov r1, r6` before the handle test; built folds the ready flag into a pool offset and reorders the moves */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 asd3dSoundActorIsPlaying(u32 actorIndex);
void asdSoundObjectStop(u32 handle, u32 frames);

/* Stops spatial actor `actorIndex` (when playing) and clears its bit in the active mask. */
void FUN_0036be10(u32 actorIndex, u32 frames)
{
    AsdSoundSystemA *system = &g_asdSoundSystem;
    AsdSnd3dStateA *sound3d = &system->sound3d;
    if (system->sound3d.enabled && actorIndex < 16 && asd3dSoundActorIsPlaying(actorIndex)) {
        if (sound3d->handles[actorIndex] != 0) {
            asdSoundObjectStop(sound3d->handles[actorIndex], frames);
        }
        sound3d->playingMask &= ~(1u << actorIndex);
    }
}

} /* extern "C" */
