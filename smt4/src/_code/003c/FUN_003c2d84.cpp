/* NON_MATCHING: named mode snapshot and record pointer restore the post-indexed mode load; only the two saved-argument moves are reversed. */
#include "gfx/TrackedRecord.h"

extern "C" {
void recordTrackDirtyValue(FlaggedEntry *record, u32 value);
void scrollOwnerSetValue(FlaggedEntry *record, u32 value);
void flaggedEntrySetValueB(FlaggedEntry *record, u32 value);
void flaggedEntrySetValueA(FlaggedEntry *record, u32 value);
u32 FUN_0029e93c(FlaggedEntry *record);
u32 FUN_0029efc0(FlaggedEntry *record);

/* Selects the mode-specific dirty tracker and updates the record's cached value. */
void FUN_003c2d84(TrackedRecordOwner *owner, u32 value)
{
    u32 tracked;
    u32 mode = owner->mode;
    FlaggedEntry *record = &owner->record;
    if (mode == 1) {
        tracked = FUN_0029e93c(record);
    } else {
        tracked = FUN_0029efc0(record);
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
