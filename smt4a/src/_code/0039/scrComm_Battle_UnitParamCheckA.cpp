#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);
s32 btlCombatantMatchesCategory(BtlCombatantEntryA *entry, u32 value);

extern u32 g_btlScriptUnit;

/* Script command: asks btlCombatantMatchesCategory about the unit's parameter table and the script's argument. */
s32 scrComm_Battle_UnitParamCheckA(void)
{
    u32 value = scrGetArg(0);
    BtlUnitA *unit = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));

    if (btlCombatantMatchesCategory(unit->entry, value) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
