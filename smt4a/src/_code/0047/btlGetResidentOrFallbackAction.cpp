#include "battle/BtlActionFallback.h"
#include "kernel/jyoucyuGetTableEntry.h"

/* Returns the resident action table, or the matching fallback (last entry on a miss). */
extern "C" const BtlActionFallback *btlGetResidentOrFallbackAction(u32 id)
{
    const BtlActionFallback *entry = (const BtlActionFallback *)jyoucyuGetTableEntry(1);
    if (entry == NULL) {
        s32 index = 0;
        do {
            entry = &DAT_0057a4c4[index];
        } while (entry->id != id && ++index < BTL_FALLBACK_ACTION_COUNT);
    }
    return entry;
}
