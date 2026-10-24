#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
s32 scrGetArg(u32 index);
BtlUnitA *btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;

/* Script command: true when the unit's parameter for the given slot is at least 1. */
s32 scrComm_Battle_UnitSlotParamPositive(void)
{
    s32 slot = scrGetArg(0);
    s32 index = 0;

    if (slot == 0) {
        index = 7;
    } else if (slot == 1) {
        index = 8;
    } else if (slot == 2) {
        index = 10;
    } else if (slot == 3) {
        index = 0xB;
    }
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);
    s32 *slotParams = unit->params + index;

    scrSetResult(slotParams[0x1D] >= 1);
    return 1;
}

} /* extern "C" */
