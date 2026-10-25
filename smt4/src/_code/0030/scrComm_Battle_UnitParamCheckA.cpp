#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);
s32 btlEntryHasActionSkillCategory(s16 *params, u32 value);

extern u32 g_btlScriptUnit;

/* Script command: asks btlEntryHasActionSkillCategory about the unit's parameter table and the script's argument. */
s32 scrComm_Battle_UnitParamCheckA(void)
{
    u32 value = scrGetArg(0);
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

    if (btlEntryHasActionSkillCategory(unit->params, value) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
