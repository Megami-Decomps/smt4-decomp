/* NON_MATCHING: 78 vs 77 rows (91 diff lines): positive bounds guard, loop forms and control flow match retail; retail keeps the slot table in r2 (mov r2, r0) and uses ip for the compaction index, shifting scratch registers. */
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {

/* Remove a slot from party selections and compact the active slot ordering. */
u32 FUN_004d0d70(u32 slot)
{
    if (slot < 24) {
        gameGetSlotRecord(slot)->id = 0;
        SaveSlotTableA *table = gameGetSlotTable();
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
        SaveSlotTableA *compact = gameGetSlotTable();
        for (s32 index = 0; index < 24; ++index) {
            if (compact->party[index] < 0) {
                s32 found = 0;
                for (s32 next = index + 1; next < 24; ++next) {
                    if (compact->party[next] >= 0) {
                        compact->party[index] = compact->party[next];
                        compact->party[next] = -1;
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    return 1;
                }
            }
        }
        return 1;
    }
    return 0;
}
} /* extern "C" */
