/* NON_MATCHING: The initial mode load uses r0 and a separate record-address add instead of retail's r1 load with writeback. */
#include "gfx/TrackedRecord.h"

extern "C" {
void recordTrackDirtyValue(FlaggedEntry *record, u32 value);
void scrollOwnerSetValue(FlaggedEntry *record, u32 value);
void flaggedEntrySetValueB(FlaggedEntry *record, u32 value);
void flaggedEntrySetValueA(FlaggedEntry *record, u32 value);
u32 resourceRunEmbeddedOperationIfUnblocked(FlaggedEntry *record);
u32 resourceRunOperationIfUnblocked(FlaggedEntry *record);

/* Selects the mode-specific dirty tracker and updates the record's cached value. */
void FUN_004d032c(TrackedRecordOwner *owner, u32 value)
{
    u32 tracked;
    if (owner->mode == 1) {
        tracked = resourceRunEmbeddedOperationIfUnblocked(&owner->record);
    } else {
        tracked = resourceRunOperationIfUnblocked(&owner->record);
    }
    if (owner->mode == 0) {
        scrollOwnerSetValue(&owner->record, tracked);
        flaggedEntrySetValueA(&owner->record, value);
    }
    if (owner->mode == 1) {
        recordTrackDirtyValue(&owner->record, tracked);
        flaggedEntrySetValueB(&owner->record, value);
    }
}
}
