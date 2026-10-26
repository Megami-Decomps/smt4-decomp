/* NON_MATCHING: the entry address is recomputed at every use like retail (cycleEntry helper); retail keeps the secondary value in r0 until the final setter calls and the state pointer in r5, the build copies it early and uses r4/r5/r6 differently. */
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

void FUN_004d01f8(ResourceValueCyclePrefixA *state)
{
    s32 primary;
    if (state->mode == 1)
        primary = resourceRunEmbeddedOperationIfUnblocked(cycleEntry(state));
    else
        primary = resourceRunOperationIfUnblocked(cycleEntry(state));

    s32 secondary;
    if (state->mode == 1)
        secondary = flaggedEntryGetValueB(cycleEntry(state));
    else
        secondary = flaggedEntryGetValueA(cycleEntry(state));

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
        scrollOwnerSetValue(cycleEntry(state), primary);
        flaggedEntrySetValueA(cycleEntry(state), secondary);
    }
    if (state->mode == 1) {
        recordTrackDirtyValue(cycleEntry(state), primary);
        flaggedEntrySetValueB(cycleEntry(state), secondary);
    }
}
}
