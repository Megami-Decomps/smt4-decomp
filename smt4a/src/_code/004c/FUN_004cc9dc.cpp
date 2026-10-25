/* NON_MATCHING: Experience-loop block placement, saved registers, and high-level polynomial lowering differ. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/gameGetUnlockedCountLimit.h"

extern "C" {

/* Consumes experience with a base-level scaling factor and returns the levels gained. */
s32 FUN_004cc9dc(u32 id, s32 startingLevel, u32 *experience)
{
    s32 distance = startingLevel - FUN_00184310(id)->level + 1;
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
    s32 level = startingLevel;
    for (; level < gameGetUnlockedCountLimit(); ++level) {
        const u32 *requirements = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
        u32 required;
        if (level >= gameGetUnlockedCountLimit()) {
            required = 0;
        } else if (level >= 99) {
            required = level * level * 3 + (u32)(level * level * level) / 100 +
                level * 3512 + 99526;
            if (required > 999999) {
                required = 999999;
            }
        } else {
            required = requirements[level - 1];
        }
        required = required * percentage / 100;
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
