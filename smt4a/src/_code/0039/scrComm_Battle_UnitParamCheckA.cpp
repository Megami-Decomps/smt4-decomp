#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);
BtlUnitA *btlUnitGet(u32 unit);
s32 FUN_003020fc(s32 *params, u32 value);

extern u32 g_btlScriptUnit;

/* Script command: asks FUN_003020fc about the unit's parameter table and the script's argument. */
s32 scrComm_Battle_UnitParamCheckA(void)
{
    u32 value = scrGetArg(0);
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);

    if (FUN_003020fc(unit->params, value) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
