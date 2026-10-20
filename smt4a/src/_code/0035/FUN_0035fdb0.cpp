#include "common.h"

extern "C" {

typedef struct Item {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 group;
} Item;

typedef struct Record {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 unk3;
    /* 0x4 */ u8 unk4[2];
    /* 0x6 */ u16 order;
} Record;

extern Record *FUN_00184310(u32 id);

/* Sort comparison of two items: ungrouped ones last, then by group (higher first), rank (higher first), order ascending and id (higher first). */
s32 FUN_0035fdb0(Item *a, Item *b)
{
    Record *recordA;
    Record *recordB;
    s32 diff;

    if (a->group == 0) {
        return b->group != 0;
    }
    if (b->group == 0) {
        return -1;
    }
    diff = b->group - a->group;
    if (diff == 0) {
        recordA = FUN_00184310(a->id);
        recordB = FUN_00184310(b->id);
        diff = recordB->rank - recordA->rank;
        if (diff == 0) {
            diff = recordA->order - recordB->order;
            if (diff == 0) {
                diff = recordB->id - recordA->id;
            }
        }
    }
    return diff;
}

} /* extern "C" */
