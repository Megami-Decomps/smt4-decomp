#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdSoundSystem g_asdSound;

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void nw_snd_SoundHeap_Create(void *heap, void *buffer, u32 size);
u32 nw_snd_SoundHeap_SaveState(void *heap);

/* Slot B's volume is written as a whole word, padding included. */
struct SlotBVolumeView {
    u8 unk00[0x48];
    u32 volume;
};

// Select an initialized eight-handle sound slot; -1 clears the current selection.
u32 asdSoundSelectSlotB(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    u32 result = 0;
    if (index == (u32)-1) {
        sound->currentSlotB = NULL;
        return result;
    }
    if (index < ASD_SND_SLOT_B_COUNT && sound->slotsB[index].heapBase != NULL) {
        AsdSndSlotB *slot = &sound->slotsB[index];
        sound->currentSlotB = slot;
        result = 1;
        slot->index = index;
    }
    return result;
}

/* Creates the sound heap of slot `index` of the second kind (`heapSize` bytes) and selects the
 * first slot that has one. Returns 0 when the index is out of range or the slot already has a heap. */
s32 asdSoundSlotBCreate(u32 index, u32 heapSize)
{
    AsdSoundSystem *sound = &g_asdSound;
    AsdSndSlotB *slot;
    s32 i;

    if (index >= ASD_SND_SLOT_B_COUNT) {
        return 0;
    }
    slot = &sound->slotsB[index];
    if (slot->heapBase != NULL) {
        return 0;
    }

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 1232);
    slot->heapBuffer = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, heapSize, 1);
    nw_snd_SoundHeap_Create(slot, slot->heapBuffer, heapSize);
    reinterpret_cast<SlotBVolumeView *>(slot)->volume = ASD_SND_VOLUME_DEFAULT;
    slot->savedState = nw_snd_SoundHeap_SaveState(slot);

    for (i = 0; i < ASD_SND_SLOT_B_COUNT; i++) {
        if (sound->slotsB[i].heapBase != NULL) {
            asdSoundSelectSlotB(i);
            break;
        }
    }
    return 1;
}
}
