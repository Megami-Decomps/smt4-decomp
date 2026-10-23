/* NON_MATCHING: Member-search base registers and history-identity address materialization differ. */
#include "battle/BattleActionHistory.h"
#include "battle/btlAction.h"

static __inline BattleActionHistoryCombatant *findHistoryCombatant(
    BattleActionHistoryCombatant *combatants, s16 member)
{
    for (s32 index = 0; index < 109; ++index) {
        for (s32 slot = 0; slot < 50; ++slot) {
            s16 id = combatants[index].members[slot];
            if (id < 0) {
                break;
            }
            if (id == member) {
                return &combatants[index];
            }
        }
    }
    return NULL;
}

/* Copies completed action values into the matching member/combatant history record. */
extern "C" void FUN_0033a144(BattleActionHistoryState *battle)
{
    if (battle->history == NULL) {
        return;
    }
    for (s32 index = 4; index < 54; ++index) {
        BtlActionRecord *action = &battle->actions[index];
        if ((action->status & 1) != 0 && (action->status & 0x80) != 0) {
            BattleActionHistoryCombatant *combatant = findHistoryCombatant(battle->combatants, action->memberId);
            for (s32 historyIndex = 0; historyIndex < 50; ++historyIndex) {
                BattleActionHistoryEntry *entry = &battle->history[historyIndex];
                if (entry->combatant == combatant->index && entry->member == action->memberId &&
                    entry->group == combatant->group && entry->identity == combatant->identity) {
                    entry->value = action->history.value;
                    break;
                }
            }
        }
    }
}
