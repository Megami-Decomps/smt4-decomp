/* NON_MATCHING: instructions and layout match; register allocation only (retail keeps the slot table in r2 and the
 * loaded slot in r1 through the first search, and the compaction index in r3). */
#include "common.h"
#include "gamedata/UnitStats.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

// Remove a unit from both party lists and compact the stock list.
u32 FUN_0029bbc8(u32 unitIndex)
{
    if (unitIndex < 24) {
        gameGetUnitRecord(unitIndex)->id = 0;
        SaveSlotTableIV *slots = gameGetSlotTable();
        if (slots->active[0] == unitIndex)
            slots->active[0] = -1;
        else if (slots->active[1] == unitIndex)
            slots->active[1] = -1;
        else if (slots->active[2] == unitIndex)
            slots->active[2] = -1;
        for (s32 i = 0; i < 24; ++i) {
            if (slots->stock[i] == unitIndex) {
                slots->stock[i] = -1;
                break;
            }
            if (slots->stock[i] < 0)
                break;
        }
        slots = gameGetSlotTable();
        for (s32 i = 0; i < 24; ++i) {
            if (slots->stock[i] < 0) {
                bool found = false;
                for (s32 next = i + 1; next < 24; ++next) {
                    if (slots->stock[next] >= 0) {
                        slots->stock[i] = slots->stock[next];
                        slots->stock[next] = -1;
                        found = true;
                        break;
                    }
                }
                if (!found)
                    return 1;
            }
        }
        return 1;
    }
    return 0;
}
}
