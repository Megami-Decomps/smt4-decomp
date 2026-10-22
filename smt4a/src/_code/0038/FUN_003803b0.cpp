/* NON_MATCHING: retail loads the 0x3BE0 effect constant into r5 before the first btlGetMainState call (one more saved register, 48-byte frame); call arguments match. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

extern u32 g_btlScriptUnit;

s32 scrGetArg(u32 index);
u32 btlUnitGet(u32 unit);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 index);
void FUN_004fb798(s32 a, u32 unit, s32 b, BattleRosterRecordA *target, s32 c, s32 damage, s32 d, s32 e,
                  s32 effect, s32 f, s32 g, s32 kind, s32 h, s32 i, s32 j);
void FUN_004fb43c(s32 a, u32 unit, u32 message, s32 b, s32 c, s32 d, s32 e);

/* Script command: damage target argument 0 by argument 1 percent of its max HP (at least 1). */
u32 FUN_003803b0(void)
{
    s32 target = scrGetArg(0);
    s32 percent = scrGetArg(1);
    u32 unit = btlUnitGet(g_btlScriptUnit);
    s32 damage = FUN_003f0e20(btlGetMainState(), target)->maxHp * percent / 100;

    if (damage == 0) {
        damage = -1;
    }
    FUN_004fb798(0, unit, 0, &btlGetMainState()->roster[target], 0, damage, -1, -1, 0x3be0, 0, 0, 9, 0, 0, 1);
    FUN_004fb43c(0, unit, 0x1000263, 0, 0, 0, 0);
    return 1;
}

} /* extern "C" */
