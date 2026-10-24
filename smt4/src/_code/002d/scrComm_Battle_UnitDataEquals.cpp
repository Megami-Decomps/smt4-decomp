#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);
BtlUnit *btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;

/* Script command: compares a field of the unit's data with the script's argument. */
s32 scrComm_Battle_UnitDataEquals(void)
{
    u32 value = scrGetArg(0);
    BtlUnit *unit = btlUnitGet(g_btlScriptUnit);

    scrSetResult(unit->data->unk02 == value);
    return 1;
}

} /* extern "C" */
