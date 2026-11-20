/* NON_MATCHING: the signed stat loads, cap checks and byte-sized result match; the cached stats are assigned different registers. */
#include "gamedata/UnitStats.h"
#include "util/Random.h"

extern "C" {
void FUN_003eb068(void *);

/* Increment one weighted base stat; capped stats are removed from the distribution. */
u32 unitRollGrowthStat(StatBlock *unit, u8 *weights)
{
    s32 selected = 0;
    s16 updated[5];
    FUN_003eb068(updated);
    s16 strength = unit->summary.stats[0];
    updated[0] = strength;
    s16 dexterity = unit->summary.stats[1];
    updated[1] = dexterity;
    s16 magic = unit->summary.stats[2];
    updated[2] = magic;
    s16 agility = unit->summary.stats[3];
    updated[3] = agility;
    s16 luck = unit->summary.stats[4];
    updated[4] = luck;
    if (strength >= 999) weights[0] = 0;
    u32 total = weights[0];
    if (dexterity >= 999) weights[1] = 0;
    total += weights[1];
    if (magic >= 999) weights[2] = 0;
    total += weights[2];
    if (agility >= 999) weights[3] = 0;
    total += weights[3];
    if (luck >= 999) weights[4] = 0;
    total += weights[4];

    u32 roll = randNextInRange((u16)(total - 1));
    u32 cumulative = weights[0];
    if (weights[0] && cumulative > roll) {
        updated[0] = strength + 1;
    } else {
        selected = 1;
        cumulative += weights[1];
        if (weights[1] && cumulative > roll) {
            updated[1] = dexterity + 1;
        } else {
            selected = 2;
            cumulative += weights[2];
            if (weights[2] && cumulative > roll) {
                updated[2] = magic + 1;
            } else {
                selected = 3;
                cumulative += weights[3];
                if (weights[3] && cumulative > roll) {
                    updated[3] = agility + 1;
                } else {
                    selected = 4;
                    cumulative += weights[4];
                    if (weights[4] && cumulative > roll)
                        updated[4] = luck + 1;
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
}
