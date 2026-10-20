#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
s32 scrGetArg(void);
BtlUnitA *btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;

/* Script command: true when the unit's entry for the given slot has no high bits or they equal 2. */
s32 scrComm_Battle_UnitSlotEntryOk(void)
{
    s32 slot = scrGetArg();
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);
    BtlUnitDataA *data = unit->data;
    u16 entry = ((u16 *)data + slot)[BTL_UNIT_SLOT_TABLE];

    if ((entry & 0xFC00) == 0 || (entry >> 10) == 2) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
