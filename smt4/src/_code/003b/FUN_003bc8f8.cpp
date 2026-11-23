/* NON_MATCHING: the boon switch and its stores match (written as in the Apocalypse twin unitSetGrowthRankAndRaiseStats, which is IDENTICAL); only the five stat updates' temporaries differ (retail ip/r2/lr/r3, ours ip/lr/r2/r3). */
#include "gamedata/UnitStats.h"

extern "C" {


extern void unitRecalculateEffectiveStats(StatBlock *unit);

/* Set the unit's boon and add its matching one-to-three-point base-stat bonus. */
void FUN_003bc8f8(StatBlock *unit, u32 mode)
{
    u16 step = 0;

    unit->growth.initializationKind = mode;
    switch ((u8)mode) {
    case 1:
        step = 1;
        break;
    case 2:
        step = 2;
        break;
    case 3:
        step = 3;
        break;
    }
    for (s32 i = 0; i < 5; ++i)
        unit->summary.stats[i] += step;
    unitRecalculateEffectiveStats(unit);
}

}
