/* NON_MATCHING: the two counter values use exchanged saved registers and different conditional-comparison scheduling. */
#include "shard/Shard0031.h"

struct BoundedCounter {
    u8 kind;
    u8 unk01[3];
    s32 minimum, maximum;
    u32 unk0c;
    FlaggedEntry entry;
};
extern "C" {
s32 FUN_0029efc0(FlaggedEntry *entry);
s32 FUN_0029e93c(FlaggedEntry *entry);
s32 flaggedEntryGetValueA(FlaggedEntry *entry);
s32 flaggedEntryGetValueB(FlaggedEntry *entry);
void FUN_00298d64(FlaggedEntry *entry, s32 value);
void recordTrackDirtyValue(FlaggedEntry *entry, s32 value);
void flaggedEntrySetValueA(FlaggedEntry *entry, s32 value);
void flaggedEntrySetValueB(FlaggedEntry *entry, s32 value);

// Advance the two-part bounded counter and commit through its selected storage mode.
void FUN_003c2b74(BoundedCounter *counter)
{
    s32 first = counter->kind == 1 ? FUN_0029e93c(&counter->entry) : FUN_0029efc0(&counter->entry);
    s32 second = counter->kind == 1 ? flaggedEntryGetValueB(&counter->entry) : flaggedEntryGetValueA(&counter->entry);
    s32 maximum = counter->maximum, minimum = counter->minimum;
    if (first < maximum - minimum) {
        ++first;
    } else if ((maximum > minimum && second < minimum - 1) ||
               (maximum <= minimum && second < maximum - 1)) {
        ++second;
    } else {
        first = 0;
        second = 0;
    }
    if (counter->kind == 0) {
        FUN_00298d64(&counter->entry, first);
        flaggedEntrySetValueA(&counter->entry, second);
    }
    if (counter->kind == 1) {
        recordTrackDirtyValue(&counter->entry, first);
        flaggedEntrySetValueB(&counter->entry, second);
    }
}
}
