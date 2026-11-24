#include "gamedata/LevelTable.h"

/* Scale the rank-table cost by the capped level-difference percentage. */
extern "C" u32 devilCalculateRankCost(u32 id, s32 rank, s32 level)
{
    if (rank >= 99)
        return 0;
    u32 *costs = (u32 *)dataTableGetEntries(dataTableGet(9, 1));
    u32 cost = costs[rank - 1];
    u32 percent = levelGrowthPercent(id, level);
    return cost * percent / 100;
}
