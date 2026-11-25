#include "battle/BtlActionFallback.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
s32 btlQueueActionMessage(u32 index, u32 argument, u32 entryValue, u32 flag,
                 u32 unkStack0, u32 unkStack4, u32 unkStack8);

static __inline const BtlActionFallback *findFallbackEntry(u32 id)
{
    s32 index = 0;
    while (index < BTL_FALLBACK_ACTION_COUNT) {
        const BtlActionFallback *entry = &DAT_0057a4c4[index];
        if (entry->id == id) {
            return entry;
        }
        ++index;
    }
    return 0;
}

/* Dispatches the first matching fallback entry when table 1 is unavailable. */
u32 FUN_0047f138(u32 id, u32 argument, s32 indexOffset)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        const BtlActionFallback *entry = findFallbackEntry(id);
        if (entry != 0 && entry->action != 0) {
            btlQueueActionMessage(entry->index + indexOffset, argument, entry->action, 1, 0, 0, 0);
        }
    }
    return 0;
}
}
