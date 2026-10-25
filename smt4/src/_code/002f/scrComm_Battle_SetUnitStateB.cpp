#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

s32 btlUnitSetParam(u32 unit, s32 param, s32 value);

extern u32 g_btlScriptUnit;

/* Script command: stores 0xB in the unit's data and sets unit parameter 0xF to 0. */
s32 scrComm_Battle_SetUnitStateB(void)
{
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    BtlUnitData *data = unit->data;

    data->unk14C = 0xB;
    btlUnitSetParam(g_btlScriptUnit, 0xF, 0);
    return 1;
}

} /* extern "C" */
