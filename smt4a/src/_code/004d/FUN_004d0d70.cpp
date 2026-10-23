/* NON_MATCHING: bounds guard moves ahead of the prologue; compaction-search tail placement and scratch registers differ. */
#include "shard/Shard0031.h"

extern "C" {
Lookup62 *gameGetSlotRecord(u32 slot);
PartyStatusSlots *gameGetSlotTable(void);

// Remove a slot from party selections and compact the active slot ordering.
u32 FUN_004d0d70(u32 slot)
{
    if (slot >= 24) {
        return 0;
    }
    gameGetSlotRecord(slot)->id = 0;
    PartyStatusSlots *table = gameGetSlotTable();
    if ((u32)table->reserve[0] == slot) {
        table->reserve[0] = -1;
    } else if ((u32)table->reserve[1] == slot) {
        table->reserve[1] = -1;
    } else if ((u32)table->reserve[2] == slot) {
        table->reserve[2] = -1;
    }
    for (s32 index = 0; index < 24; ++index) {
        s32 entry = table->active.slots[index];
        if ((u32)entry == slot) {
            table->active.slots[index] = -1;
            break;
        }
        if (entry < 0) {
            break;
        }
    }
    table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        if (table->active.slots[index] < 0) {
            s32 next = index;
            do {
                ++next;
                if (next >= 24) {
                    return 1;
                }
            } while (table->active.slots[next] < 0);
            table->active.slots[index] = table->active.slots[next];
            table->active.slots[next] = -1;
        }
    }
    return 1;
}
}
