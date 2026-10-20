#include "common.h"

extern "C" {

void FUN_004f6184(void);

extern void *DAT_00573808;

void FUN_003e9cd0(void)
{
    if (DAT_00573808 != NULL) {
        FUN_004f6184();
    }
}

} /* extern "C" */
