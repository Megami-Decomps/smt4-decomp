#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void* asdMemoryAlloc(u32 heap, u32 alignClass, u32 flags, u32 size, u32 fromFront);
u32 nw_snd_SoundHeap_Create(void* heap, void* memory, u32 size);
u32 nw_snd_SoundHeap_SaveState(void* heap);

// Select an initialized sound slot, or clear the selection for index -1.
u32 asdSoundSelectCurrentSlot(u32 index)
{
    AsdSoundSystemA* sound = &g_asdSoundSystem;
    u32 selected = 0;
    if (index == 0xffffffffu) {
        sound->currentSlotB = NULL;
        return selected;
    }
    if (index < ASD_SND_SLOT_B_COUNT && sound->slotsB[index].heapBase != NULL) {
        AsdSndSlotBA* slot = &sound->slotsB[index];
        sound->currentSlotB = slot;
        slot->index = index;
        selected = 1;
    }
    return selected;
}

u32 asdSoundSlotBCreate(u32 index, u32 heapSize)
{
    AsdSoundSystemA* sound = &g_asdSoundSystem;
    AsdSndSlotBA* slot;
    s32 i;

    if (index >= ASD_SND_SLOT_B_COUNT) {
        return 0;
    }
    slot = &sound->slotsB[index];
    if (slot->heapBase != NULL) {
        return 0;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 1482);
    slot->heapBuffer = asdMemoryAlloc(0x10000, 0x100, 0, heapSize, 1);
    nw_snd_SoundHeap_Create(slot, slot->heapBuffer, heapSize);
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    slot->savedState = nw_snd_SoundHeap_SaveState(slot);
    for (i = 0; i < ASD_SND_SLOT_B_COUNT; i++) {
        if (sound->slotsB[i].heapBase != NULL) {
            asdSoundSelectCurrentSlot(i);
            break;
        }
    }
    return 1;
}
}
