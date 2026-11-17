#include "battle/BtlMainAccess.h"
#include "code/Code003e.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
void FUN_004fc094(s32, BtlUnitA *, s32, BattleRosterRecordA *,
                  u32, u32, u32, u32, u32, u32, u32, u32, u32,
                  u32, u32, u32, u32, u32, u32, u32, u32, u32,
                  u32, u32, u32, u32);
void btlQueueActionMessage(s32, BtlUnitA *, u32, u32, u32, u32, u32);

/* Start the script-selected skill's roster effect on the current battle unit. */
u32 FUN_0038d8a0(void)
{
    u32 skillId = scrGetArg(0);
    u32 effectValue = scrGetArg(1);
    BtlUnitA *unit = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
    BtlCombatantEntryA *combatant = btlMainFindEntryByListedId(btlGetMainState(), skillId);
    btlSlotManagerResetStates(btlGetMainState());
    BtlMainStateA *battle = btlGetMainState();
    BattleRosterRecordA *record = &battle->roster[combatant->unitIndex];
    FUN_004fc094(0, unit, 0, record,
        0, effectValue, 0xFFFFFFFF, 0xFFFFFFFF, combatant->hp, combatant->maxHp,
        0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1);
    btlQueueActionMessage(0, unit, 0x01000223, 0, 0, 0, 0);
    return 1;
}
}
