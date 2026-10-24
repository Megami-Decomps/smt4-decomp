#include "battle/btlUnit.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);
BtlUnit *btlUnitGet(u32 unit);
s32 btlCommandOwnerHasSlotId(s16 *params, u32 value);

extern u32 g_btlScriptUnit;

/* Script command: asks btlCommandOwnerHasSlotId about the unit's parameter table and the script's argument. */
s32 scrComm_Battle_UnitParamCheckB(void)
{
    u32 value = scrGetArg(0);
    BtlUnit *unit = btlUnitGet(g_btlScriptUnit);

    if (btlCommandOwnerHasSlotId(unit->params, value) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
