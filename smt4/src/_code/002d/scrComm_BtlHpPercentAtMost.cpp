#include "battle/BattleUnitSlot.h"

extern "C" {

extern u32 g_btlScriptUnit;

static __inline s32 percentOf(s32 value, s32 total)
{
    return value * 100 / total;
}

extern void scrSetResult(s32 value);
extern s32 scrGetArg(u32 index);

/* Script command: pushes whether the script unit's HP percentage is at most argument 0; returns 1. */
u32 scrComm_BtlHpPercentAtMost(void)
{
    s32 percent = scrGetArg(0);
    BtlUnitData *stats = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit))->data;

    scrSetResult(percentOf(stats->hp, stats->maxHp) <= percent);
    return 1;
}

} /* extern "C" */
