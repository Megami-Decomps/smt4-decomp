#include "common.h"

extern "C" {

extern void *DAT_0057f678;
void FUN_004cf58c(void *owner);

s32 FUN_00330a60(u32 job)
{
    if (DAT_0057f678 != NULL) {
        FUN_004cf58c(DAT_0057f678);
    }
    return 0;
}

} /* extern "C" */
