/* NON_MATCHING: retained-ID scan is not pair-unrolled; typed roster stores reuse the record pointer instead of retail's repeated lookup. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" void FUN_0040a244(BattleCleanupResource *resource);

static inline bool isRetainedResource(const BtlMainStateA *state, s16 id)
{
    for (s32 index = 0; index < 42; ++index) {
        if (state->resourceCleanup.retainedIds[index] == id) {
            return true;
        }
    }
    return false;
}

// Release unretained resources associated with a retired unit, then clear its roster and combatant flags.
extern "C" void FUN_003eacb4(BtlMainStateA *state)
{
    if (state->retiredUnit.index != -1) {
        if (state->retiredUnit.resource != NULL) {
            for (s32 index = 0; index < 42; ++index) {
                BattleCleanupResource *resource = state->resourceCleanup.resources[index];
                if (resource != NULL && resource->id == state->retiredUnit.resource->id &&
                    !isRetainedResource(state, (s16)resource->id)) {
                    FUN_0040a244(resource);
                    state->resourceCleanup.resources[index] = NULL;
                }
            }
            state->retiredUnit.resource = NULL;
        }
        BattleRosterRecordA *record = &state->roster[state->retiredUnit.index];
        record->motion.flags = 0;
        state->entries[record->motion.unitIndex].flags = 0;
        record->motion.unitIndex = -1;
        state->retiredUnit.index = -1;
    }
}
