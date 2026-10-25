#include "shard/W4_Match6_BtlEntry.h"
#include "battle/BattleEntries.h"

extern "C" {

/* Returns the id of the `n`-th (1-based) entry flagged both 0x1 and 0x100, or -1 when there are fewer. */
s32 btlFindNthActiveSpecialEntry(BtlMainState *owner, s32 n)
{
    s32 matched = 0;
    s32 i;

    for (i = 0; i < 109; i++) {
        u32 flags = owner->entries[i].flags;
        if ((flags & 1) && (flags & 0x100)) {
            matched++;
            if (matched == n) {
                return owner->entries[i].selectionIndex;
            }
        }
    }
    return -1;
}

} /* extern "C" */
