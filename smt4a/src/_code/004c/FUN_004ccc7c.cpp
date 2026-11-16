/* NON_MATCHING: loop shape, helper structure and constants match; retail branches to the table lookup placed after the loop (instead of predicating it), and the curve's temporaries and the starting level's saved register are numbered differently. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

/* Experience needed from level 99 on: a cubic, capped at 999999. */
static __inline u32 experienceCurve(s32 level)
{
    u32 value = level * level * 3 + (u32)(level * level * level) / 100 + level * 1755 * 2 + level * 2 + 99526;
    if (value > 999999) {
        value = 999999;
    }
    return value;
}

/* Experience needed to leave `level`: the table's entry below level 99, the curve above, 0 at or past the unlocked limit. */
static __inline u32 experienceForLevel(s32 level)
{
    const u32 *requirements = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
    if (level >= gameGetUnlockedCountLimit()) {
        return 0;
    }
    if (level >= 99) {
        return experienceCurve(level);
    }
    return requirements[level - 1];
}

/* Consumes experience level by level up to the unlocked limit and returns the levels gained. */
s32 FUN_004ccc7c(s32 startingLevel, u32 *experience)
{
    s32 level = startingLevel;
    for (;;) {
        if (level >= gameGetUnlockedCountLimit()) {
            break;
        }
        u32 required = experienceForLevel(level);
        if (*experience < required) {
            break;
        }
        *experience -= required;
        ++level;
    }
    return level - startingLevel;
}

} /* extern "C" */
