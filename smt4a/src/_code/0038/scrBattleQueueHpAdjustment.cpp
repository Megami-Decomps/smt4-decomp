#include "util/FUN_003ee0c0.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32);
u32 btlUnitGet(u32);
BtlMainStateA *btlGetMainState(void);
void FUN_004fc094(s32, u32, s32, BattleRosterRecordA *, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32);
void FUN_004fb43c(s32, u32, u32, s32, s32, s32, s32);

/* Queue the script unit's HP adjustment and its accompanying effect. */
u32 scrBattleQueueHpAdjustment(void)
{
    s32 amount = scrGetArg(0);
    u32 unit = btlUnitGet(g_btlScriptUnit);
    FUN_003ee0c0(btlGetMainState());
    s32 maxHp = btlGetMainState()->entries->maxHp;
    s32 hp = btlGetMainState()->entries->hp;
    FUN_004fc094(0, unit, 0, btlGetMainState()->roster, 0, -1, amount, -1,
        hp, maxHp, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
    FUN_004fb43c(0, unit, 0x1000257, 0, 0, 0, 0);
    return 1;
}
}
