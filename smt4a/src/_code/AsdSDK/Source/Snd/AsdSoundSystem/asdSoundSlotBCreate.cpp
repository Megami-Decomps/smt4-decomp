/* NON_MATCHING: native's impossible inlined selector guards are omitted; live-slot search lowering differs. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern u8 g_asdSoundSystem[];
void* asdMemoryAlloc(u32 heap, u32 alignClass, u32 flags, u32 size, u32 fromFront);
u32 nw_snd_SoundHeap_Create(void* heap, void* memory, u32 size);
u32 nw_snd_SoundHeap_SaveState(void* heap);

u32 asdSoundSlotBCreate(u32 index, u32 heapSize)
{
    // Apocalypse's slot stride/current-slot field extend beyond the shared IV sound layout.
    struct SlotView {
        u8 heap[0x10];
        void* heapBase;
        u8 unk14[0xC];
        u8 unk20[0x40];
        void* heapBuffer;
        u32 savedState;
        u32 volume;
        s8 index;
        u8 unk6D[3];
    };
    struct SoundSystemView {
        u8 unk000[0x524];
        SlotView slots[ASD_SND_SLOT_B_COUNT];
        u8 unk6E4[0xC34];
        SlotView* current;
    };
    typedef char SoundSlotStrideCheck[sizeof(SlotView) == 0x70 &&
        offsetof(SlotView, heapBase) == 0x10 &&
        offsetof(SoundSystemView, current) == 0x1318 ? 1 : -1];
    SoundSystemView* sound = reinterpret_cast<SoundSystemView*>(g_asdSoundSystem);
    if (index >= ASD_SND_SLOT_B_COUNT || sound->slots[index].heapBase) {
        return 0;
    }
    SlotView* slot = &sound->slots[index];
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 1482);
    slot->heapBuffer = asdMemoryAlloc(0x10000, 0x100, 0, heapSize, 1);
    nw_snd_SoundHeap_Create(slot, slot->heapBuffer, heapSize);
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    slot->savedState = nw_snd_SoundHeap_SaveState(slot);
    s32 candidate = 0;
    while (!sound->slots[candidate].heapBase) {
        ++candidate;
        if (candidate >= ASD_SND_SLOT_B_COUNT) {
            return 1;
        }
    }
    sound->current = &sound->slots[candidate];
    sound->current->index = (s8)candidate;
    return 1;
}
}
