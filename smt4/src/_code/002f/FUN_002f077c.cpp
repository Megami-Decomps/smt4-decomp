#include "battle/btlScript.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

extern void scrSetResult(s32 value);
extern s32 scrGetArg(u32 index);

/* Script command: pushes whether bits 10.. of the script unit's u16 entry (argument 0) equal 2; returns 1. */
u32 FUN_002f077c(void)
{
    s32 index = scrGetArg(0);

    BtlUnitData *stats = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit))->data;

    scrSetResult(stats->values[index] >> 10 == 2);
    return 1;
}

} /* extern "C" */
