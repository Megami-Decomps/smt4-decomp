#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 key;
} SortEntry;

typedef struct SortRef {
    /* 0x0 */ u16 unk0;
    /* 0x2 */ u16 id;
} SortRef;

extern SortEntry *FUN_00282b9c(u32 id);

/* Comparator: orders two references by their entry's sort key. */
s32 entryRefCompareByKey(SortRef *a, SortRef *b)
{
    SortEntry *entryA = FUN_00282b9c(a->id);
    SortEntry *entryB = FUN_00282b9c(b->id);

    return entryA->key - entryB->key;
}

} /* extern "C" */
