#include "common.h"

extern "C" {

extern void *DAT_0057f658;
void FUN_002b968c(void *owner);

s32 FUN_00330934(void)
{
    if (DAT_0057f658 != NULL) {
        FUN_002b968c(DAT_0057f658);
    }
    return 0;
}

} /* extern "C" */
