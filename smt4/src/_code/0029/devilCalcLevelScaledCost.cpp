/* NON_MATCHING: only retail's copy of the level into r5 (mov r5, r4) before the cost-table call is missing; the build indexes with r4 directly. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Scales a level-table cost by the demon's level difference, capped at ten steps. */
extern "C" u32 devilCalcLevelScaledCost(u16 devilId, s32 level)
{
    if (level < 99) {
        const u32 *costs = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
        u32 cost = costs[level - 1];
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
        return cost * percent / 100;
    }
    return 0;
}
