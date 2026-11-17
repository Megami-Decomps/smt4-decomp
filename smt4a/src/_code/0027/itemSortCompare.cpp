#include "gamedata/DevilRecordA.h"

extern "C" {

typedef struct Item {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 group;
} Item;

/* Sort comparison of two items: ungrouped ones last, otherwise by order (higher first), rank ascending and id ascending. */
s32 itemSortCompare(Item *a, Item *b)
{
    DevilRecordA *recordA;
    DevilRecordA *recordB;
    s32 diff;

    if (a->group == 0) {
        if (b->group == 0) {
            return 0;
        }
        return 1;
    }
    if (b->group == 0) {
        return -1;
    }
    recordA = devilGetRecord(a->id);
    recordB = devilGetRecord(b->id);
    diff = recordB->level - recordA->level;
    if (diff == 0) {
        diff = recordA->race - recordB->race;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
