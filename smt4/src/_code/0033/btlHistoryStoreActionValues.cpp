/* NON_MATCHING: same instructions as retail; only the register allocation differs (action index, ids offset and the
 * search index take other registers; 58 lines). */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BattleActionHistory.h"
#include "battle/btlAction.h"

/* The combatant whose member list holds `memberId`, or NULL (FUN_00338458 searches the same way). */
static __inline BtlEntry *findHistoryCombatant(BtlMainState *battle, s16 memberId)
{
    BtlEntry *found = NULL;
    for (s32 unit = 0; unit < 109; ++unit) {
        for (s32 member = 0; member < 50; ++member) {
            s16 id = battle->entries[unit].ids[member];
            if (id < 0)
                break;
            if (id == memberId) {
                found = &battle->entries[unit];
                return found;
            }
        }
    }
    return found;
}

/* Copies completed action values into the matching member/combatant history record. */
extern "C" void btlHistoryStoreActionValues(BtlMainState *battle)
{
    if (battle->history == NULL)
        return;
    for (s32 actionIndex = 4; actionIndex < 54; ++actionIndex) {
        BtlActionRecord *actions = battle->actions;
        BtlActionRecord *action = &actions[actionIndex];
        if ((action->status & 1) && (action->status & 0x80)) {
            BtlEntry *combatant = findHistoryCombatant(battle, action->memberId);
            const BtlUnitData *identity = &combatant->data;
            for (s32 index = 0; index < 50; ++index) {
                BattleActionHistoryEntry *entry = &battle->history[index];
                if (entry->combatant == combatant->selectionIndex && entry->member == action->memberId &&
                    entry->group == identity->id && entry->identity == identity->parts[0]) {
                    entry->value = action->history.value;
                    break;
                }
            }
        }
    }
}
