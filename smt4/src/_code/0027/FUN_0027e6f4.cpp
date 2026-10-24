/* NON_MATCHING: identical instructions; register assignment differs (retail keeps the match count in ip and the entry flags in r3, built swaps them) */
#include "battle/BattleEntries.h"

extern "C" {

/* Returns the id of the `n`-th (1-based) entry flagged both 0x1 and 0x100, or -1 when there are fewer. */
s32 FUN_0027e6f4(BattleEntryOwner *owner, s32 n)
{
    s32 matched = 0;
    s32 i;

    for (i = 0; i < 109; i++) {
        if ((owner->entries[i].flags & 1) && (owner->entries[i].flags & 0x100)) {
            matched++;
            if (matched == n) {
                return owner->entries[i].id;
            }
        }
    }
    return -1;
}

} /* extern "C" */
