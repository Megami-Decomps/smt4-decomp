/* NON_MATCHING: register allocation only: retail keeps the default 999 in r2 and entry A order in r1; built has them swapped */
#include "common.h"
#include "addon/PackageSelection.h"

extern "C" {

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;


/* Comparator: orders two references by their entry's order value (999 for a missing entry). */
s32 entryRefCompareByOrderDefault(SortRef *a, SortRef *b)
{
    PackageSelectableRecord *entryA = contentFindRecordById(a->id);
    PackageSelectableRecord *entryB = contentFindRecordById(b->id);
    s32 orderB = 999;
    s32 orderA = entryA != NULL ? entryA->id : orderB;

    if (entryB != NULL) {
        orderB = entryB->id;
    }
    return orderA - orderB;
}

} /* extern "C" */
