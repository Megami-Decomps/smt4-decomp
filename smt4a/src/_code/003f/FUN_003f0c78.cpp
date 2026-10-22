/* NON_MATCHING: Roster/cache loop registers and identity-load scheduling differ. */
#include "battle/btlMain.h"
#include "battle/BattleRosterCache.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 group);

// Restore the cached horizontal position of each matching active roster entry.
extern "C" void FUN_003f0c78(BtlMainStateA *state)
{
    // The identity spans the halfword-aligned union beginning at 0x0A.
    struct RosterIdentityView {
        u8 unk000[0x164];
        BattleCombatantStatusKey identity;
    };
    typedef char RosterIdentityViewOffsetCheck[
        offsetof(RosterIdentityView, identity) == 0x164 ? 1 : -1];
    if (state->rosterCache.entries == NULL) {
        return;
    }
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA *entry = &state->roster[index];
        if ((entry->liveFlags.unk50 & 1) == 0 || (entry->liveFlags.unk50 & 0x80) == 0) {
            continue;
        }
        BtlCombatantEntryA *descriptor = FUN_003f0e20(state, entry->motion.group);
        const BattleCombatantStatusKey *identity = &((const RosterIdentityView *)descriptor)->identity;
        BattleRosterCacheEntry *cache = state->rosterCache.entries;
        s16 selectionIndex = descriptor->indexView.selectionIndex;
        for (s32 cacheIndex = 0; cacheIndex < 50; ++cacheIndex) {
            const BattleRosterCacheEntry *saved = &cache[cacheIndex];
            if (saved->selectionIndex == selectionIndex && saved->group == entry->motion.group &&
                saved->id == identity->id && saved->key == identity->key) {
                entry->initialPositionX = saved->positionX;
                entry->motion.position[0] = saved->positionX;
                break;
            }
        }
    }
}
