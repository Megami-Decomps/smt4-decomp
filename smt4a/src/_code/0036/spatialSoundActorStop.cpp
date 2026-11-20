#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 asd3dSoundActorIsPlaying(u32 actorIndex);
void asdSoundObjectStop(u32 handle, u32 frames); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Stops an actor's sound when a handle is bound: the guarded stop of nw::snd::SoundHandle::Stop, inlined here as in
 * IV's twin FUN_002ebdd8 and asdSoundRegisteredRestart. */
static __inline void stopSpatialHandle(AsdSnd3dStateA &sound3d, u32 index, u32 frames)
{
    if (s32 handle = sound3d.handles[index]) {
        asdSoundObjectStop(handle, frames);
    }
}

/* Stops spatial actor `actorIndex` (when playing) and clears its bit in the active mask. */
void spatialSoundActorStop(u32 actorIndex, u32 frames)
{
    AsdSnd3dStateA &sound3d = g_asdSoundSystem.sound3d;
    if (sound3d.enabled && actorIndex < 16 && asd3dSoundActorIsPlaying(actorIndex)) {
        stopSpatialHandle(sound3d, actorIndex, frames);
        sound3d.playingMask &= ~(1u << actorIndex);
    }
}

} /* extern "C" */
