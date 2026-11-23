#include "common.h"
#include "addon/PackageSelection.h"

extern "C" {


/* Compares two ids by their entries' value (999 when missing), higher first. */
s32 FUN_00404f00(u16 *a, u16 *b)
{
    PackageSelectableRecord *entryA = contentFindRecordById(*a);
    PackageSelectableRecord *entryB = contentFindRecordById(*b);
    s32 valueA;
    s32 valueB;

    if (entryA != NULL) {
        valueA = entryA->id;
    } else {
        valueA = 999;
    }
    if (entryB != NULL) {
        valueB = entryB->id;
    } else {
        valueB = 999;
    }

    return valueB - valueA;
}

} /* extern "C" */
