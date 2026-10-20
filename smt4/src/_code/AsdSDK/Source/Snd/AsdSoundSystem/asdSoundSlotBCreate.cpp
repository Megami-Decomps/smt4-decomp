/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the heap allocation. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern AsdSndSlotB *DAT_004e316c; /* the selected slot of the second kind */

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void nw_snd_SoundHeap_Create(void *heap, void *buffer, u32 size);
u32 nw_snd_SoundHeap_SaveState(void *heap);

/* Creates the sound heap of slot `index` of the second kind (`heapSize` bytes) and selects the
 * first slot that has one. Returns 0 when the index is out of range or the slot already has a heap. */
s32 asdSoundSlotBCreate(u32 index, u32 heapSize)
{
    AsdSndSlotB *slot;
    u32 i;

    if (index >= ASD_SND_SLOT_B_COUNT) {
        return 0;
    }
    slot = &g_asdSound.slotsB[index];
    if (slot->heapBase != NULL) {
        return 0;
    }

    slot->heapBuffer = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, heapSize, 1);
    nw_snd_SoundHeap_Create(slot, slot->heapBuffer, heapSize);
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    slot->savedState = nw_snd_SoundHeap_SaveState(slot);

    for (i = 0; g_asdSound.slotsB[i].heapBase == NULL; i++) {
        if (i + 1 >= ASD_SND_SLOT_B_COUNT) {
            return 1;
        }
    }
    DAT_004e316c = &g_asdSound.slotsB[i];
    g_asdSound.slotsB[i].index = i;
    return 1;
}

} /* extern "C" */
