/* NON_MATCHING: identical except r4/r5 swapped (field-address pointer vs scaled index) */
#include "battle/BattleActionHistory.h"
#include "battle/btlAction.h"

extern "C" {

/* Clears the 0x4000 status bit of every action record whose combatant is live. */
void FUN_00339254(BattleActionHistoryState *state)
{
    for (s32 i = 0; i < 109; i++) {
        s32 combatant = state->actions[i].participant.combatantIndex;

        if (combatant >= 0 && (state->combatants[combatant].flags & 0x10) != 0) {
            state->actions[i].status &= ~0x4000;
        }
    }
}

} /* extern "C" */
