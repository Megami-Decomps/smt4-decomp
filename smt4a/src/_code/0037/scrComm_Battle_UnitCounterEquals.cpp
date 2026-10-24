#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
s32 scrGetArg(u32 index);
BtlUnitA *btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;

/* Script command: compares the unit's counter plus one with the script's argument. */
s32 scrComm_Battle_UnitCounterEquals(void)
{
    s32 value = scrGetArg(0);
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);

    if (unit->data->unk228 + 1 == value) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
