/* NON_MATCHING: slot address and 64-bit restriction-mask load/register grouping differ. */
#include "battle/BattleUnitRecordState.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

// The tested masks extend beyond BtlActionGlobals' published prefix.
struct BattleUnitInitializationMasks {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u64 noRoster;
    /* 0x50 */ u8 unk50[0x90];
    /* 0xE0 */ u64 specialState;
    /* 0xE8 */ u8 unkE8[8];
    /* 0xF0 */ u64 alternateState;
};

extern "C" {
extern BattleUnitInitializationMasks g_btlAction;
void btlUnitClearRecordFields(BattleUnitRecordState* state, u32 slot);

// Bind the selected unit slot to a combatant and derive its initial battle flags.
__softfp void FUN_004dcb40(BattleUnitRecordState* state, BtlMainStateA* battle, u32 mode,
                         s32 combatantIndex, f32 scale, u32 option)
{
    state->battle = battle;
    BattleUnitSlotState* slot = &state->slots[battle->unitRecord.currentSlot];
    slot->active = 0;
    BtlCombatantEntryA* combatant = &battle->entries[combatantIndex];
    slot->combatant = combatant;
    slot->roster = NULL;
    if (!(g_btlAction.noRoster & combatant->flags))
        slot->roster = &battle->roster[combatant->unitIndex];
    slot->parameters = &combatant->unitParameters.parameterBlock;
    slot->combatantIndex = combatantIndex;
    slot->mode = mode;
    slot->scale = scale;
    slot->option = option;
    slot->unk0010 = 0;
    slot->unk0018 = 0;
    slot->flags = 0;
    slot->unk1250 = 0;
    u64 flags = state->battle->stateFlags64.bits;
    if (flags & g_btlAction.specialState)
        slot->flags = 0x80;
    else if (flags & g_btlAction.alternateState)
        slot->flags = 0x1000;
    btlUnitClearRecordFields(state, state->battle->unitRecord.currentSlot);
}
}
