#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u8 unk00[0x43];
    /* 0x43 */ u8 key;
} SortEntry;

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;

extern SortEntry *FUN_00192550(u32 id);

/* Comparator: orders two references by their entry's sort key. */
s32 entryRefCompareByOrder(SortRef *a, SortRef *b)
{
    SortEntry *entryA = FUN_00192550(a->id);
    SortEntry *entryB = FUN_00192550(b->id);

    return entryA->key - entryB->key;
}

} /* extern "C" */
