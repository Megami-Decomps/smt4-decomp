#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
s32 btlCombatantHasSkillAction(BtlCombatantEntryA *, u32);
void scrSetResult(s32);

// Test the requested action against the script-selected unit's parameter block.
u32 scrCommTestUnitAction(void)
{
    u32 action = scrGetArg(0);
    BtlUnitA *unit = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
    if (btlCombatantHasSkillAction(unit->entry, action) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
