/* NON_MATCHING: retail repeats the duck defaults on each exit path; the compiled control flow differs. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern AsdSndDuck g_asdSoundDuck;
extern AsdSndStatus g_asdSoundStatus;
extern AsdSndSlotA *DAT_004e3180;       /* the selected slot of the first kind */

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void nw_snd_SoundHeap_Create(void *heap, void *buffer, u32 size);
u32 nw_snd_SoundHeap_SaveState(void *heap);
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);
void FUN_002bda30(s32 handle, s32 unk);

/* Activates slot `index` of the first kind, optionally with a sound heap of `heapSize` bytes,
 * resets the duck state to its defaults and selects the first active slot. Returns 0 when the
 * index is out of range or the slot is already in use. */
s32 asdSoundSlotAActivate(u32 index, s32 heapSize)
{
    AsdSndSlotA *slot;
    u32 i;
    s32 j;

    if (index >= ASD_SND_SLOT_A_COUNT || g_asdSound.slotsA[index].active != 0) {
        return 0;
    }

    slot = &g_asdSound.slotsA[index];
    if (heapSize != 0) {
        slot->heapBuffer = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, heapSize, 1);
        nw_snd_SoundHeap_Create(slot, slot->heapBuffer, heapSize);
        slot->savedState = nw_snd_SoundHeap_SaveState(slot);
        slot->hasHeap = 1;
    }
    slot->active = 1;
    slot->index = index;
    slot->volume = ASD_SND_VOLUME_DEFAULT;

    g_asdSoundDuck.level = 0.5f;
    g_asdSoundDuck.flags |= 1;
    g_asdSoundDuck.holdFrames = 0x1e;
    g_asdSoundDuck.unk08 = 0x1e;
    g_asdSoundDuck.fadeInFrames = 0xf;
    g_asdSoundDuck.fadeOutFrames = 0xf;
    if (g_asdSoundStatus.hasStream != 0) {
        g_asdSoundDuck.active = 1;
    }

    for (i = 0; g_asdSound.slotsA[i].active == 0; i++) {
        if (i + 1 >= ASD_SND_SLOT_A_COUNT) {
            return 1;
        }
    }
    slot = &g_asdSound.slotsA[i];
    if (g_asdSoundDuck.flags != 0) {
        for (j = 0; j < 4; j++) {
            if (slot->handles[j] != 0) {
                FUN_002bda30(slot->handles[j], 0);
            }
        }
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        if (slot->hasHeap != 0) {
            nw_snd_SoundHeap_LoadState(slot, slot->savedState);
        }
    }
    DAT_004e3180 = slot;
    return 1;
}

} /* extern "C" */
