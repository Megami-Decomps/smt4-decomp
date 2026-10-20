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

/* Sort comparison of two items: ungrouped ones last, otherwise by order (higher first), rank ascending and id ascending. */
s32 FUN_00270cb4(Item *a, Item *b)
{
    Record *recordA;
    Record *recordB;
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
    recordA = FUN_00184310(a->id);
    recordB = FUN_00184310(b->id);
    diff = recordB->order - recordA->order;
    if (diff == 0) {
        diff = recordA->rank - recordB->rank;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
