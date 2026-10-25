/* NON_MATCHING: retail materialises the zero for the zero call arguments in r3 right after the table test (shared across the call); the build zeroes r0 at the call. */
#include "battle/btlAction.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
void FUN_004fb43c(s32 index, u32 value, void *resource, u32 mode, u32 unique, u32 options, u32 target);
extern BtlActionResourceEntry DAT_00573ce0[14];
}

static __inline BtlActionResourceEntry *findResourceEntry(u32 id)
{
    for (s32 i = 0; i < 14; ++i) {
        BtlActionResourceEntry *entry = &DAT_00573ce0[i];
        if (entry->id == id) {
            return entry;
        }
    }
    return NULL;
}

/* Queues an action from a keyed resource with an offset into its index range. */
extern "C" u32 FUN_0047effc(u32 id, u32 value, s32 offset)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        BtlActionResourceEntry *entry = findResourceEntry(id);
        if (entry != NULL && entry->resource != NULL) {
            FUN_004fb43c(entry->baseIndex + offset, value, entry->resource, 0, 1, 0, 0);
        }
    }
    return 0;
}
