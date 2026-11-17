#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u32 g_btlScriptUnit;

static __inline s32 percentOf(s32 value, s32 total)
{
    return value * 100 / total;
}

/* Script command: pushes whether the script unit's HP percentage is at most argument 0; returns 1. */
s32 scrCommBtlUnitHpPercentWithin(void)
{
    s32 limit = scrGetArg(0);
    BtlUnitData *stats = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit))->data;

    scrSetResult(percentOf(stats->mp, stats->maxMp) <= limit);
    return 1;
}

} /* extern "C" */
