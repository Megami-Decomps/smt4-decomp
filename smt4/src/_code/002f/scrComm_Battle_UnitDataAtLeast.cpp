#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void scrSetResult(s32 result);
s32 scrGetArg(u32 index);

extern u32 g_btlScriptUnit;

/* Script command: true when the script's argument does not exceed a field of the unit's data. */
s32 scrComm_Battle_UnitDataAtLeast(void)
{
    s32 value = scrGetArg(0);
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));

    scrSetResult(value <= (s32)unit->data->unk100);
    return 1;
}

} /* extern "C" */
