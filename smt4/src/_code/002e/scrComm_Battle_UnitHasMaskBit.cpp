#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(void);
BtlUnit *btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;

/* Script command: tests one bit of the unit's mask; the script's argument is the bit number. */
s32 scrComm_Battle_UnitHasMaskBit(void)
{
    u32 bit = scrGetArg();
    BtlUnit *unit = btlUnitGet(g_btlScriptUnit);
    u32 mask = bit & 0xFF;

    scrSetResult((unit->data->unk0FA & (1 << mask)) != 0);
    return 1;
}

} /* extern "C" */
