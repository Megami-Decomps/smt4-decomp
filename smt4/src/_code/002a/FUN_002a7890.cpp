#include "common.h"

extern "C" {

int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

extern u32 *DAT_0043e140;

void FUN_002a7890(void)
{
    u32 *block = DAT_0043e140;

    jobStop(*DAT_0043e140, 0);
    asdMemFree(block);
    DAT_0043e140 = NULL;
}

} /* extern "C" */
