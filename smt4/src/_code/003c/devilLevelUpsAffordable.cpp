#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/LevelTable.h"

extern "C" {

/* Spends experience from *exp on level-ups of a devil, from its current level towards 99, and returns the levels gained. Each level costs the table's requirement scaled by a percentage that depends on how far the level is above the devil's base level. */
s32 devilLevelUpsAffordable(u32 devilId, s32 level, u32 *exp)
{
    s32 cur = level;
    s32 step = cur - nkmBaseGetRecord(devilId)->level + 1;
    u32 percent;

    if (step <= 0) {
        percent = 100;
    } else {
        if (step > 10) {
            step = 10;
        }
        percent = ((const u16 *)dataTableGetEntries(dataTableGet(9, 2)))[step - 1];
    }
    for (;;) {
        if (cur == 99) {
            break;
        }
        u32 cost = levelExpRequirement(cur) * percent / 100;

        if (*exp < cost) {
            break;
        }
        *exp -= cost;
        cur++;
    }
    return cur - level;
}

} /* extern "C" */
