#include "map/MapIfGlobals.h"

extern "C" {

extern void *DAT_0057f658;

s32 FUN_00330934(void)
{
    if (DAT_0057f658 != NULL) {
        FUN_002b968c();
    }
    return 0;
}

} /* extern "C" */
