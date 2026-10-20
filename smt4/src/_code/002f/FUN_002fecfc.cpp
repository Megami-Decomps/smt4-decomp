#include "common.h"

extern "C" {

int FUN_002523f0(void);
int FUN_002a46d8(int id);
int asdMemFree(u32 *ptr);
int jobStop(u32 job, int mode);

extern u32 *DAT_0043dd90;

void FUN_002fecfc(void)
{
    u32 *block = DAT_0043dd90;

    FUN_002a46d8(0x25);
    FUN_002523f0();
    jobStop(*block, 0);
    asdMemFree(block);
    DAT_0043dd90 = NULL;
}

} /* extern "C" */
