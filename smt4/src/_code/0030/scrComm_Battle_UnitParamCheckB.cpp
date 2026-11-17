#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);
s32 btlCommandOwnerHasSlotId(BtlEntry *entry, u32 value);

extern u32 g_btlScriptUnit;

/* Script command: asks btlCommandOwnerHasSlotId about the unit's parameter table and the script's argument. */
s32 scrComm_Battle_UnitParamCheckB(void)
{
    u32 value = scrGetArg(0);
    BtlUnit *unit = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));

    if (btlCommandOwnerHasSlotId(unit->entry, value) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
