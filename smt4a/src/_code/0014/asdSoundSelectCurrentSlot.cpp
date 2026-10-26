#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/AsdDebug.h"

/* Apocalypse's slot stride/current-slot field extend beyond the shared IV sound layout. */
struct SoundSelectionSlot {
    u8 heap[0x10];
    void* heapBase;      // 0x10
    u8 unk14[0xC];
    u8 unk20[0x40];
    void* heapBuffer;    // 0x60
    u32 savedState;      // 0x64
    u32 volume;          // 0x68
    u8 index;            // 0x6c
    u8 unk6D[3];
};

struct SoundSelectionState {
    u8 unk000[0x524];
    SoundSelectionSlot slots[ASD_SND_SLOT_B_COUNT];
    u8 unk6E4[0xC34];
    SoundSelectionSlot* current; // 0x1318
};

typedef char SoundSlotStrideCheck[sizeof(SoundSelectionSlot) == 0x70 &&
    offsetof(SoundSelectionSlot, heapBase) == 0x10 &&
    offsetof(SoundSelectionSlot, heapBuffer) == 0x60 &&
    offsetof(SoundSelectionState, current) == 0x1318 ? 1 : -1];

extern "C" {
extern SoundSelectionState g_asdSoundSystem;
void* asdMemoryAlloc(u32 heap, u32 alignClass, u32 flags, u32 size, u32 fromFront);
u32 nw_snd_SoundHeap_Create(void* heap, void* memory, u32 size);
u32 nw_snd_SoundHeap_SaveState(void* heap);

// Select an initialized sound slot, or clear the selection for index -1.
u32 asdSoundSelectCurrentSlot(u32 index)
{
    SoundSelectionState* sound = &g_asdSoundSystem;
    u32 selected = 0;
    if (index == 0xffffffffu) {
        sound->current = NULL;
        return selected;
    }
    if (index < ASD_SND_SLOT_B_COUNT && sound->slots[index].heapBase != NULL) {
        SoundSelectionSlot* slot = &sound->slots[index];
        sound->current = slot;
        slot->index = index;
        selected = 1;
    }
    return selected;
}

u32 asdSoundSlotBCreate(u32 index, u32 heapSize)
{
    SoundSelectionState* sound = &g_asdSoundSystem;
    SoundSelectionSlot* slot;
    s32 i;

    if (index >= ASD_SND_SLOT_B_COUNT) {
        return 0;
    }
    slot = &sound->slots[index];
    if (slot->heapBase != NULL) {
        return 0;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 1482);
    slot->heapBuffer = asdMemoryAlloc(0x10000, 0x100, 0, heapSize, 1);
    nw_snd_SoundHeap_Create(slot, slot->heapBuffer, heapSize);
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    slot->savedState = nw_snd_SoundHeap_SaveState(slot);
    for (i = 0; i < ASD_SND_SLOT_B_COUNT; i++) {
        if (sound->slots[i].heapBase != NULL) {
            asdSoundSelectCurrentSlot(i);
            break;
        }
    }
    return 1;
}
}
