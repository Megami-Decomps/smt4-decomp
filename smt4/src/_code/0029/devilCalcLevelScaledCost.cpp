/* NON_MATCHING: only retail's copy of the level into r5 (mov r5, r4) before the cost-table call is missing; the build indexes with r4 directly (devilCalculateRankCost's body called as (id, level, level): a header inline, a static copy or the real function in the same file all give 11-19 lines). The growth percentage is the shared levelGrowthPercent (gamedata/LevelTable.h). */
#include "gamedata/LevelTable.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Scales a level-table cost by the demon's level difference, capped at ten steps. */
extern "C" u32 devilCalcLevelScaledCost(u16 devilId, s32 level)
{
    if (level < 99) {
        const u32 *costs = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
        u32 cost = costs[level - 1];
        u32 percent = levelGrowthPercent(devilId, level);
        return cost * percent / 100;
    }
    return 0;
}
