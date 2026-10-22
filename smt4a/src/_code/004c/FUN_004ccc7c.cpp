/* NON_MATCHING: level-polynomial arithmetic and experience-loop register allocation differ from retail. */
#include "common.h"

extern "C" {
void *dataTableGet(u32 table, u32 subtable);
const u32 *dataTableGetEntries(void *table);
s32 gameGetUnlockedCountLimit();

// Consume experience thresholds until the next level is unaffordable or the unlocked limit is reached.
s32 FUN_004ccc7c(s32 startingLevel, u32 *experience)
{
    s32 level = startingLevel;
    for (; level < gameGetUnlockedCountLimit(); ++level) {
        const u32 *thresholds = dataTableGetEntries(dataTableGet(9, 1));
        u32 required;
        if (level >= gameGetUnlockedCountLimit()) {
            required = 0;
        } else if (level >= 99) {
            required = level * level * 3 + (u32)(level * level * level) / 100 + level * 3512 + 99526;
            if (required >= 1000000)
                required = 999999;
        } else {
            required = thresholds[level - 1];
        }
        if (*experience < required)
            break;
        *experience -= required;
    }
    return level - startingLevel;
}
}
