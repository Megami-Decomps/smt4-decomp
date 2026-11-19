/* NON_MATCHING: indexed slot selection and final volume update match locally; retail retains a second selector check, separate sound-system bases, and a shared result register. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Snd/AsdSoundVolume.h"
#include "code/Code002b.h"
extern "C" {
extern AsdSoundSystem g_asdSound;
s32 nw_snd_SoundArchive_GetSoundType(AsdSoundSystem *system, s32 sound);
void basicSoundStopOrFadeOut(s32 handle, s32 frames);
u32 nw_snd_SoundStartable_StartSound(void *player, s32 *handle, s32 sound, void *parameters);

// Replace a one-sound slot and fade it to the requested volume.
u32 FUN_0010ddcc(u32 slotIndex, s32 sound, u32 level, s32 frames)
{
    if (slotIndex != 0 && slotIndex != 1)
        return 0;
    if (!nw_snd_SoundArchive_IsAvailable(&g_asdSound) || !nw_snd_SoundArchive_GetSoundType(&g_asdSound, sound))
        return 0;
    AsdSndSlotC *slot = g_asdSound.outputC[slotIndex];
    if (slot == NULL)
        return 0;
    if (slot->handle)
        basicSoundStopOrFadeOut(slot->handle, 0);
    if ((u8)nw_snd_SoundStartable_StartSound(g_asdSound.player, &slot->handle, sound, NULL))
        return 0;
    if (slot->handle)
        nw_snd_internal_BasicSound_SetVolume(slot->handle, 0, 0.0f);
    slot->volume = (u8)level;
    if (level > 127)
        slot->volume = 127;
    f32 volume;
    if (level != 0) {
        volume = 1.0f + ((f32)(u32)slot->volume - 64.0f) * (2.0f / 127.0f);
        if (volume > 2.0f)
            volume = 2.0f;
    } else {
        volume = 0.0f;
    }
    asdSoundHandleSetVolume(slot->handle, frames, volume);
    slot->unk08 = sound;
    slot->flag |= 2;
    return 1;
}
}
