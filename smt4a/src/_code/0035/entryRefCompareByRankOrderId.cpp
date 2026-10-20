#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 unk3[3];
    /* 0x6 */ u16 order;
} SortEntry;

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;

extern SortEntry *FUN_00184310(u32 id);

/* Comparator: orders two references by rank and order descending, then by id ascending. */
s32 entryRefCompareByRankOrderId(SortRef *a, SortRef *b)
{
    SortEntry *entryA = FUN_00184310(a->id);
    SortEntry *entryB = FUN_00184310(b->id);
    s32 diff = entryB->rank - entryA->rank;

    if (diff == 0) {
        diff = entryB->order - entryA->order;
        if (diff == 0) {
            diff = entryA->id - entryB->id;
        }
    }
    return diff;
}

} /* extern "C" */
