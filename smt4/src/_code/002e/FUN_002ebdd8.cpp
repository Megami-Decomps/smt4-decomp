/* NON_MATCHING: same logic; retail reaches the `enabled` byte as ((base + 0x1000 + 0x184) + 0x48) and schedules `mov r1, r6` before the handle test; built folds the flag into a pool offset and reorders the moves */
#include "sound/SpatialSoundPlayback.h"

extern "C" {
extern u8 g_asdSound[];
s32 asd3dSoundActorIsPlaying(u32 actorIndex);
void FUN_002bda30(u32 handle, u32 arg);

/* Stops spatial actor `actorIndex` (when playing) and clears its bit in the active mask. */
void FUN_002ebdd8(u32 actorIndex, u32 arg)
{
    AsdSoundSystem *system = (AsdSoundSystem *)g_asdSound;
    SpatialSoundPlayback *playback = reinterpret_cast<SpatialSoundPlayback *>(system->unk784);

    if (playback->enabled && actorIndex < 16 && asd3dSoundActorIsPlaying(actorIndex)) {
        if (playback->handles[actorIndex] != 0) {
            FUN_002bda30(playback->handles[actorIndex], arg);
        }
        playback->activeMask &= ~(1u << actorIndex);
    }
}

} /* extern "C" */
