/* NON_MATCHING: The initial mode load uses r0 and a separate record-address add instead of retail's r1 load with writeback. */
#include "gfx/TrackedRecord.h"

extern "C" {
void recordTrackDirtyValue(FlaggedEntry *record, u32 value);
void FUN_00298d64(FlaggedEntry *record, u32 value);
void flaggedEntrySetValueB(FlaggedEntry *record, u32 value);
void flaggedEntrySetValueA(FlaggedEntry *record, u32 value);
u32 FUN_0029e93c(FlaggedEntry *record);
u32 FUN_0029efc0(FlaggedEntry *record);

/* Selects the mode-specific dirty tracker and updates the record's cached value. */
void FUN_003c2d84(TrackedRecordOwner *owner, u32 value)
{
    u32 tracked;
    if (owner->mode == 1) {
        tracked = FUN_0029e93c(&owner->record);
    } else {
        tracked = FUN_0029efc0(&owner->record);
    }
    if (owner->mode == 0) {
        FUN_00298d64(&owner->record, tracked);
        flaggedEntrySetValueA(&owner->record, value);
    }
    if (owner->mode == 1) {
        recordTrackDirtyValue(&owner->record, tracked);
        flaggedEntrySetValueB(&owner->record, value);
    }
}
}
