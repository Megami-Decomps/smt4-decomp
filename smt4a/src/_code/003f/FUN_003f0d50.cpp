/* NON_MATCHING: roster/cache saved registers and status-pointer load scheduling differ from retail. */
#include "battle/btlMain.h"
#include "battle/BattleRosterCache.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 group);

/* Refresh matching cached positions for live non-party roster records. */
extern "C" void FUN_003f0d50(BtlMainStateA *battle)
{
    /* This contiguous subobject spans the shared padding union and its following id field. */
    struct CombatantStatusView {
        u8 prefix[0x164];
        BattleCombatantStatusKey status;
    };
    if (battle->rosterCache.entries) {
        for (s32 index = 4; index < 0x36; ++index) {
            BattleRosterRecordA *roster = &battle->roster[index];
            if ((roster->liveFlags.unk50 & 1) && (roster->liveFlags.unk50 & 0x80)) {
                BtlCombatantEntryA *combatant = FUN_003f0e20(battle, roster->motion.group);
                const BattleCombatantStatusKey *status =
                    &reinterpret_cast<const CombatantStatusView *>(combatant)->status;
                for (s32 cacheIndex = 0; cacheIndex < 50; ++cacheIndex) {
                    BattleRosterCacheEntry *cache = &battle->rosterCache.entries[cacheIndex];
                    if (cache->selectionIndex == combatant->indexView.selectionIndex &&
                        cache->group == roster->motion.group &&
                        cache->id == status->id &&
                        cache->key == status->key) {
                        cache->positionX = roster->motion.position[0];
                        break;
                    }
                }
            }
        }
    }
}
