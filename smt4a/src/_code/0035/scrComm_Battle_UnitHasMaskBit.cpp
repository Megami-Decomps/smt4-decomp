#include "battle/btlUnit.h"
#include "battle/BtlGlobals.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);

extern u32 g_btlScriptUnit;

/* Script command: tests one bit of the unit's mask; the script's argument is the bit number. */
s32 scrComm_Battle_UnitHasMaskBit(void)
{
    u32 bit = scrGetArg(0);
    BtlUnitA *unit = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
    BtlUnitDataA *data = unit->data;

    scrSetResult((data->statusFlags & (1 << (bit & 0xFF))) != 0);
    return 1;
}

} /* extern "C" */
