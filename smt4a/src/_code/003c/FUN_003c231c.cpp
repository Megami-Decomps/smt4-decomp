#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "code/Code003e.h"
#include "battle/BtlGlobals.h"

extern "C" {
u32 scrGetArg(u32);
void FUN_004fc094(s32, u32, s32, BattleRosterRecordA *, s32, u32, s32, s32,
                 s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                 s32, s32, s32, s32, s32, s32);
extern u32 g_btlScriptUnit;
}

extern "C" u32 FUN_003c231c(void)
{
    u32 targetId = scrGetArg(0);
    u32 amount = scrGetArg(1);
    u32 unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    BtlCombatantEntryA *target = btlMainFindEntryByListedId(btlGetMainState(), targetId);
    btlSlotManagerResetStates(btlGetMainState());
    BattleRosterRecordA *roster = &btlGetMainState()->roster[target->unitIndex];
    FUN_004fc094(0, unit, 0, roster, 0, amount, -1, -1, target->hp, target->maxHp,
                 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1);
    return 1;
}
