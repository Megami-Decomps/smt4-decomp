#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 group : 10;
    /* 0x24 */ u32 unk24 : 22;
    /* 0x28 */ u8 unk28[0x48];
    /* 0x70 */ u16 order;
} SortEntry;

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;

extern SortEntry *FUN_00192608(u32 id);

/* Comparator: orders two references by group, then by order, both descending. */
s32 entryRefCompareByGroupThenOrder(SortRef *a, SortRef *b)
{
    SortEntry *entryA = FUN_00192608(a->id);
    SortEntry *entryB = FUN_00192608(b->id);
    s32 diff = entryB->group - entryA->group;

    if (diff == 0) {
        entryA = FUN_00192608(a->id);
        entryB = FUN_00192608(b->id);
        diff = entryB->order - entryA->order;
    }
    return diff;
}

} /* extern "C" */
