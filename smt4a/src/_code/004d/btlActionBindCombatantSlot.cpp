#include "battle/BattleUnitRecordState.h"
#include "battle/BattleHelpers.h"
#include "battle/BtlGlobals.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

/* Binds the selected unit slot to a combatant and derives its initial battle flags. */
void btlActionBindCombatantSlot(BattleUnitRecordState* state, BtlMainStateA* battle, u32 mode,
                  s32 combatantIndex, s32 scale, u32 option)
{
    state->battle = battle;
    BattleUnitSlotState* slot = &state->slots[state->battle->unitRecord.currentSlot];
    slot->active = 0;
    BtlCombatantEntryA* combatant = &battle->entries[combatantIndex];
    slot->combatant = combatant;
    slot->roster = NULL;
    if (!(slot->combatant->flags & g_btlAction.roster.excluded)) {
        slot->roster = &battle->roster[combatant->ids[0]];
    }
    slot->parameters = &combatant->data;
    slot->combatantIndex = combatantIndex;
    slot->mode = mode;
    slot->scale = scale;
    slot->option = option;
    slot->unk0010 = 0;
    slot->unk0018 = 0;
    slot->flags = 0;
    slot->unk1250 = 0;
    const u64 &battleFlags = state->battle->stateFlags64.bits;
    u32 cameraFlags = 0;
    if (g_btlAction.cameraExcludedMask & battleFlags) {
        cameraFlags = 0x80;
    } else if (g_btlAction.cameraExcludedMaskB & battleFlags) {
        cameraFlags = 0x1000;
    }
    if (cameraFlags != 0) {
        slot->flags = cameraFlags;
    }
    btlUnitClearRecordFields(state, state->battle->unitRecord.currentSlot);
}

} /* extern "C" */
