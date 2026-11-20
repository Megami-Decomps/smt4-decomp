#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundSlotSelection {
    /* 0x000 */ u8 unk000[0x204];
    /* 0x204 */ AsdSndSlotB *slot;
};

extern "C" {

extern SoundSlotSelection g_asdSndSlotSelection;
extern void basicSoundStopOrFadeOut(s32 handle, s32 fadeFrames);
extern void nw_snd_SoundHandle_DetachSound(s32 *handle);

/* Stops and detaches all sounds in the current eight-handle slot. */
void asdSndStopCurrentSlotSounds(void)
{
    AsdSndSlotB *slot = g_asdSndSlotSelection.slot;
    if (slot != NULL) {
        for (u8 index = 0; index < 8; ++index) {
            if (slot->handles[index] != 0) {
                basicSoundStopOrFadeOut(slot->handles[index], 0);
                nw_snd_SoundHandle_DetachSound(&slot->handles[index]);
            }
        }
    }
}

} /* extern "C" */
