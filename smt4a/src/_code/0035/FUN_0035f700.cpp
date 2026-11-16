#include "battle/BtlMainAccess.h"
#include "code/Code003e.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(void);
s32 jobIsValid(u32 handle);
void FUN_004fc094(s32, ScriptUnit *, s32, BattleRosterRecordA *,
    s32, s32, s32, s32, s32, s32, s32, s32, s32,
    s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void btlQueueActionMessage(s32 side, ScriptUnit *source, u32 message, s32, s32, s32, s32);
void btlQueueKeyedScalarReflectAction(s32 kind, ScriptUnit *source, BattleRosterRecordA *target, s32 flags);

// Damage the current combatant by max-HP percentage; only the auxiliary mode permits defeat.
u32 FUN_0035f700(void)
{
    s32 percentage = scrGetArg(0);
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask();
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
        btlQueueActionMessage(0, source, 0x01000257, 0, 0, 0, 0);
        if (defeated)
            btlQueueKeyedScalarReflectAction(25, source, &battle->roster[entry->unitIndex], 0);
    }
    return 1;
}
}
