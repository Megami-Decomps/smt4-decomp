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
    s32 orderA;
    s32 orderB;

    if (entryA != NULL) {
        orderA = entryA->id;
    } else {
        orderA = 999;
    }
    if (entryB != NULL) {
        orderB = entryB->id;
    } else {
        orderB = 999;
    }

    return orderA - orderB;
}

} /* extern "C" */
