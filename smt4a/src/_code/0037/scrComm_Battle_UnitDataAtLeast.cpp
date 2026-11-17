#include "battle/btlUnit.h"
#include "battle/BtlGlobals.h"

extern "C" {

void scrSetResult(s32 result);
s32 scrGetArg(u32 index);

extern u32 g_btlScriptUnit;

/* Script command: true when the script's argument does not exceed a field of the unit's data. */
s32 scrComm_Battle_UnitDataAtLeast(void)
{
    s32 value = scrGetArg(0);
    BtlUnitA *unit = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));

    scrSetResult(value <= (s32)unit->data->unk116);
    return 1;
}

} /* extern "C" */
