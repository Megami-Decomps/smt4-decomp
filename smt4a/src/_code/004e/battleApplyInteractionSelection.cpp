#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BattleInteractionSelections.h"
#include "battle/BattleRosterCache.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
extern BtlActionGlobals g_btlAction;
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 unit);
BattleCombatantStatusKey *FUN_001568f8(BtlMainStateA *battle, s32 unit);
void FUN_004c3db4(BtlCombatantEntryA *combatant);
void btlIncrementSaturatingSlotCounter(BtlMainStateA *battle, s32 slot);
s32 btlScriptUnitHasFlags(BtlMainStateA *battle);
void FUN_004fbc30(u32 value, BattleInteractionSelections *selections, BattleRosterRecordA *roster, u32 flags);

void battleApplyInteractionSelection(BtlMainGlobalsA *owner, BattleInteractionSelections *selections,
                  s32 unit, u32 unused, s32 alternate)
{
    BtlCombatantEntryA *combatant = FUN_003f0e20(owner->state, unit);
    if (combatant && !(combatant->flags & g_btlAction.interaction.excludedMask)) {
        u32 value = selections->entries[unit].value;
        if (combatant->flags & g_btlAction.interaction.requiredMask) {
            BattleCombatantStatusKey *slot = FUN_001568f8(owner->state, unit);
            if (slot) {
                FUN_004c3db4(combatant);
                btlIncrementSaturatingSlotCounter(owner->state, static_cast<s16>(slot->id));
            }
        }
        if (btlScriptUnitHasFlags(owner->state)) {
            value = alternate + 15;
        }
        FUN_004fbc30(value, selections, &owner->state->roster[unit], 0);
    }
}
}
