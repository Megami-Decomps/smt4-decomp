#include "battle/BtlMainAccess.h"
#include "util/FUN_003ee0c0.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
BtlCombatantEntryA *FUN_003eaf20(void);
s32 jobIsValid(u32 handle);
void FUN_004fc094(s32, ScriptUnit *, s32, BattleRosterRecordA *,
    s32, s32, s32, s32, s32, s32, s32, s32, s32,
    s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void FUN_004fb43c(s32 side, ScriptUnit *source, u32 message, s32, s32, s32, s32);
void FUN_004fbc30(s32 kind, ScriptUnit *source, BattleRosterRecordA *target, s32 flags);

// Damage the current combatant by max-HP percentage; only the auxiliary mode permits defeat.
u32 FUN_0035f700(void)
{
    s32 percentage = scrGetArg(0);
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *entry = FUN_003eaf20();
    s32 damage = entry->maxHp * percentage / 100;
    ScriptUnit *source = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    bool defeated = false;
    if (jobIsValid(battle->auxiliaryTask.job) != 0) {
        if (entry->hp <= damage)
            defeated = true;
    } else if (entry->hp <= damage) {
        damage = entry->hp - 1;
    }
    if (entry->unitIndex >= 0) {
        FUN_003ee0c0(battle);
        FUN_004fc094(0, source, 0, &battle->roster[entry->unitIndex],
            0, damage, -1, -1, entry->hp, entry->maxHp,
            0, 0, defeated, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
        FUN_004fb43c(0, source, 0x01000257, 0, 0, 0, 0);
        if (defeated)
            FUN_004fbc30(25, source, &battle->roster[entry->unitIndex], 0);
    }
    return 1;
}
}
