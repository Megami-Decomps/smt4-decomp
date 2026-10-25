/* NON_MATCHING: bounds guard moves ahead of the prologue; compaction-search tail placement and scratch registers differ. */
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
Lookup62 *gameGetSlotRecord(u32 slot);

// Remove a slot from party selections and compact the active slot ordering.
u32 FUN_004d0d70(u32 slot)
{
    if (slot >= 24) {
        return 0;
    }
    gameGetSlotRecord(slot)->id = 0;
    SaveSlotTable *table = gameGetSlotTable();
    if ((u32)table->reserve[0] == slot) {
        table->reserve[0] = -1;
    } else if ((u32)table->reserve[1] == slot) {
        table->reserve[1] = -1;
    } else if ((u32)table->reserve[2] == slot) {
        table->reserve[2] = -1;
    }
    for (s32 index = 0; index < 24; ++index) {
        s32 entry = table->party[index];
        if ((u32)entry == slot) {
            table->party[index] = -1;
            break;
        }
        if (entry < 0) {
            break;
        }
    }
    table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        if (table->party[index] < 0) {
            s32 next = index;
            do {
                ++next;
                if (next >= 24) {
                    return 1;
                }
            } while (table->party[next] < 0);
            table->party[index] = table->party[next];
            table->party[next] = -1;
        }
    }
    return 1;
}
}
