/* NON_MATCHING: The embedded-entry pointer is retained rather than recomputed; getter/setter registers differ. */
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

void FUN_004d01f8(ResourceValueCyclePrefixA *state)
{
    FlaggedEntry *entry = reinterpret_cast<FlaggedEntry *>(
        reinterpret_cast<u8 *>(state) + 0x10);

    s32 primary;
    if (state->mode == 1)
        primary = resourceRunEmbeddedOperationIfUnblocked(entry);
    else
        primary = resourceRunOperationIfUnblocked(entry);

    s32 secondary;
    if (state->mode == 1)
        secondary = flaggedEntryGetValueB(entry);
    else
        secondary = flaggedEntryGetValueA(entry);

    if (primary > 0) {
        --primary;
    } else if (secondary > 0) {
        --secondary;
    } else if (state->total > state->split) {
        secondary = static_cast<s32>(static_cast<u32>(state->split) - 1u);
        primary = static_cast<s32>(static_cast<u32>(state->total) -
                                   static_cast<u32>(state->split));
    } else {
        primary = 0;
        secondary = static_cast<s32>(static_cast<u32>(state->total) - 1u);
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
