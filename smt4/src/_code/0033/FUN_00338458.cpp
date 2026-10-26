#include "battle/BattleRosterCache.h"
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"

// This function uses an extended battle-state view not covered by BtlMainState.
struct RosterStateView {
    u8 prefix[0x1E98];
    BtlActionRecord *actions;
    u8 unk1E9C[0x120];
    BattleRosterCacheEntry *cache;
    BtlEntry *entries;
};
/* The identity block of a combatant (the id scripts use and the identity key). */
struct CombatantIdentity {
    u8 unk00[2];
    u16 id;
    u8 unk04[8];
    u32 key;
};
struct IdentityView {
    u8 prefix[0x6E];
    s16 selectionIndex;
    u8 unk70[0x5C];
    CombatantIdentity identity;
};
typedef char RosterStateOffsets[offsetof(RosterStateView, cache) == 0x1FBC && offsetof(RosterStateView, entries) == 0x1FC0 &&
    offsetof(IdentityView, identity) == 0xCC && offsetof(IdentityView, identity.id) == 0xCE && offsetof(IdentityView, identity.key) == 0xD8 ? 1 : -1];

/* The combatant whose member list holds `memberId`, or NULL. */
static __inline BtlEntry *findCombatantByMember(RosterStateView *battle, s16 memberId)
{
    BtlEntry *found = NULL;
    for (s32 unit = 0; unit < 109; ++unit) {
        for (s32 member = 0; member < 50; ++member) {
            s16 id = battle->entries[unit].members.ids[member];
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

// Cache identities of active actions in the first unused roster-cache records.
extern "C" void FUN_00338458(void *state)
{
    RosterStateView *battle = (RosterStateView *)state;
    if (battle->cache == NULL)
        return;
    for (s32 actionIndex = 4; actionIndex < 54; ++actionIndex) {
        BtlActionRecord *action = &battle->actions[actionIndex];
        if ((action->status & 1) && (action->status & 0x80)) {
            IdentityView *combatant = (IdentityView *)findCombatantByMember(battle, action->memberId);
            const CombatantIdentity *identity = &combatant->identity;
            for (s32 index = 0; index < 50; ++index) {
                BattleRosterCacheEntry *entry = &battle->cache[index];
                if (entry->selectionIndex == -1 && entry->group == -1 && entry->id == 0 && entry->key == 0xFFFFFFFF) {
                    entry->selectionIndex = combatant->selectionIndex;
                    entry->group = action->memberId;
                    entry->id = identity->id;
                    entry->key = identity->key;
                    break;
                }
            }
        }
    }
}
