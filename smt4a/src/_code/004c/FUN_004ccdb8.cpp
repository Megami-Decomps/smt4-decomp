/* NON_MATCHING: polynomial constant multiplication, base-table branch outlining and saved registers differ from retail. */
#include "gamedata/DataTable.h"

struct UnitGrowthCostRecord {
    u8 prefix[6];
    u16 level;
};

extern "C" const UnitGrowthCostRecord *FUN_00184310(u32 unit);
extern "C" s32 gameGetUnlockedCountLimit(void);

static inline u32 unitBaseGrowthCost(s32 level)
{
    void *table = dataTableGet(9, 1);
    const u32 *costs = static_cast<const u32 *>(dataTableGetEntries(table));
    if (level >= gameGetUnlockedCountLimit()) {
        return 0;
    }
    if (level >= 99) {
        u32 cost = level * level * 3 + static_cast<u32>(level * level * level) / 100 +
            level * 0xDB8 + 0x184C6;
        return cost > 999999 ? 999999 : cost;
    }
    return costs[level - 1];
}

extern "C" u32 FUN_004ccdb8(u32 unit, s32 level, s32 referenceLevel)
{
    if (gameGetUnlockedCountLimit() <= level) {
        return 0;
    }
    u32 cost = unitBaseGrowthCost(level);
    s32 difference = referenceLevel - FUN_00184310(unit)->level + 1;
    u32 scale;
    if (difference <= 0) {
        scale = 100;
    } else {
        if (difference > 10) {
            difference = 10;
        }
        void *table = dataTableGet(9, 2);
        const u16 *scales = static_cast<const u16 *>(dataTableGetEntries(table));
        scale = scales[difference - 1];
    }
    cost = cost * scale / 100;
    return cost > 999999 ? 999999 : cost;
}
