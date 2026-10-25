/* NON_MATCHING: stat-update scratch registers differ; the fields are the unit's five base attributes and boon selector, not window edges. */
#include "gamedata/UnitStats.h"

extern "C" {


extern void unitRecalculateEffectiveStats(StatBlock *unit);

/* Set the unit's boon and add its matching one-to-three-point base-stat bonus. */
void FUN_003bc8f8(StatBlock *unit, u32 modeArg)
{
    u8 mode = modeArg;
    u16 step = 0;

    unit->encounter.initialization.initializationKind = mode;
    if (mode == 1) {
        step = 1;
    } else if (mode == 2) {
        step = 2;
    } else if (mode == 3) {
        step = 3;
    }
    for (s32 i = 0; i < 5; ++i)
        unit->summary.stats[i] += step;
    unitRecalculateEffectiveStats(unit);
}

}
