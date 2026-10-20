/* NON_MATCHING: register allocation only: retail keeps the default 999 in r2 and entry A order in r1; built has them swapped */
#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x0 */ u16 order;
} SortEntry;

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;

extern SortEntry *FUN_0039b984(u32 id);

/* Comparator: orders two references by their entry's order value (999 for a missing entry). */
s32 entryRefCompareByOrderDefault(SortRef *a, SortRef *b)
{
    SortEntry *entryA = FUN_0039b984(a->id);
    SortEntry *entryB = FUN_0039b984(b->id);
    s32 orderB = 999;
    s32 orderA = entryA != NULL ? entryA->order : orderB;

    if (entryB != NULL) {
        orderB = entryB->order;
    }
    return orderA - orderB;
}

} /* extern "C" */
