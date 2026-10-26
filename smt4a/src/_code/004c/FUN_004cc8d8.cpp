/* NON_MATCHING: the polynomial now matches (level * 1755 * 2 + level * 2); retail zeroes the base register before the first limit check, keeps the level in a second saved register and caps the polynomial in a temporary before assigning it. */
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
        if (level < 99) {
            base = requirements[level - 1];
        } else {
            base = level * level * 3 + (u32)(level * level * level) / 100 + level * 1755 * 2 + level * 2 + 99526;
            if (base > 999999)
                base = 999999;
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
