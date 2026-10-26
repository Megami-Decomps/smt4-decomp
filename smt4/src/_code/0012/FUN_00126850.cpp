/* NON_MATCHING: slot/index/volume registers (retail r6/r4/r5), a second g_asdSound literal (sl) for the first two calls, and predicated SetVolume calls differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "code/Code002b.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
u32 FUN_00141fd0(void *archive, s32 id);
s32 FUN_001388dc(s32 id);
u32 nw_snd_SoundStartable_StartSound(void *player, s32 *handle, s32 id, u32 flags);
void nw_snd_internal_BasicSound_SetVolume(s32 sound, u32 frames, f32 volume);

s32 FUN_00126850(s32 id, u32 volume, u32 fadeFrames)
{
    AsdSoundSystem *sound = &g_asdSound;
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
    if (!FUN_002bf684(sound) || !FUN_00141fd0(sound, id)) {
        return index;
    }
    u32 type = FUN_00141fd0(sound, id);
    if (slot->hasHeap) {
        if (type == 3) {
            if (!FUN_001388dc(id)) {
                return index;
            }
        } else if (type != 2) {
            return index;
        }
    } else {
        if (type == 3) {
            return index;
        }
        if (type != 2) {
            return index;
        }
    }
    s32 *handle = &slot->handles[index];
    bool success = (u8)nw_snd_SoundStartable_StartSound(sound->player, handle, id, 0) == 0;
    if (volume > 127) {
        volume = 127;
    }
    f32 gain = 0.0f;
    if (volume) {
        gain = ((f32)volume - 64.0f) * 0.015748031f + 1.0f;
        if (gain > 2.0f) {
            gain = 2.0f;
        }
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
