#include "gfx/TrackedRecord.h"
#include "camp/Unite/UniteWork.h"

extern "C" {
void recordTrackDirtyValue(FlaggedEntry *record, u32 value);
void scrollOwnerSetValue(FlaggedEntry *record, u32 value);
void flaggedEntrySetValueB(FlaggedEntry *record, u32 value);
u32 resourceRunOperationIfUnblocked(FlaggedEntry *record);

/* Reads the record's scroll top (mode 1 uses the alternate accessor). */
static u32 trackedRecordGetTop(TrackedRecordOwner *owner)
{
    if (owner->mode == 1) {
        return resourceRunEmbeddedOperationIfUnblocked(&owner->record);
    }
    return resourceRunOperationIfUnblocked(&owner->record);
}

/* Writes the scroll top and position through the setters of the owner's mode. */
static void trackedRecordSet(TrackedRecordOwner *owner, u32 top, u32 position)
{
    if (owner->mode == 0) {
        scrollOwnerSetValue(&owner->record, top);
        flaggedEntrySetValueA(&owner->record, position);
    }
    if (owner->mode == 1) {
        recordTrackDirtyValue(&owner->record, top);
        flaggedEntrySetValueB(&owner->record, position);
    }
}

/* Moves the record's position to `value`, keeping its scroll top. */
void listCursorSetPosition(TrackedRecordOwner *owner, u32 value)
{
    trackedRecordSet(owner, trackedRecordGetTop(owner), value);
}
}
