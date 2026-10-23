/* NON_MATCHING: Output-pointer selection, conditional pause calls, and shared result return differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 nw_snd_internal_BasicSound_IsPause(s32 sound);
void nw_snd_internal_BasicSound_Pause(s32 sound, s32 paused, u32 frames);
s32 FUN_001221b4(s32 sound);

/* Requests pause/resume for a one-sound output and clears pending flags once its fade completes. */
s32 FUN_0010d2d4(u32 channel, s32 operation, u32 frames)
{
    if (channel != 0 && channel != 1) {
        return 0;
    }
    AsdSndSlotC *slot = channel == 0 ? g_asdSound.outputC0 : g_asdSound.outputC1;
    if (slot == NULL) {
        return 0;
    }
    switch (operation) {
    case 0:
        if ((slot->flag & 0x10) == 0 &&
            (slot->handle == 0 || nw_snd_internal_BasicSound_IsPause(slot->handle) == 0)) {
            if (slot->handle != 0) {
                nw_snd_internal_BasicSound_Pause(slot->handle, 1, frames);
            }
            slot->flag |= 0x14;
        }
        break;
    case 1:
        if ((slot->flag & 0x20) == 0 && slot->handle != 0 &&
            nw_snd_internal_BasicSound_IsPause(slot->handle) != 0) {
            if (slot->handle != 0) {
                nw_snd_internal_BasicSound_Pause(slot->handle, 0, frames);
            }
            slot->flag = (slot->flag & ~4) | 0x20;
        }
        break;
    }
    if (slot->handle != 0 && FUN_001221b4(slot->handle) > 0) {
        return 0;
    }
    if ((slot->flag & 0x10) != 0) {
        slot->flag &= ~0x10;
    }
    if ((slot->flag & 0x20) != 0) {
        slot->flag &= ~0x20;
    }
    return 1;
}
}
