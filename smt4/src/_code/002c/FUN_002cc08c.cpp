/* NON_MATCHING: enabled/current-slot load predication, global address reloads, and actor base registers differ. */
#include "sound/SpatialSoundPlayback.h"
#include "code/Code002b.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 FUN_00141fd0(AsdSoundSystem *, u32);
s32 asd3dSoundActorIsPlaying(u32);
bool asdSndEnsureCurrentSlotData(u32);
u32 nw_snd_SoundStartable_StartSound(SpatialSoundActor *, u32 *, u32, u32);

u8 FUN_002cc08c(u32 soundId, u32 actorIndex)
{
    SpatialSoundPlayback *playback = reinterpret_cast<SpatialSoundPlayback *>(g_asdSound.unk784);
    u8 started = 0;
    if (playback->enabled && g_asdSound.currentSlotB->heapBase && actorIndex < 16 &&
        FUN_002bf684(&g_asdSound) && FUN_00141fd0(&g_asdSound, soundId) &&
        !asd3dSoundActorIsPlaying(actorIndex) && asdSndEnsureCurrentSlotData(soundId)) {
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
