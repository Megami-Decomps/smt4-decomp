/* NON_MATCHING: retail retains redundant sound-type/gain-cap paths; volume-call predication and global bases differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 FUN_002bf684(void *archive);
u32 FUN_00141fd0(void *archive, s32 id);
s32 FUN_001388dc(s32 id);
u32 nw_snd_SoundStartable_StartSound(void *player, s32 *handle, s32 id, u32 flags);
void nw_snd_internal_BasicSound_SetVolume(s32 sound, u32 frames, f32 volume);

s32 FUN_00126850(s32 id, u32 volume, u32 fadeFrames)
{
    AsdSndSlotA *slot = g_asdSound.currentSlotA;
    if (!slot) {
        return -1;
    }
    s32 index = -1;
    if (!slot->handles[0]) {
        index = 0;
    } else if (!slot->handles[1]) {
        index = 1;
    } else if (!slot->handles[2]) {
        index = 2;
    } else if (!slot->handles[3]) {
        index = 3;
    } else {
        return -1;
    }
    if (!FUN_002bf684(&g_asdSound) || !FUN_00141fd0(&g_asdSound, id)) {
        return index;
    }
    u32 type = FUN_00141fd0(&g_asdSound, id);
    if (slot->hasHeap && type == 3) {
        if (!FUN_001388dc(id)) {
            return index;
        }
    } else if (type != 2) {
        return index;
    }
    s32 *handle = &slot->handles[index];
    bool success = (u8)nw_snd_SoundStartable_StartSound(g_asdSound.player, handle, id, 0) == 0;
    if (volume > 127) {
        volume = 127;
    }
    f32 gain = 0.0f;
    if (volume) {
        gain = ((f32)volume - 64.0f) * 0.015748031f + 1.0f;
    }
    if (*handle) {
        nw_snd_internal_BasicSound_SetVolume(*handle, 0, 0.0f);
    }
    if (*handle) {
        nw_snd_internal_BasicSound_SetVolume(*handle, fadeFrames, gain);
    }
    return success ? index : -1;
}
}
