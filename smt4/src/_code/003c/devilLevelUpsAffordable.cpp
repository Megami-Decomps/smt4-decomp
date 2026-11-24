#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/LevelTable.h"

extern "C" {

/* Spends experience from *exp on level-ups of a devil, from its current level towards 99, and returns the levels gained. Each level costs the table's requirement scaled by a percentage that depends on how far the level is above the devil's base level. */
s32 devilLevelUpsAffordable(u32 devilId, s32 level, u32 *exp)
{
    s32 cur = level;
    u32 percent = levelGrowthPercent(devilId, cur);

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
