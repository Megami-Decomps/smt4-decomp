#include "shard/Shard0031.h"

extern "C" {

/* Stores `value` unless the entry is inactive; marks it dirty when the value changes. */
void FUN_0031d1b4(FlaggedEntry *entry, s32 value)
{
    if (entry->inactive == 0) {
        if (entry->unk48 != value) {
            entry->dirty48 = 1;
        }
        entry->unk48 = value;
    }
}

} /* extern "C" */
