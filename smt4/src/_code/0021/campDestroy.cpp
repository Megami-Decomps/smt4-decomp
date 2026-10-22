#include "common.h"

extern "C" {

int campFreeFileSlot(void);
int campReleaseTouchRegions(void);
int FUN_0028a22c(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

extern u32 *g_camp;

void campDestroy(void)
{
    u32 *block = g_camp;

    campReleaseTouchRegions();
    FUN_0028a22c();
    uiFadeRelease();
    buttonHelpRelease();
    campFreeFileSlot();
    jobStop(*block, 0);
    asdMemFree(block);
    g_camp = NULL;
}

} /* extern "C" */
