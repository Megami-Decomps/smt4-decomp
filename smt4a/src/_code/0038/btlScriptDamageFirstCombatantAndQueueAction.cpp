#include "battle/btlMain.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
BtlMainStateA *btlGetMainState();
void FUN_003ee0c0(BtlMainStateA *state);
u32 FUN_004fc094(s32 mode, ScriptUnit *unit, s32 kind, BattleRosterRecordA *roster,
    s32 first, s32 damage, s32 target, u32 mask, u32 hp, u32 maxHp,
    s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h,
    s32 i, s32 j, s32 k, s16 l, s32 m, s32 n, s32 o, s32 p);
void FUN_004fb43c(s32 actor, ScriptUnit *unit, void *key, s32 mode, s32 duplicates,
    u32 parameter, s32 first);

// Apply nonlethal damage and queue the accompanying scalar-action key.
u32 btlScriptDamageFirstCombatantAndQueueAction()
{
    s32 damage = scrGetArg(0);
    ScriptUnit *unit = btlUnitGet(g_btlScriptUnit);
    FUN_003ee0c0(btlGetMainState());
    if (btlGetMainState()->entries[0].hp <= damage)
        damage = btlGetMainState()->entries[0].hp - 1;
    u32 maxHp = btlGetMainState()->entries[0].maxHp;
    u32 hp = btlGetMainState()->entries[0].hp;
    BattleRosterRecordA *roster = btlGetMainState()->roster;
    FUN_004fc094(0, unit, 0, roster, 0, damage, -1, -1, hp, maxHp,
                 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
    FUN_004fb43c(0, unit, reinterpret_cast<void *>(0x1000223), 0, 0, 0, 0);
    return 1;
}
}
