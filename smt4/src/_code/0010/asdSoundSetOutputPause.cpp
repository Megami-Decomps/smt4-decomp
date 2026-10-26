#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 nw_snd_internal_BasicSound_IsPause(s32 sound);
void nw_snd_internal_BasicSound_Pause(s32 sound, s32 paused, u32 frames);
s32 FUN_001221b4(s32 sound);
}

/* Pauses or resumes a sound when the slot has one. */
static __inline void soundSetPause(s32 sound, s32 paused, u32 frames)
{
    if (sound != 0) {
        nw_snd_internal_BasicSound_Pause(sound, paused, frames);
    }
}

extern "C" {

/* Requests pause/resume for a one-sound output and clears pending flags once its fade completes. */
s32 asdSoundSetOutputPause(u32 channel, s32 operation, u32 frames)
{
    s32 result = 0;
    if (channel == 0 || channel == 1) {
        AsdSndSlotC *slot = (&g_asdSound.outputC0)[channel];
        if (slot != NULL) {
            switch (operation) {
            case 0:
                if ((slot->flag & 0x10) == 0 &&
                    (slot->handle == 0 || nw_snd_internal_BasicSound_IsPause(slot->handle) == 0)) {
                    soundSetPause(slot->handle, 1, frames);
                    slot->flag |= 0x14;
                }
                break;
            case 1:
                if ((slot->flag & 0x20) == 0 && slot->handle != 0 &&
                    nw_snd_internal_BasicSound_IsPause(slot->handle) != 0) {
                    soundSetPause(slot->handle, 0, frames);
                    slot->flag = (slot->flag & ~4) | 0x20;
                }
                break;
            }
            if (slot->handle == 0 || FUN_001221b4(slot->handle) <= 0) {
                if ((slot->flag & 0x10) != 0) {
                    slot->flag &= ~0x10;
                }
                if ((slot->flag & 0x20) != 0) {
                    slot->flag &= ~0x20;
                }
                result = 1;
            }
        }
    }
    return result;
}
}
