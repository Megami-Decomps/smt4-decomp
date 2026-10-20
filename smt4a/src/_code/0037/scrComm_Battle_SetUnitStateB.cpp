#include "battle/btlUnit.h"

extern "C" {

void btlUnitSetParam(u32 unit, s32 param, s32 value, s32 flag);
BtlUnitA *btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;

/* Script command: stores 0xB in the unit's data and sets unit parameter 0xF to 0. */
s32 scrComm_Battle_SetUnitStateB(void)
{
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);
    BtlUnitDataA *data = unit->data;

    data->unk1BE = 0xB;
    btlUnitSetParam(g_btlScriptUnit, 0xF, 0, 1);
    return 1;
}

} /* extern "C" */
