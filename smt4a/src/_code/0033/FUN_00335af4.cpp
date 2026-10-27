/* NON_MATCHING: entry-address operand registers and damage-call HP copy scheduling differ; remaining instructions match. */
#include "battle/BtlMainAccess.h"
#include "code/Code003e.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
void FUN_004fc094(s32 channel, ScriptUnit *unit, s32 kind, BattleRosterRecordA *record,
                  s32 a5, s32 maximum, s32 source, s32 target, s32 current,
                  s32 previousMaximum, s32 a11, s32 a12, s32 a13, s32 a14,
                  s32 a15, s32 a16, s32 a17, s32 a18, s32 a19, s32 a20,
                  s32 a21, s32 a22, s32 a23, s32 a24, s32 a25, s32 a26);
void FUN_004fb43c(s32 channel, ScriptUnit *unit, u32 resource, s32 a4, s32 a5, s32 a6, s32 a7);
void FUN_004fbc30(s32 channel, ScriptUnit *unit, BattleRosterRecordA *record, s32 flags);

// Queue staggered actions for every active, nonexcluded party combatant.
u32 FUN_00335af4(void)
{
    BtlMainStateA *battle = btlGetMainState();
    FUN_003ee0c0(battle);
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    s32 sequence = 0;
    for (s32 index = 0; index < 4; ++index) {
        BtlCombatantEntryA *entry = &battle->entries[index];
        if ((entry->flags & g_battleMaskPresets.eligibility.active) != 0 &&
            (entry->flags & g_battleMaskPresets.eligibility.excluded) == 0) {
            s32 channel = sequence++ * 20;
            BattleRosterRecordA *record = &battle->roster[index];
            FUN_004fc094(channel, unit, 0, record, 0, entry->maxHp, -1, -1,
                         entry->hp, entry->maxHp, 0, 0, 1, 0, 0, 0, 0, 0,
                         0, 0, 1, 0, 1, 1, 0, 1);
            FUN_004fb43c(channel, unit, 0x10000CD, 1, 0, 0, 0);
            FUN_004fbc30(channel + 25, unit, record, 0);
        }
    }
    return 1;
}
}
