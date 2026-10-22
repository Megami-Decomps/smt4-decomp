/* NON_MATCHING: cost/level registers are reversed and the default percentage loads before its condition. */
#include "common.h"

struct DevilLevelRecord {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 level;
};

extern "C" void *dataTableGet(u32 table, u32 subtable);
extern "C" void *dataTableGetEntries(void *table);
extern "C" DevilLevelRecord *devilGetRecord(u32 id);

/* Scale the rank-table cost by the capped level-difference percentage. */
extern "C" u32 devilCalculateRankCost(u32 id, s32 rank, s32 level)
{
    if (rank >= 99)
        return 0;
    u32 *costs = (u32 *)dataTableGetEntries(dataTableGet(9, 1));
    u32 cost = costs[rank - 1];
    s32 difference = level - devilGetRecord(id)->level + 1;
    u32 percent = 100;
    if (difference > 0) {
        if (difference > 10)
            difference = 10;
        u16 *percentages = (u16 *)dataTableGetEntries(dataTableGet(9, 2));
        percent = percentages[difference - 1];
    }
    return cost * percent / 100;
}
