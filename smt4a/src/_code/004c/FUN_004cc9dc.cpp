/* NON_MATCHING: polynomial lowering now matches retail's mul/umull chain (level*1755*2 + level*2 + 99526); remaining: retail hoists the divisor/cap constants and zero into the loop preheader (r9/r8/sl), keeps the table read out of line and saves fp. */
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" {

/* The cubic part of the experience curve from level 99 on. */
static __inline u32 experienceCurve(s32 level)
{
    return level * level * 3 + (u32)(level * level * level) / 100 + level * 1755 * 2;
}

/* Experience needed to leave `level`: the table's entry, or a polynomial from level 99 on, capped at 999999. */
static __inline u32 experienceForLevel(s32 level)
{
    const u32 *requirements = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
    u32 required;
    if (level >= gameGetUnlockedCountLimit()) {
        required = 0;
    } else if (level < 99) {
        required = requirements[level - 1];
    } else {
        required = experienceCurve(level) + level * 2 + 99526;
        if (required > 999999) {
            required = 999999;
        }
    }
    return required;
}

/* Consumes experience with a base-level scaling factor and returns the levels gained. */
s32 FUN_004cc9dc(u32 id, s32 level, u32 *experience)
{
    s32 startingLevel = level;
    s32 distance = level - FUN_00184310(id)->level + 1;
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
    for (; level < gameGetUnlockedCountLimit(); ++level) {
        u32 required = experienceForLevel(level) * percentage / 100;
        if (required > 999999) {
            required = 999999;
        }
        if (*experience < required) {
            break;
        }
        *experience -= required;
    }
    return level - startingLevel;
}
}
