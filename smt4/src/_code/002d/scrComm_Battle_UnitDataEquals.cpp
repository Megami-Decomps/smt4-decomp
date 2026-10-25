#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);

extern u32 g_btlScriptUnit;

/* Script command: compares a field of the unit's data with the script's argument. */
s32 scrComm_Battle_UnitDataEquals(void)
{
    u32 value = scrGetArg(0);
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

    scrSetResult(unit->data->unk02 == value);
    return 1;
}

} /* extern "C" */
