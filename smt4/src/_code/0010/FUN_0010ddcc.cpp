/* NON_MATCHING: retail retains slot-selector validation and shared result register; inline field selection differs. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
extern "C" {
extern AsdSoundSystem g_asdSound;
s32 FUN_002bf684(AsdSoundSystem *system);
s32 FUN_00141fd0(AsdSoundSystem *system, s32 sound);
void FUN_002bda30(s32 handle, s32 frames);
u32 nw_snd_SoundStartable_StartSound(void *player, s32 *handle, s32 sound, void *parameters);
void nw_snd_internal_BasicSound_SetVolume(s32 handle, s32 frames, f32 volume);

// Replace a one-sound slot and fade it to the requested volume.
u32 FUN_0010ddcc(u32 slotIndex, s32 sound, u32 level, s32 frames)
{
    if (slotIndex != 0 && slotIndex != 1)
        return 0;
    if (!FUN_002bf684(&g_asdSound) || !FUN_00141fd0(&g_asdSound, sound))
        return 0;
    AsdSndSlotC *slot = slotIndex == 0 ? g_asdSound.outputC0 : g_asdSound.outputC1;
    if (slot == NULL)
        return 0;
    if (slot->handle)
        FUN_002bda30(slot->handle, 0);
    if ((u8)nw_snd_SoundStartable_StartSound(g_asdSound.player, &slot->handle, sound, NULL))
        return 0;
    if (slot->handle)
        nw_snd_internal_BasicSound_SetVolume(slot->handle, 0, 0.0f);
    slot->volume = (u8)level;
    if (level > 127)
        slot->volume = 127;
    f32 volume = 0.0f;
    if (level != 0) {
        volume = 1.0f + ((f32)(u32)slot->volume - 64.0f) * (2.0f / 127.0f);
        if (volume > 2.0f)
            volume = 2.0f;
    }
    if (slot->handle)
        nw_snd_internal_BasicSound_SetVolume(slot->handle, frames, volume);
    slot->unk08 = sound;
    slot->flag |= 2;
    return 1;
}
}
