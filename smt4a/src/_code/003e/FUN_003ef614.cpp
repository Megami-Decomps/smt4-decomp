/* NON_MATCHING: retained-ID search is not unrolled and outer-loop registers differ from retail. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
void asdMemFree(void* memory);
void sysMemClear(void* memory, u32 size);
void resourceReleaseReference(BattleCleanupResource* resource);

// Release unretained resources, clear their records and reset the reserve roster.
void FUN_003ef614(BtlMainStateA* battle)
{
    if (battle->resourceCleanup.buffer != NULL) {
        asdMemFree(battle->resourceCleanup.buffer);
        battle->resourceCleanup.buffer = NULL;
    }
    for (s32 slot = 0; slot < 42; ++slot) {
        for (s32 record = 0; record < 50; ++record) {
            BattleCleanupResource* resource = battle->resourceCleanup.resources[slot];
            if (resource != NULL && resource->id == battle->resourceCleanup.records[record].id) {
                s16 id = resource->id;
                bool retained = false;
                for (s32 index = 0; index < 42; ++index) {
                    if (battle->resourceCleanup.retainedIds[index] == id) {
                        retained = true;
                        break;
                    }
                }
                if (!retained) {
                    resourceReleaseReference(resource);
                    battle->resourceCleanup.resources[slot] = NULL;
                }
            }
        }
    }
    sysMemClear(battle->resourceCleanup.records, sizeof(battle->resourceCleanup.records));
    for (s32 index = 0; index < 42; ++index) {
        battle->roster[index + 67].liveFlags.unk50 = 0;
        battle->entries[index + 67].flags = 0;
    }
}
}
