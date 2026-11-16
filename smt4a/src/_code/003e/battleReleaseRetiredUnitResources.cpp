/* NON_MATCHING: only the compare operand order differs: retail loads the retired unit's resource id and the resource id in this order and compares `cmp r0, r1` (resource id first); with the same loads the build emits `cmp r1, r0`. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" void resourceReleaseReference(BattleCleanupResource *resource);

static bool isRetainedResource(const BtlMainStateA *state, s16 id)
{
    for (s32 index = 0; index < 42; ++index) {
        if (state->resourceCleanup.retainedIds[index] == id) {
            return true;
        }
    }
    return false;
}

// Release unretained resources associated with a retired unit, then clear its roster and combatant flags.
extern "C" void battleReleaseRetiredUnitResources(BtlMainStateA *state)
{
    if (state->retiredUnit.index != -1) {
        if (state->retiredUnit.resource != NULL) {
            for (s32 index = 0; index < 42; ++index) {
                BattleCleanupResource *resource = state->resourceCleanup.resources[index];
                if (resource != NULL && state->retiredUnit.resource->id == resource->id &&
                    !isRetainedResource(state, (s16)resource->id)) {
                    resourceReleaseReference(resource);
                    state->resourceCleanup.resources[index] = NULL;
                }
            }
            state->retiredUnit.resource = NULL;
        }
        state->roster[state->retiredUnit.index].motion.flags = 0;
        state->entries[state->roster[state->retiredUnit.index].motion.unitIndex].flags = 0;
        state->roster[state->retiredUnit.index].motion.unitIndex = -1;
        state->retiredUnit.index = -1;
    }
}
