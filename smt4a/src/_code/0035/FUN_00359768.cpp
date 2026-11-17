/* NON_MATCHING: global-base address materialization and saved actor/volume register allocation differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(void *);
s32 nw_snd_SoundArchive_GetSoundType(void *, u32);
s32 asd3dSoundActorIsPlaying(u32);
s32 FUN_00151340(u32);
u32 FUN_0015e2bc(void *, s32 *, u32, s32);

/* Start an idle spatial actor and convert the 0..127 volume to its relative gain. */
u8 FUN_00359768(u32 soundId, u32 actorIndex, u32 volume)
{
    AsdSnd3dStateA *sound3d = &g_asdSoundSystem.sound3d;
    AsdSndSlotBA *slot = g_asdSoundSystem.currentSlotB;
    u8 started = 0;
    if (g_asdSoundSystem.sound3d.enabled && slot->heapBase && actorIndex < 16 &&
        nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem) &&
        nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, soundId) &&
        !asd3dSoundActorIsPlaying(actorIndex) && FUN_00151340(soundId)) {
        AsdSnd3dActorA *actor = &sound3d->actors[actorIndex];
        started = static_cast<u8>(FUN_0015e2bc(actor, &sound3d->handles[actorIndex], soundId, 0)) == 0;
        f32 gain;
        if (volume == 0)
            gain = 0.0f;
        else
            gain = (static_cast<f32>(volume) - 64.0f) * 0.015748031f + 1.0f;
        actor->volume = gain;
        if (started)
            sound3d->playingMask |= 1 << actorIndex;
    }
    return started;
}
}
