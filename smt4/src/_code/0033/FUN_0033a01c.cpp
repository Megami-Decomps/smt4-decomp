/* NON_MATCHING: member-search result lifetime and combatant key addressing use different registers. */
#include "battle/BattleActionHistory.h"
#include "battle/btlAction.h"

static inline BattleActionHistoryCombatant* findActionCombatant(BattleActionHistoryState* state,
                                                                s16 memberId)
{
    for (s32 index = 0; index < 109; ++index) {
        for (s32 member = 0; member < 50; ++member) {
            s16 id = state->combatants[index].members[member];
            if (id < 0)
                break;
            if (id == memberId)
                return &state->combatants[index];
        }
    }
    return NULL;
}

// Restore matching active action values from the previous combatant history.
extern "C" void FUN_0033a01c(BattleActionHistoryState* state)
{
    if (state->history != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BtlActionRecord* action = &state->actions[index];
            if ((action->status & 1) && (action->status & 0x80)) {
                BattleActionHistoryCombatant* combatant = findActionCombatant(state, action->memberId);
                for (s32 entry = 0; entry < 50; ++entry) {
                    BattleActionHistoryEntry* history = &state->history[entry];
                    if (history->combatant == combatant->index && history->member == action->memberId &&
                        history->group == combatant->group && history->identity == combatant->identity) {
                        action->restoredValue = history->value;
                        action->history.value = history->value;
                        break;
                    }
                }
            }
        }
    }
}
