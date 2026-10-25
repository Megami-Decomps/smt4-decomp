/* NON_MATCHING: retail preserves the original level in another saved register and schedules polynomial arithmetic differently. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTable.h"

struct ExperienceDefinition { u8 unk00[6]; u16 level; };
extern "C" {
s32 gameGetUnlockedCountLimit();
const ExperienceDefinition *FUN_00184310(u32 id);

// Compute the capped level requirement, scaled by the distance from the definition's base level.
u32 FUN_004cc8d8(u32 id, s32 level)
{
    if (level >= gameGetUnlockedCountLimit())
        return 0;
    const u32 *requirements = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
    u32 base = 0;
    if (level < gameGetUnlockedCountLimit()) {
        if (level >= 99) {
            base = level * level * 3 + (u32)(level * level * level) / 100 + level * 3512 + 99526;
            if (base > 999999)
                base = 999999;
        } else {
            base = requirements[level - 1];
        }
    }
    s32 distance = level - FUN_00184310(id)->level + 1;
    u32 percentage = 100;
    if (distance > 0) {
        if (distance > 10)
            distance = 10;
        const u16 *percentages = (const u16 *)dataTableGetEntries(dataTableGet(9, 2));
        percentage = percentages[distance - 1];
    }
    u32 amount = base * percentage / 100;
    return amount > 999999 ? 999999 : amount;
}
}
