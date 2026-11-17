#include "battle/btlUnit.h"
#include "battle/BtlGlobals.h"

extern "C" {

void scrSetResult(s32 result);
s32 scrGetArg(s32 arg);

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
    unit = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
    /* the entry's word at 0x74 + index * 4, addressed as retail does: the word pointer moved by index first */
    slotParams = reinterpret_cast<s32 *>(unit->entry) + index;
    scrSetResult(slotParams[0x1D] == value);
    return 1;
}

} /* extern "C" */
