#include "shard/Shard0031.h"
#include "gfx/TrackedRecord.h"

extern "C" {

/* Stores `value` unless the entry is inactive; marks it dirty when the value changes. */
void flaggedEntrySetValueA(FlaggedEntry *entry, s32 value)
{
    if (entry->inactive == 0) {
        if (entry->unk20 != value) {
            entry->dirty20 = 1;
        }
        entry->unk20 = value;
    }
}

} /* extern "C" */
