#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlScript.h"
#include "battle/BattleUnitSlot.h"

struct ScriptUnit;
extern "C" {
s32 scrGetArg(u32 index);
BtlMainState *btlGetMainState();
void FUN_00250720(BtlMainState *battle);
void FUN_002551ac(s32 actor, ScriptUnit *unit, BtlActionRecord *action, s32 mode,
    s32 damage, s32 first, s32 second, s32 hp, s32 maxHp, s32, s32, s32, s32,
    s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void FUN_002505c0(s32 actor, ScriptUnit *unit, void *key, s32 mode, s32 duplicates,
    u32 parameter, s32 first);

// Queue damage to the first combatant while keeping at least one HP remaining.
u32 btlScriptDamageFirstCombatantNonlethally()
{
    s32 damage = scrGetArg(0);
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    FUN_00250720(btlGetMainState());
    if (btlGetMainState()->entries[0].value <= damage)
        damage = btlGetMainState()->entries[0].value - 1;
    s32 maxHp = btlGetMainState()->entries[0].maxHp;
    s32 hp = btlGetMainState()->entries[0].value;
    FUN_002551ac(0, unit, btlGetMainState()->actions.records, 0, damage, -1, -1,
        hp, maxHp, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
    FUN_002505c0(0, unit, reinterpret_cast<void *>(0x1000185), 0, 0, 0, 0);
    return 1;
}
}
