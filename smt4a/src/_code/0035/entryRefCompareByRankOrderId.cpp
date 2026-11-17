#include "gamedata/DevilRecordA.h"

extern "C" {

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;

/* Comparator: orders two references by rank and order descending, then by id ascending. */
s32 entryRefCompareByRankOrderId(SortRef *a, SortRef *b)
{
    DevilRecordA *entryA = devilGetRecord(a->id);
    DevilRecordA *entryB = devilGetRecord(b->id);
    s32 diff = entryB->race - entryA->race;

    if (diff == 0) {
        diff = entryB->level - entryA->level;
        if (diff == 0) {
            diff = entryA->id - entryB->id;
        }
    }
    return diff;
}

} /* extern "C" */
