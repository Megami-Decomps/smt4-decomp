#include "gamedata/UnitStats.h"
#include <string.h>
#include "util/Random.h"

extern "C" {

/* Increment one weighted base stat; capped stats are removed from the distribution. */
u32 unitRollGrowthStat(StatBlock *unit, u8 *weights)
{
    s32 selected = 0;
    s16 updated[5];
    /* The original clears five bytes before replacing all five halfwords. */
    memset(updated, 0, 5);
    updated[0] = unit->summary.stats[0];
    updated[1] = unit->summary.stats[1];
    updated[2] = unit->summary.stats[2];
    updated[3] = unit->summary.stats[3];
    updated[4] = unit->summary.stats[4];
    enum { MAX_BASE_STAT = 999 };
    if (updated[0] >= MAX_BASE_STAT) weights[0] = 0;
    u32 total = weights[0];
    if (updated[1] >= MAX_BASE_STAT) weights[1] = 0;
    total += weights[1];
    if (updated[2] >= MAX_BASE_STAT) weights[2] = 0;
    total += weights[2];
    if (updated[3] >= MAX_BASE_STAT) weights[3] = 0;
    total += weights[3];
    if (updated[4] >= MAX_BASE_STAT) weights[4] = 0;
    total += weights[4];

    u32 roll = randNextInRange((u16)(total - 1));
    u32 cumulative = weights[0];
    if (weights[0] && cumulative > roll) {
        ++updated[0];
    } else {
        selected = 1;
        cumulative += weights[1];
        if (weights[1] && cumulative > roll) {
            ++updated[1];
        } else {
            selected = 2;
            cumulative += weights[2];
            if (weights[2] && cumulative > roll) {
                ++updated[2];
            } else {
                selected = 3;
                cumulative += weights[3];
                if (weights[3] && cumulative > roll) {
                    ++updated[3];
                } else {
                    selected = 4;
                    cumulative += weights[4];
                    if (weights[4] && cumulative > roll)
                        ++updated[4];
                    else
                        selected = 5;
                }
            }
        }
    }
    unit->summary.stats[0] = updated[0];
    unit->summary.stats[1] = updated[1];
    unit->summary.stats[2] = updated[2];
    unit->summary.stats[3] = updated[3];
    unit->summary.stats[4] = updated[4];
    return (u8)selected;
}
} /* extern "C" */
