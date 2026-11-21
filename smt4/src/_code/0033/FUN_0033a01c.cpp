/* NON_MATCHING: same instructions as retail; the callee-saved registers of the action index, action,
 * entry table and outer search index are permuted. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BattleActionHistory.h"
#include "battle/btlAction.h"

/* The combatant whose member list holds `memberId`, or NULL. */
static __inline BtlEntry *findActionCombatant(BtlMainState *state, s16 memberId)
{
    BtlEntry *found = NULL;
    for (s32 index = 0; index < 109; ++index) {
        for (s32 member = 0; member < 50; ++member) {
            s16 id = state->entries[index].ids[member];
            if (id < 0)
                break;
            if (id == memberId) {
                found = &state->entries[index];
                return found;
            }
        }
    }
    return found;
}

// Restore matching active action values from the previous combatant history.
extern "C" void FUN_0033a01c(BtlMainState* state)
{
    if (state->history != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BtlActionRecord* action = &state->actions[index];
            if ((action->status & 1) && (action->status & 0x80)) {
                BtlEntry* combatant = findActionCombatant(state, action->memberId);
                const BtlUnitData *data = &combatant->data;
                for (s32 entry = 0; entry < 50; ++entry) {
                    BattleActionHistoryEntry* history = &state->history[entry];
                    if (history->combatant == combatant->selectionIndex && history->member == action->memberId &&
                        history->group == data->id && history->identity == data->parts[0]) {
                        action->restoredValue = history->value;
                        action->history.value = history->value;
                        break;
                    }
                }
            }
        }
    }
}
