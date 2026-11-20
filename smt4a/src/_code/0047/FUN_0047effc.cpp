#include "battle/btlAction.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
void btlQueueActionMessage(s32 index, u32 value, void *resource, u32 mode, u32 unique, u32 options, u32 target);
extern BtlActionResourceEntry g_btlActionResourceTable[14];
}

// The resource entry keyed by `id`, or 0 when there is none.
static __inline BtlActionResourceEntry *findResourceEntry(u32 id)
{
    s32 index = 0;
    while (index < 14) {
        BtlActionResourceEntry *entry = &g_btlActionResourceTable[index];
        if (entry->id == id) {
            return entry;
        }
        ++index;
    }
    return 0;
}

/* Queues an action from a keyed resource with an offset into its index range. */
extern "C" u32 FUN_0047effc(u32 id, u32 value, s32 offset)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        BtlActionResourceEntry *entry = findResourceEntry(id);
        if (entry != 0 && entry->resource != 0) {
            btlQueueActionMessage(entry->baseIndex + offset, value, entry->resource, 0, 1, 0, 0);
        }
    }
    return 0;
}
