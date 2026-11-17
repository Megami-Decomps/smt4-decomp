/* NON_MATCHING: loop shape, hoisted constants and the curve now match; retail branches to the table lookup placed after the loop (instead of predicating it), which renumbers the saved registers (starting level r7, table fp). */
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

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

/* Consumes experience with a base-level scaling factor and returns the levels gained. */
s32 FUN_004cc9dc(u32 id, s32 level, u32 *experience)
{
    s32 startingLevel = level;
    s32 distance = level - nkmBaseGetRecord(id)->level + 1;
    u32 percentage;
    if (distance <= 0) {
        percentage = 100;
    } else {
        if (distance > 10) {
            distance = 10;
        }
        const u16 *percentages = (const u16 *)dataTableGetEntries(dataTableGet(9, 2));
        percentage = percentages[distance - 1];
    }
    for (;;) {
        if (level >= gameGetUnlockedCountLimit()) {
            break;
        }
        u32 required = experienceForLevel(level) * percentage / 100;
        if (required > 999999) {
            required = 999999;
        }
        if (*experience < required) {
            break;
        }
        *experience -= required;
        ++level;
    }
    return level - startingLevel;
}
}
