#include "gamedata/DataTable.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Scales a level-table cost by the demon's level difference, capped at ten steps. */
extern "C" u32 FUN_00295c60(u16 devilId, s32 level)
{
    u32 cost = 0;
    if (level < 99) {
        const u32 *costs = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
        s32 index = level;
        cost = costs[index - 1];
        const DevilSortRecord *devil = devilGetRecord(devilId);
        s32 difference = level - devil->level + 1;
        u32 percent;
        if (difference <= 0) {
            percent = 100;
        } else {
            if (difference > 10) {
                difference = 10;
            }
            const u16 *percentages = (const u16 *)dataTableGetEntries(dataTableGet(9, 2));
            percent = percentages[difference - 1];
        }
        cost = cost * percent / 100;
    }
    return cost;
}
