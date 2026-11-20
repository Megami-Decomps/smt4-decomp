#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 asd3dSoundActorIsPlaying(u32 actorIndex);
void basicSoundStopOrFadeOut(u32 handle, u32 arg);

/* Stops an actor's sound when a handle is bound: the guarded stop of nw::snd::SoundHandle::Stop, inlined here as in
 * Apocalypse's twin FUN_0036be10 and asdSoundRegisteredRestart. */
static __inline void stopSpatialHandle(SpatialSoundPlayback &playback, u32 index, u32 fadeFrames)
{
    if (u32 handle = playback.handles[index]) {
        basicSoundStopOrFadeOut(handle, fadeFrames);
    }
}

/* Stops spatial actor `actorIndex` (when playing) and clears its bit in the active mask. */
void spatialSoundActorStop(u32 actorIndex, u32 fadeFrames)
{
    SpatialSoundPlayback &playback = g_asdSound.sound3d;
    if (playback.enabled && actorIndex < 16 && asd3dSoundActorIsPlaying(actorIndex)) {
        stopSpatialHandle(playback, actorIndex, fadeFrames);
        playback.activeMask &= ~(1u << actorIndex);
    }
}

} /* extern "C" */
