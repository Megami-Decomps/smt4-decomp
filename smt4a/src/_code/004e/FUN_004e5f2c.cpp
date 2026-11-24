/* NON_MATCHING: the state-mask test swaps the word-pair registers, and the target HP uses load writeback. */
#include "battle/BtlGlobals.h"
#include "gamedata/GameDataAccess_VariantG.h"

extern "C" {

/* Applies an HP change to the action's target record and reports depletion. */
u8 FUN_004e5f2c(BtlMainStateA **owner, BtlUnitA *unit, s32 index, s32 change)
{
    BtlMainStateA *state = *owner;
    if (state->markerMasks.bits & g_btlAction.targetHpUpdateBlockedMask)
        return 0;
    s32 *hp = &unit->targetStates[index].hp;
    s32 value = *hp + change;
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(state, index);
    if (entry != NULL && entry->minimumHpPercent > 0) {
        s32 minimum = (entry->data.maxHp * entry->minimumHpPercent) / 100;
        minimum = minimum <= 0 ? 1 : minimum;
        if (value < minimum)
            value = minimum;
    }
    if (gameFlagIsSet(0x591) && entry != NULL &&
        (entry->flags & g_btlAction.interaction.requiredMask) == 0 && change < 0)
        return 0;
    if (value >= 0) {
        *hp = value;
        return 0;
    }
    *hp = 0;
    return 1;
}
} /* extern "C" */
