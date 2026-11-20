/* NON_MATCHING: global sound-system addresses reload instead of staying saved; actor base and early-return register allocation differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "code/Code002b.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 nw_snd_SoundArchive_GetSoundType(AsdSoundSystem *, u32);
s32 asd3dSoundActorIsPlaying(u32);
s32 FUN_001388dc(u32);
u32 nw_snd_SoundStartable_StartSound(SpatialSoundActor *, u32 *, u32, u32);

u8 asd3dSoundActorStart(u32 soundId, u32 actorIndex)
{
    SpatialSoundPlayback *playback = &g_asdSound.sound3d;
    AsdSndSlotA *slot = g_asdSound.currentSlotA;
    u8 started = 0;
    if (playback->enabled && actorIndex < 16 && nw_snd_SoundArchive_IsAvailable(&g_asdSound) &&
        nw_snd_SoundArchive_GetSoundType(&g_asdSound, soundId) && slot && !asd3dSoundActorIsPlaying(actorIndex)) {
        s32 kind = nw_snd_SoundArchive_GetSoundType(&g_asdSound, soundId);
        if (slot->hasHeap && kind == 3) {
            if (!FUN_001388dc(soundId))
                return 0;
        } else if (kind != 2) {
            return 0;
        }
        SpatialSoundActor *actor = &playback->actors[actorIndex];
        started = static_cast<u8>(nw_snd_SoundStartable_StartSound(actor, &playback->handles[actorIndex], soundId, 0)) == 0;
        f32 volume;
        if (!playback->volume) {
            volume = 0.0f;
        } else {
            volume = (static_cast<f32>(playback->volume) - 64.0f) * (2.0f / 127.0f) + 1.0f;
            if (volume > 1.0f)
                volume = 1.0f;
        }
        actor->volume = volume;
        if (started)
            playback->activeMask |= 1u << actorIndex;
    }
    return started;
}
}
