#include "code/Code003e.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

struct BtlUnitA;
extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(s32 index);
u32 btlAdjustPropertyAndQueueAction(s32 mode, BtlUnitA *actor, s32 option, BattleRosterRecordA *target,
                 s32 value5, s32 damage, s32 value7, u32 value8,
                 u32 hp, u32 maxHp, s32 value11, u32 value12,
                 s32 value13, s32 value14, s32 value15, s32 value16,
                 s32 value17, s32 value18, s32 value19, s32 value20,
                 s32 value21, s16 value22, s32 value23, s32 value24,
                 s32 value25, s32 value26);

// Queue nonlethal HP damage (percent of max HP, percent of HP, or a fixed amount) for each eligible party member.
u32 FUN_003c23f8(void)
{
    s32 amount = scrGetArg(0);
    s32 mode = scrGetArg(1);
    BtlUnitA *actor = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
    for (s32 slot = 0; slot < 4; ++slot) {
        BtlMainStateA *battle = btlGetMainState();
        BtlCombatantEntryA *entry = &battle->entries[slot];
        if ((entry->flags & g_battleMaskPresets.eligibility.active) &&
            !(entry->flags & g_battleMaskPresets.eligibility.excluded) && entry->ids[0] >= 0) {
            s32 damage = 0;
            switch (mode) {
            case 0: damage = entry->data.maxHp * amount / 100; break;
            case 1: damage = entry->data.hp * amount / 100; break;
            case 2: damage = amount; break;
            }
            if (damage >= entry->data.hp)
                damage = entry->data.hp - 1;
            btlSlotManagerResetStates(btlGetMainState());
            battle = btlGetMainState();
            BattleRosterRecordA *target = &battle->roster[entry->ids[0]];
            btlAdjustPropertyAndQueueAction(0, actor, 0, target, 0, damage, -1, ~0u,
                         entry->data.hp, entry->data.maxHp, 0, 0, 0, 0, 1, 0,
                         slot << 3, slot << 3, slot << 3, slot << 3,
                         1, 0, 1, 1, 0, 1);
        }
    }
    return 1;
}
}
