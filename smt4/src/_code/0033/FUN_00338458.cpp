/* NON_MATCHING: nested combatant-search exit flow and cache identity register allocation differ. */
#include "battle/BattleRosterCache.h"
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"

// Cache identities of active actions in the first unused roster-cache records.
extern "C" void FUN_00338458(void *state)
{
    // This function uses an extended battle-state view not covered by BtlMainState.
    struct RosterStateView {
        u8 prefix[0x1E98];
        BtlActionRecord *actions;
        u8 unk1E9C[0x120];
        BattleRosterCacheEntry *cache;
        BtlEntry *entries;
    };
    struct IdentityView {
        u8 prefix[0x6E];
        s16 selectionIndex;
        u8 unk70[0x68];
        u32 key;
    };
    typedef char RosterStateOffsets[offsetof(RosterStateView, cache) == 0x1FBC && offsetof(RosterStateView, entries) == 0x1FC0 && offsetof(IdentityView, key) == 0xD8 ? 1 : -1];
    RosterStateView *battle = (RosterStateView *)state;
    if (battle->cache == NULL)
        return;
    for (s32 actionIndex = 4; actionIndex < 54; ++actionIndex) {
        BtlActionRecord *action = &battle->actions[actionIndex];
        if ((action->status & 1) && (action->status & 0x80)) {
            BtlEntry *combatant = NULL;
            for (s32 unit = 0; unit < 109 && combatant == NULL; ++unit) {
                for (s32 member = 0; member < 50; ++member) {
                    s16 id = battle->entries[unit].members.ids[member];
                    if (id < 0)
                        break;
                    if (id == action->memberId) {
                        combatant = &battle->entries[unit];
                        break;
                    }
                }
            }
            for (s32 index = 0; index < 50; ++index) {
                BattleRosterCacheEntry *entry = &battle->cache[index];
                if (entry->selectionIndex == -1 && entry->group == -1 && entry->id == 0 && entry->key == 0xFFFFFFFF) {
                    entry->selectionIndex = ((IdentityView *)combatant)->selectionIndex;
                    entry->group = action->memberId;
                    entry->id = combatant->id;
                    entry->key = ((IdentityView *)combatant)->key;
                    break;
                }
            }
        }
    }
}
