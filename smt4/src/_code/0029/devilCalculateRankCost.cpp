/* NON_MATCHING: cost and incoming level occupy exchanged saved registers; conditional default percentage now matches. */
#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/DataTable.h"

/* Scale the rank-table cost by the capped level-difference percentage. */
extern "C" u32 devilCalculateRankCost(u32 id, s32 rank, s32 level)
{
    if (rank >= 99)
        return 0;
    u32 *costs = (u32 *)dataTableGetEntries(dataTableGet(9, 1));
    u32 cost = costs[rank - 1];
    s32 difference = level - nkmBaseGetRecord(id)->level + 1;
    u32 percent;
    if (difference > 0) {
        if (difference > 10)
            difference = 10;
        u16 *percentages = (u16 *)dataTableGetEntries(dataTableGet(9, 2));
        percent = percentages[difference - 1];
    } else {
        percent = 100;
    }
    return cost * percent / 100;
}
