/* NON_MATCHING: The embedded-entry pointer is retained rather than recomputed; getter/setter registers differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
s32 FUN_0029efc0(FlaggedEntry *entry);
s32 FUN_0029e93c(FlaggedEntry *entry);
s32 flaggedEntryGetValueA(FlaggedEntry *entry);
s32 flaggedEntryGetValueB(FlaggedEntry *entry);
s32 scrollOwnerSetValue(FlaggedEntry *entry, s32 value);
s32 flaggedEntrySetValueA(FlaggedEntry *entry, s32 value);
s32 recordTrackDirtyValue(FlaggedEntry *entry, s32 value);
s32 flaggedEntrySetValueB(FlaggedEntry *entry, s32 value);

void FUN_003c2c6c(EntryCountdownPrefixIV *state)
{
    FlaggedEntry *entry = reinterpret_cast<FlaggedEntry *>(
        reinterpret_cast<u8 *>(state) + 0x10);

    s32 primary;
    if (state->mode == 1)
        primary = FUN_0029e93c(entry);
    else
        primary = FUN_0029efc0(entry);

    s32 secondary;
    if (state->mode == 1)
        secondary = flaggedEntryGetValueB(entry);
    else
        secondary = flaggedEntryGetValueA(entry);

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
        scrollOwnerSetValue(entry, primary);
        flaggedEntrySetValueA(entry, secondary);
    }
    if (state->mode == 1) {
        recordTrackDirtyValue(entry, primary);
        flaggedEntrySetValueB(entry, secondary);
    }
}
}
