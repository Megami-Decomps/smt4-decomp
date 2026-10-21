#include "common.h"

struct StateSlot {
    u8 active; // 0x00
    u8 unk01[3];
    s32 state; // 0x04
    u8 unk08[0x44];
};
struct StateSlotTable {
    u8 unk00[0x58];
    StateSlot slots[32]; // 0x58
};

extern "C" {
extern StateSlotTable *g_mapStateSlots;

// Report whether any active slot is in state two.
s32 FUN_002eb134(void)
{
    s32 found = 0;
    for (s32 index = 0; index < 32; ++index) {
        StateSlot *slot = &g_mapStateSlots->slots[index];
        if (slot->active != 0 && slot->state == 2) {
            found = 1;
            break;
        }
    }
    return found;
}
}
