#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
s32 scrGetArg(s32 arg);
BtlUnitA *btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;

/* Script command: compares the unit's parameter for the given slot with a second argument. */
s32 scrComm_Battle_UnitSlotParamEquals(void)
{
    s32 slot = scrGetArg(0);
    s32 index = 0;
    s32 value;
    BtlUnitA *unit;
    s32 *slotParams;

    if (slot == 0) {
        index = 7;
    } else if (slot == 1) {
        index = 8;
    } else if (slot == 2) {
        index = 10;
    } else if (slot == 3) {
        index = 0xB;
    }
    value = scrGetArg(1);
    unit = btlUnitGet(g_btlScriptUnit);
    slotParams = unit->params + index;
    scrSetResult(slotParams[0x1D] == value);
    return 1;
}

} /* extern "C" */
