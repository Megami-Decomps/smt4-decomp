/* NON_MATCHING: compiler changes the special deselection branch/return layout; accumulated-result form differs by one branch target. */
#include "common.h"

struct SoundSelectionSlot {
    u8 unk00[0x10]; // 0x00
    void* heapBase; // 0x10
    u8 unk14[0x58]; // 0x14
    u8 index; // 0x6c
    u8 unk6d[3]; // 0x6d
};

struct SoundSelectionState {
    u8 unk0000[0x524]; // 0x0000
    SoundSelectionSlot slots[4]; // 0x0524
    u8 unk06e4[0xc34]; // 0x06e4
    SoundSelectionSlot* current; // 0x1318
};

extern "C" SoundSelectionState g_asdSoundSystem;

// Select an initialized sound slot, or clear the selection for index -1.
extern "C" u32 asdSoundSelectCurrentSlot(u32 index)
{
    SoundSelectionState* sound = &g_asdSoundSystem;
    if (index == 0xffffffffu) {
        sound->current = NULL;
        return 0;
    }
    u32 selected = 0;
    if (index < 4 && sound->slots[index].heapBase != NULL) {
        SoundSelectionSlot* slot = &sound->slots[index];
        sound->current = slot;
        slot->index = index;
        selected = 1;
    }
    return selected;
}
