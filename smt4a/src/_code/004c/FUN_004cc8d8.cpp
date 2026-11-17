/* NON_MATCHING: the polynomial, scale and caps now match; retail keeps a second copy of the level (r6) for the distance, shares the zero in r5 with the early return, and branches to the table lookup placed after the epilogue instead of predicating it. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"

/* The capped level requirement, scaled by the distance from the definition's base level. */
extern "C" u32 FUN_004cc8d8(u32 id, s32 level)
{
    const u32 *requirements;
    u32 base = 0;
    s32 distance;
    u32 percentage;
    u32 amount;

    if (level >= gameGetUnlockedCountLimit()) {
        return 0;
    }
    requirements = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
    if (level < gameGetUnlockedCountLimit()) {
        if (level < 99) {
            base = requirements[level - 1];
        } else {
            amount = level * level * 3 + (u32)(level * level * level) / 100 + level * 1755 * 2 + level * 2 + 99526;
            base = amount > 999999 ? 999999 : amount;
        }
    }
    distance = level - nkmBaseGetRecord(id)->level + 1;
    if (distance <= 0) {
        percentage = 100;
    } else {
        if (distance > 10) {
            distance = 10;
        }
        percentage = ((const u16 *)dataTableGetEntries(dataTableGet(9, 2)))[distance - 1];
    }
    amount = base * percentage / 100;
    if (amount > 999999) {
        amount = 999999;
    }
    return amount;
}
