/* NON_MATCHING: member-search result lifetime and combatant key addressing use different registers. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BattleActionHistory.h"
#include "battle/btlAction.h"

static inline BtlEntry* findActionCombatant(BtlMainState* state,
                                                                s16 memberId)
{
    for (s32 index = 0; index < 109; ++index) {
        for (s32 member = 0; member < 50; ++member) {
            s16 id = state->entries[index].members.ids[member];
            if (id < 0)
                break;
            if (id == memberId)
                return &state->entries[index];
        }
    }
    return NULL;
}

// Restore matching active action values from the previous combatant history.
extern "C" void FUN_0033a01c(BtlMainState* state)
{
    if (state->history != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BtlActionRecord* action = &state->actions[index];
            if ((action->status & 1) && (action->status & 0x80)) {
                BtlEntry* combatant = findActionCombatant(state, action->memberId);
                for (s32 entry = 0; entry < 50; ++entry) {
                    BattleActionHistoryEntry* history = &state->history[entry];
                    if (history->combatant == combatant->selectionIndex && history->member == action->memberId &&
                        history->group == combatant->id && history->identity == combatant->identity) {
                        action->restoredValue = history->value;
                        action->history.value = history->value;
                        break;
                    }
                }
            }
        }
    }
}
