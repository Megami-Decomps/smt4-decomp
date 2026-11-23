/* NON_MATCHING: roster/cache saved registers and status-pointer load scheduling differ from retail. */
#include "battle/btlMain.h"
#include "battle/BattleRosterCache.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"

/* Refresh matching cached positions for live non-party roster records. */
extern "C" void FUN_003f0d50(BtlMainStateA *battle)
{
    if (battle->rosterCache.entries) {
        for (s32 index = 4; index < 0x36; ++index) {
            BattleRosterRecordA *roster = &battle->roster[index];
            if ((roster->liveFlags.unk50 & 1) && (roster->liveFlags.unk50 & 0x80)) {
                BtlCombatantEntryA *combatant = btlMainFindEntryByListedId(battle, roster->motion.group);
                const BtlUnitDataA *status = &combatant->data;
                for (s32 cacheIndex = 0; cacheIndex < 50; ++cacheIndex) {
                    BattleRosterCacheEntry *cache = &battle->rosterCache.entries[cacheIndex];
                    if (cache->selectionIndex == combatant->selectionIndex &&
                        cache->group == roster->motion.group &&
                        cache->id == status->id &&
                        cache->key == status->parts[0]) {
                        cache->positionX = roster->motion.position[0];
                        break;
                    }
                }
            }
        }
    }
}
