/* NON_MATCHING: roster/cache loop registers and identity-load scheduling differ. */
#include "battle/btlMain.h"
#include "battle/BattleRosterCache.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"

/* Restores the cached horizontal position of each matching active roster entry. */
extern "C" void FUN_003f0c78(BtlMainStateA *state)
{
    if (state->rosterCache.entries == NULL) {
        return;
    }
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA *entry = &state->roster[index];
        if ((entry->liveFlags.unk50 & 1) == 0 || (entry->liveFlags.unk50 & 0x80) == 0) {
            continue;
        }
        BtlCombatantEntryA *descriptor = btlMainFindEntryByListedId(state, entry->motion.group);
        const BtlUnitDataA *identity = &descriptor->data;
        BattleRosterCacheEntry *cache = state->rosterCache.entries;
        s16 selectionIndex = descriptor->selectionIndex;
        for (s32 cacheIndex = 0; cacheIndex < 50; ++cacheIndex) {
            const BattleRosterCacheEntry *saved = &cache[cacheIndex];
            if (saved->selectionIndex == selectionIndex && saved->group == entry->motion.group &&
                saved->id == identity->id && saved->key == identity->parts[0]) {
                entry->initialPositionX = saved->positionX;
                entry->motion.position[0] = saved->positionX;
                break;
            }
        }
    }
}
