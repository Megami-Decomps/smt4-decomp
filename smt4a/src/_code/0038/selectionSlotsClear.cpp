#include "common.h"

struct SlotSelection {
    u8 unk0000[0x24a0]; // 0x0000
    s16 slots[10];      // 0x24a0
};

// Marks all ten selection slots empty.
extern "C" void selectionSlotsClear(SlotSelection* selection)
{
    for (s32 i = 0; i < 10; ++i) {
        selection->slots[i] = -1;
    }
}
