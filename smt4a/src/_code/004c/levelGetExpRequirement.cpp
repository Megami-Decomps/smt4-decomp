/* NON_MATCHING: the polynomial (as its own helper) and the clamp match; retail branches to the table lookup placed after the epilogue (with its own pop) instead of predicating it. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"

/* Experience needed past the table's last level (99 on): a cubic, capped at 999999. */
static __inline u32 levelExpCurve(s32 level)
{
    u32 value = level * level * 3 + (u32)(level * level * level) / 100 + level * 1755 * 2 + level * 2 + 99526;
    if (value > 999999) {
        value = 999999;
    }
    return value;
}

extern "C" {

/* Experience needed for `level`: from table 9 below level 99, a polynomial above (capped at 999999), 0 at or past the unlocked limit. */
u32 levelGetExpRequirement(s32 level)
{
    const u32 *table = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));

    if (level >= gameGetUnlockedCountLimit()) {
        return 0;
    }
    if (level >= 99) {
        return levelExpCurve(level);
    }
    return table[level - 1];
}

} /* extern "C" */
