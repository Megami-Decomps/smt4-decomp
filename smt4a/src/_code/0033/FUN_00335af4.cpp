/* NON_MATCHING: the entries base and scaled index are allocated to r1 and r0, respectively; retail uses r0 and r1. */
#include "battle/BtlMainAccess.h"
#include "code/Code003e.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
void btlAdjustPropertyAndQueueAction(s32 channel, ScriptUnit *unit, s32 kind, BattleRosterRecordA *record,
                  s32 a5, s32 maximum, s32 source, s32 target, s32 current,
                  s32 previousMaximum, s32 a11, s32 a12, s32 a13, s32 a14,
                  s32 a15, s32 a16, s32 a17, s32 a18, s32 a19, s32 a20,
                  s32 a21, s32 a22, s32 a23, s32 a24, s32 a25, s32 a26);
void btlQueueActionMessage(s32 channel, ScriptUnit *unit, u32 resource, s32 a4, s32 a5, s32 a6, s32 a7);
void btlQueueKeyedScalarReflectAction(s32 channel, ScriptUnit *unit, BattleRosterRecordA *record, s32 flags);

// Queue staggered actions for every active, nonexcluded party combatant.
u32 FUN_00335af4(void)
{
    BtlMainStateA *battle = btlGetMainState();
    btlSlotManagerResetStates(battle);
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    s32 sequence = 0;
    for (s32 index = 0; index < 4; ++index) {
        BtlCombatantEntryA *entry = &battle->entries[index];
        if ((entry->flags & g_battleMaskPresets.eligibility.active) != 0 &&
            (entry->flags & g_battleMaskPresets.eligibility.excluded) == 0) {
            s32 channel = sequence * 20;
            BattleRosterRecordA *record = &battle->roster[index];
            btlAdjustPropertyAndQueueAction(channel, unit, 0, record, 0, entry->data.maxHp, -1, -1,
                         entry->data.hp, entry->data.maxHp, 0, 0, 1, 0, 0, 0, 0, 0,
                         0, 0, 1, 0, 1, 1, 0, 1);
            btlQueueActionMessage(channel, unit, 0x10000CD, 1, 0, 0, 0);
            btlQueueKeyedScalarReflectAction(channel + 25, unit, record, 0);
            ++sequence;
        }
    }
    return 1;
}
}
