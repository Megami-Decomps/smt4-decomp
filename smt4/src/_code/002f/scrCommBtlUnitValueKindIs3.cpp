#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u32 g_btlScriptUnit;

/* Script command: pushes whether value `arg` of the script unit has kind 3. */
u32 scrCommBtlUnitValueKindIs3(void)
{
    s32 index = scrGetArg(0);
    BtlUnitData *stats = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit))->data;

    scrSetResult(stats->values[index] >> 10 == 3);
    return 1;
}

} /* extern "C" */
