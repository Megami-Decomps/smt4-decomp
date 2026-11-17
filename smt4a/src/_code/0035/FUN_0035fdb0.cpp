#include "gamedata/DevilRecordA.h"

extern "C" {

typedef struct Item {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 group;
} Item;

/* Sort comparison of two items: ungrouped ones last, then by group (higher first), rank (higher first), order ascending and id (higher first). */
s32 FUN_0035fdb0(Item *a, Item *b)
{
    DevilRecordA *recordA;
    DevilRecordA *recordB;
    s32 diff;

    if (a->group == 0) {
        return b->group != 0;
    }
    if (b->group == 0) {
        return -1;
    }
    diff = b->group - a->group;
    if (diff == 0) {
        recordA = devilGetRecord(a->id);
        recordB = devilGetRecord(b->id);
        diff = recordB->race - recordA->race;
        if (diff == 0) {
            diff = recordA->level - recordB->level;
            if (diff == 0) {
                diff = recordB->id - recordA->id;
            }
        }
    }
    return diff;
}

} /* extern "C" */
