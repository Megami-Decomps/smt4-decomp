#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "gamedata/GameDataAccess_Shard0031.h"
#include "gamedata/GameDataAccess_VariantH_Shard0031.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {
s32 resourceRunOperationIfUnblocked(FlaggedEntry *entry);
s32 resourceRunEmbeddedOperationIfUnblocked(FlaggedEntry *entry);
s32 scrollOwnerSetValue(FlaggedEntry *entry, s32 value);
s32 flaggedEntrySetValueA(FlaggedEntry *entry, s32 value);
s32 recordTrackDirtyValue(FlaggedEntry *entry, s32 value);

/* The entry embedded in the cycle state, 0x10 bytes in. */
static __inline FlaggedEntry *cycleEntry(ResourceValueCyclePrefixA *state)
{
    return reinterpret_cast<FlaggedEntry *>(reinterpret_cast<u8 *>(state) + 0x10);
}

/* Reads the primary count (mode 1 uses the alternate accessors). */
static s32 cycleGetPrimary(ResourceValueCyclePrefixA *state)
{
    if (state->mode == 1) {
        return resourceRunEmbeddedOperationIfUnblocked(cycleEntry(state));
    }
    return resourceRunOperationIfUnblocked(cycleEntry(state));
}

/* Reads the secondary count. */
static s32 cycleGetSecondary(ResourceValueCyclePrefixA *state)
{
    if (state->mode == 1) {
        return flaggedEntryGetValueB(cycleEntry(state));
    }
    return flaggedEntryGetValueA(cycleEntry(state));
}

/* Writes both counts back through the setters of the state's mode. */
static void cycleSet(ResourceValueCyclePrefixA *state, s32 primary, s32 secondary)
{
    if (state->mode == 0) {
        scrollOwnerSetValue(cycleEntry(state), primary);
        flaggedEntrySetValueA(cycleEntry(state), secondary);
    }
    if (state->mode == 1) {
        recordTrackDirtyValue(cycleEntry(state), primary);
        flaggedEntrySetValueB(cycleEntry(state), secondary);
    }
}

/* Steps the countdown back by one: the primary count first, then the secondary, and wraps to the
 * split when both are exhausted. */
void listCursorStepBack(ResourceValueCyclePrefixA *state)
{
    s32 primary = cycleGetPrimary(state);
    s32 secondary = cycleGetSecondary(state);

    if (primary > 0) {
        --primary;
    } else if (secondary > 0) {
        --secondary;
    } else if (state->total > state->split) {
        secondary = state->split - 1;
        primary = state->total - state->split;
    } else {
        primary = 0;
        secondary = state->total - 1;
    }
    cycleSet(state, primary, secondary);
}
}
