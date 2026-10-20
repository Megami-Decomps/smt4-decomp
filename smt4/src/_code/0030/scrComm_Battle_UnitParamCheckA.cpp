#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(void);
BtlUnit *btlUnitGet(u32 unit);
s32 FUN_00245854(s16 *params, u32 value);

extern u32 g_btlScriptUnit;

/* Script command: asks FUN_00245854 about the unit's parameter table and the script's argument. */
s32 scrComm_Battle_UnitParamCheckA(void)
{
    u32 value = scrGetArg();
    BtlUnit *unit = btlUnitGet(g_btlScriptUnit);

    if (FUN_00245854(unit->params, value) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
