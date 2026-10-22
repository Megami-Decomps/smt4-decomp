#include "common.h"

extern "C" {

typedef struct LeveledEntry {
    u16 id;     /* 0x00 */
    u16 level;  /* 0x02 */
} LeveledEntry;

typedef struct LeveledLists {
    u8 counts[0x38];          /* 0x00: entry count of each list */
    LeveledEntry *lists[1];   /* 0x38 */
} LeveledLists;

s32 devilIsAvailable(LeveledLists *owner, u16 id);

/* Returns the id of the accepted entry of list whose level is closest at or above level (0 if none). */
u16 FUN_003c9948(LeveledLists *owner, s32 list, u8 level)
{
    u8 bestDiff = 0xff;
    u16 best = 0;
    s32 i;

    if (owner->counts[list] != 0) {
        if (owner->lists[list][0].level < level) {
            level = owner->lists[list][0].level;
        }
        for (i = 0; i < owner->counts[list]; i++) {
            if (owner->lists[list][i].level >= level && owner->lists[list][i].level - level < bestDiff &&
                devilIsAvailable(owner, owner->lists[list][i].id)) {
                best = owner->lists[list][i].id;
                bestDiff = owner->lists[list][i].level - level;
            }
        }
    }
    return best;
}

} /* extern "C" */
