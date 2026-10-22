#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundSlotSelection {
    /* 0x000 */ u8 unk000[0x204];
    /* 0x204 */ AsdSndSlotB *slot;
};

extern "C" {

extern SoundSlotSelection DAT_004e2f68;
extern void FUN_002bda30(s32 handle, s32 fadeFrames);
extern void nw_snd_SoundHandle_DetachSound(s32 *handle);

/* Stops and detaches all sounds in the current eight-handle slot. */
void asdSndStopCurrentSlotSounds(void)
{
    AsdSndSlotB *slot = DAT_004e2f68.slot;
    if (slot != NULL) {
        for (u8 index = 0; index < 8; ++index) {
            if (slot->handles[index] != 0) {
                FUN_002bda30(slot->handles[index], 0);
                nw_snd_SoundHandle_DetachSound(&slot->handles[index]);
            }
        }
    }
}

} /* extern "C" */
