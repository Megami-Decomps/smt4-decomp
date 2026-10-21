#include "common.h"

extern "C" {

int btlTalkBustUpDestroy(void);
int fileSlotFree(int id);
int asdMemFree(u32 *ptr);
int jobStop(u32 job, int mode);

extern u32 *g_screenStateWork;

void screenStateRelease(void)
{
    u32 *block = g_screenStateWork;

    fileSlotFree(0x25);
    btlTalkBustUpDestroy();
    jobStop(*block, 0);
    asdMemFree(block);
    g_screenStateWork = NULL;
}

} /* extern "C" */
