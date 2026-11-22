/* NON_MATCHING: 73 vs 73 rows (51 diff lines): retained-ID pair unrolling matches retail (same isRetainedResource helper as battleReleaseRetiredUnitResources); record/resource ID compare order and final 42-slot clear loop registers differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
void resourceReleaseReference(BattleCleanupResource *resource);
} /* extern "C" */

/* True when `id` is still listed in the battle's retained-resource table (same helper as battleReleaseRetiredUnitResources). */
static bool isRetainedResource(const BtlMainStateA *battle, s16 id)
{
    for (s32 index = 0; index < 42; ++index) {
        if (battle->resourceCleanup.retainedIds[index] == id) {
            return true;
        }
    }
    return false;
}

extern "C" void battleReleaseUnusedEnemyResources(BtlMainStateA *battle)
{
    if (battle->resourceCleanup.buffer != NULL) {
        asdMemFree(battle->resourceCleanup.buffer);
        battle->resourceCleanup.buffer = NULL;
    }
    for (s32 slot = 0; slot < 42; ++slot) {
        for (s32 record = 0; record < 50; ++record) {
            BattleCleanupResource *resource = battle->resourceCleanup.resources[slot];
            if (resource != NULL && battle->resourceCleanup.records[record].id == resource->id &&
                !isRetainedResource(battle, (s16)resource->id)) {
                resourceReleaseReference(resource);
                battle->resourceCleanup.resources[slot] = NULL;
            }
        }
    }
    sysMemClear(battle->resourceCleanup.records, sizeof(battle->resourceCleanup.records));
    for (s32 index = 0; index < 42; ++index) {
        battle->roster[index + 67].liveFlags.unk50 = 0;
        battle->entries[index + 67].flags = 0;
    }
}
