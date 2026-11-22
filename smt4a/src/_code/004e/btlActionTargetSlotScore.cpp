#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUnitActions.h"

extern "C" {

/* Whether the unit's tracked HP of the combatant at listedId (or of the one it redirects to) is 0 while that
 * combatant is still targetable. */
u32 btlActionTargetSlotScore(BtlMainGlobalsA *owner, BtlUnitA *unit, s32 listedId)
{
    s32 index = listedId;
    BtlCombatantEntryA *target = btlMainFindEntryByListedId(owner->state, listedId);
    if (target != NULL) {
        index = target->selectionIndex;
    }
    if (unit->targetStates[index].hp == 0) {
        if ((owner->state->entries[index].flags & g_btlAction.targetableMask) != 0 &&
            (owner->state->entries[index].flags & g_btlAction.untargetableMask) == 0 &&
            owner->state->entries[index].targetDelay <= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
