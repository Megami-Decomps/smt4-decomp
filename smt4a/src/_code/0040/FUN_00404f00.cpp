/* NON_MATCHING: register allocation only: retail keeps the 999 default in r2 and the first value in r1; built uses r1 for the constant and r2 for the first value. */
#include "common.h"
#include "addon/PackageSelection.h"

extern "C" {


/* Compares two ids by their entries' value (999 when missing), higher first. */
s32 FUN_00404f00(u16 *a, u16 *b)
{
    PackageSelectableRecord *entryA = contentFindRecordById(*a);
    PackageSelectableRecord *entryB = contentFindRecordById(*b);
    s32 valueA = entryA != NULL ? entryA->id : 999;
    s32 valueB = entryB != NULL ? entryB->id : 999;

    return valueB - valueA;
}

} /* extern "C" */
