/* NON_MATCHING: stock compaction loop branch layout and register allocation differ. */
#include "common.h"
#include "gamedata/UnitStats.h"
#include "shard/W7_W7Match2_PartyDamage.h"

extern "C" {
StatBlock *gameGetUnitRecord(u32);
PartyDamageSlotsIV *gameGetSlotTable(void);

// Remove a unit from both party lists and compact the stock list.
u32 FUN_0029bbc8(u32 unitIndex)
{
    if (unitIndex < 24) {
        gameGetUnitRecord(unitIndex)->id = 0;
        PartyDamageSlotsIV *slots = gameGetSlotTable();
        if (slots->active[0] == unitIndex)
            slots->active[0] = -1;
        else if (slots->active[1] == unitIndex)
            slots->active[1] = -1;
        else if (slots->active[2] == unitIndex)
            slots->active[2] = -1;
        for (s32 i = 0; i < 24; ++i) {
            s32 current = slots->stock[i];
            if (current == unitIndex) {
                slots->stock[i] = -1;
                break;
            }
            if (current < 0)
                break;
        }
        slots = gameGetSlotTable();
        for (s32 i = 0; i < 24; ++i) {
            if (slots->stock[i] < 0) {
                s32 next = i;
                do {
                    ++next;
                    if (next >= 24)
                        return 1;
                } while (slots->stock[next] < 0);
                slots->stock[i] = slots->stock[next];
                slots->stock[next] = -1;
            }
        }
        return 1;
    }
    return 0;
}
}
