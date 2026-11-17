#include "battle/BtlMainAccess.h"
#include "code/Code003e.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32);
void FUN_004fc094(s32, u32, s32, BattleRosterRecordA *, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32);
void btlQueueActionMessage(s32, u32, u32, s32, s32, s32, s32);

/* Queue the script unit's HP adjustment and its accompanying effect. */
u32 scrBattleQueueHpAdjustment(void)
{
    s32 amount = scrGetArg(0);
    u32 unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    btlSlotManagerResetStates(btlGetMainState());
    s32 maxHp = btlGetMainState()->entries->maxHp;
    s32 hp = btlGetMainState()->entries->hp;
    FUN_004fc094(0, unit, 0, btlGetMainState()->roster, 0, -1, amount, -1,
        hp, maxHp, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
    btlQueueActionMessage(0, unit, 0x1000257, 0, 0, 0, 0);
    return 1;
}
}
