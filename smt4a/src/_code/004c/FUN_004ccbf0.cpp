/* NON_MATCHING: the polynomial and the clamp match; remaining differences are the table-lookup block (retail places it after the epilogue instead of predicating it) and the literal-pool load order. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"

extern "C" {



/* Experience needed for `level`: from table 9 below level 99, a polynomial above (capped at 999999), 0 at or past the unlocked limit. */
u32 FUN_004ccbf0(s32 level)
{
    void *section = dataTableGet(9, 1);
    s32 *table = static_cast<s32 *>(dataTableGetEntries(section));
    s32 limit = gameGetUnlockedCountLimit();

    u32 value;

    if (level >= limit) {
        return 0;
    }
    if (level >= 99) {
        value = level * level * 3 + (u32)(level * level * level) / 100 + level * 1755 * 2 + level * 2 + 99526;
        if (value > 999999) {
            value = 999999;
        }
        return value;
    }
    return table[level - 1];
}

} /* extern "C" */
