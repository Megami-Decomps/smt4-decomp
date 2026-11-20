#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "camp/Unite/UniteWork.h"
#include "code/Code0029_Smt4.h"

extern "C" {
s32 resourceRunOperationIfUnblocked(FlaggedEntry *entry);
s32 flaggedEntryGetValueA(FlaggedEntry *entry);
s32 flaggedEntryGetValueB(FlaggedEntry *entry);
s32 scrollOwnerSetValue(FlaggedEntry *entry, s32 value);
s32 flaggedEntrySetValueA(FlaggedEntry *entry, s32 value);
s32 recordTrackDirtyValue(FlaggedEntry *entry, s32 value);
s32 flaggedEntrySetValueB(FlaggedEntry *entry, s32 value);

/* The entry embedded in the countdown state, 0x10 bytes in. */
static __inline FlaggedEntry *countdownEntry(EntryCountdownPrefixIV *state)
{
    return reinterpret_cast<FlaggedEntry *>(reinterpret_cast<u8 *>(state) + 0x10);
}

/* Reads the primary count (mode 1 uses the alternate accessors). */
static s32 countdownGetPrimary(EntryCountdownPrefixIV *state)
{
    if (state->mode == 1) {
        return resourceRunEmbeddedOperationIfUnblocked(countdownEntry(state));
    }
    return resourceRunOperationIfUnblocked(countdownEntry(state));
}

/* Reads the secondary count. */
static s32 countdownGetSecondary(EntryCountdownPrefixIV *state)
{
    if (state->mode == 1) {
        return flaggedEntryGetValueB(countdownEntry(state));
    }
    return flaggedEntryGetValueA(countdownEntry(state));
}

/* Writes both counts back through the setters of the state's mode. */
static void countdownSet(EntryCountdownPrefixIV *state, s32 primary, s32 secondary)
{
    if (state->mode == 0) {
        scrollOwnerSetValue(countdownEntry(state), primary);
        flaggedEntrySetValueA(countdownEntry(state), secondary);
    }
    if (state->mode == 1) {
        recordTrackDirtyValue(countdownEntry(state), primary);
        flaggedEntrySetValueB(countdownEntry(state), secondary);
    }
}

/* Steps the countdown back by one: the primary count first, then the secondary, and wraps to the
 * reset split when both are exhausted. */
void listCursorStepBack(EntryCountdownPrefixIV *state)
{
    s32 primary = countdownGetPrimary(state);
    s32 secondary = countdownGetSecondary(state);

    if (primary > 0) {
        --primary;
    } else if (secondary > 0) {
        --secondary;
    } else if (state->resetTotal > state->resetSplit) {
        secondary = state->resetSplit - 1;
        primary = state->resetTotal - state->resetSplit;
    } else {
        primary = 0;
        secondary = state->resetTotal - 1;
    }
    countdownSet(state, primary, secondary);
}
}
