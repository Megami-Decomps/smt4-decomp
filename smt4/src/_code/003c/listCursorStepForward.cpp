#include "shard/Shard0031.h"
#include "shard/W5_W5Match2_UniteWork.h"

struct BoundedCounter {
    u8 kind;
    u8 unk01[3];
    s32 minimum, maximum;
    u32 unk0c;
    FlaggedEntry entry;
};
extern "C" {
s32 resourceRunOperationIfUnblocked(FlaggedEntry *entry);
s32 flaggedEntryGetValueA(FlaggedEntry *entry);
s32 flaggedEntryGetValueB(FlaggedEntry *entry);
void scrollOwnerSetValue(FlaggedEntry *entry, s32 value);
void recordTrackDirtyValue(FlaggedEntry *entry, s32 value);
void flaggedEntrySetValueA(FlaggedEntry *entry, s32 value);
void flaggedEntrySetValueB(FlaggedEntry *entry, s32 value);

/* Reads the counter's first part (mode 1 uses the alternate accessors). */
static s32 boundedCounterGetFirst(BoundedCounter *counter)
{
    if (counter->kind == 1) {
        return resourceRunEmbeddedOperationIfUnblocked(&counter->entry);
    }
    return resourceRunOperationIfUnblocked(&counter->entry);
}

/* Reads the counter's second part. */
static s32 boundedCounterGetSecond(BoundedCounter *counter)
{
    if (counter->kind == 1) {
        return flaggedEntryGetValueB(&counter->entry);
    }
    return flaggedEntryGetValueA(&counter->entry);
}

/* Writes both parts back through the setters of the counter's mode. */
static void boundedCounterSet(BoundedCounter *counter, s32 first, s32 second)
{
    if (counter->kind == 0) {
        scrollOwnerSetValue(&counter->entry, first);
        flaggedEntrySetValueA(&counter->entry, second);
    }
    if (counter->kind == 1) {
        recordTrackDirtyValue(&counter->entry, first);
        flaggedEntrySetValueB(&counter->entry, second);
    }
}

// Advance the two-part bounded counter and commit through its selected storage mode.
void listCursorStepForward(BoundedCounter *counter)
{
    s32 first = boundedCounterGetFirst(counter);
    s32 second = boundedCounterGetSecond(counter);
    if (first < counter->maximum - counter->minimum) {
        ++first;
    } else if ((counter->maximum > counter->minimum && second < counter->minimum - 1) ||
               (counter->maximum <= counter->minimum && second < counter->maximum - 1)) {
        ++second;
    } else {
        first = 0;
        second = 0;
    }
    boundedCounterSet(counter, first, second);
}
}
