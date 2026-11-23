/* NON_MATCHING: retail tests a register it never sets (r5) before the restart: the original read an
 * uninitialised flag there. Written defined, with the slot always restarted, the test and the predicated
 * set-up go and the registers differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
void basicSoundStopOrFadeOut(s32 handle, s32 fadeFrames);
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);

/* Selects slot `index` of the first kind (-1 clears the selection), stopping its sounds and restoring its
 * saved heap state. Returns 1 when an active slot was selected. */
s32 FUN_00119da8(u32 index)
{
    if (index == ~0u) {
        g_asdSound.currentSlotA = NULL;
        return 0;
    }
    if (index >= ASD_SND_SLOT_A_COUNT) {
        return 0;
    }
    AsdSndSlotA *slot = &g_asdSound.slotsA[index];
    if (slot->active == 0) {
        return 0;
    }
    for (s32 i = 0; i < 4; ++i) {
        if (slot->handles[i] != 0) {
            basicSoundStopOrFadeOut(slot->handles[i], 0);
        }
    }
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    if (slot->hasHeap != 0) {
        nw_snd_SoundHeap_LoadState(slot, slot->savedState);
    }
    g_asdSound.currentSlotA = slot;
    return 1;
}

} /* extern "C" */
