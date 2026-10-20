#include "common.h"

extern "C" {

int FUN_002117a0(void);
int FUN_00252334(void);
int FUN_0028a22c(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

extern u32 *g_camp;

void FUN_002117c0(void)
{
    u32 *block = g_camp;

    FUN_00252334();
    FUN_0028a22c();
    uiFadeRelease();
    buttonHelpRelease();
    FUN_002117a0();
    jobStop(*block, 0);
    asdMemFree(block);
    g_camp = NULL;
}

} /* extern "C" */
