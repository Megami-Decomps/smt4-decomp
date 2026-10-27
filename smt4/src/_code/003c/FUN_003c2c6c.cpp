/* NON_MATCHING: the embedded entry is now recomputed at every use as in retail; retail keeps the state in r5 and the primary counter in r4 (swapped here) and leaves the secondary counter in r0 until its final save. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {
s32 FUN_0029efc0(FlaggedEntry *entry);
s32 flaggedEntryGetValueA(FlaggedEntry *entry);
s32 flaggedEntryGetValueB(FlaggedEntry *entry);
s32 scrollOwnerSetValue(FlaggedEntry *entry, s32 value);
s32 flaggedEntrySetValueA(FlaggedEntry *entry, s32 value);
s32 recordTrackDirtyValue(FlaggedEntry *entry, s32 value);
s32 flaggedEntrySetValueB(FlaggedEntry *entry, s32 value);

static __inline FlaggedEntry *countdownEntry(EntryCountdownPrefixIV *state)
{
    return reinterpret_cast<FlaggedEntry *>(reinterpret_cast<u8 *>(state) + 0x10);
}

void FUN_003c2c6c(EntryCountdownPrefixIV *state)
{
    s32 primary;
    if (state->mode == 1)
        primary = FUN_0029e93c(countdownEntry(state));
    else
        primary = FUN_0029efc0(countdownEntry(state));

    s32 secondary;
    if (state->mode == 1)
        secondary = flaggedEntryGetValueB(countdownEntry(state));
    else
        secondary = flaggedEntryGetValueA(countdownEntry(state));

    if (primary > 0) {
        --primary;
    } else if (secondary > 0) {
        --secondary;
    } else if (state->resetTotal > state->resetSplit) {
        secondary = static_cast<s32>(static_cast<u32>(state->resetSplit) - 1u);
        primary = static_cast<s32>(static_cast<u32>(state->resetTotal) -
                                   static_cast<u32>(state->resetSplit));
    } else {
        primary = 0;
        secondary = static_cast<s32>(static_cast<u32>(state->resetTotal) - 1u);
    }

    if (state->mode == 0) {
        scrollOwnerSetValue(countdownEntry(state), primary);
        flaggedEntrySetValueA(countdownEntry(state), secondary);
    }
    if (state->mode == 1) {
        recordTrackDirtyValue(countdownEntry(state), primary);
        flaggedEntrySetValueB(countdownEntry(state), secondary);
    }
}
}
