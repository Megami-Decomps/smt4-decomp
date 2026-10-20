#include "common.h"

extern "C" {

int btlTalkBustUpDestroy(void);
int fileSlotFree(int id);
int asdMemFree(u32 *ptr);
int jobStop(u32 job, int mode);

extern u32 *DAT_0043dd90;

void FUN_002fecfc(void)
{
    u32 *block = DAT_0043dd90;

    fileSlotFree(0x25);
    btlTalkBustUpDestroy();
    jobStop(*block, 0);
    asdMemFree(block);
    DAT_0043dd90 = NULL;
}

} /* extern "C" */
