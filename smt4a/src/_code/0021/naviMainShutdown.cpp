#include "mapnavi/NaviMainGlobals.h"

extern "C" {

void FUN_00168980(u32 id);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);
void texOwner1480Free(u32 *member);
void texSetRelease(void);
void asdMemFree(void *memory);
s32 jobStop(u32 job, s32 flag);


/* Shuts the scene down: runs the four clean-up calls, then stops its job, destroys its member and frees it. */
void naviMainShutdown(void)
{
    FUN_00168980(3);
    texSetRelease();
    campCommonBgRelease();
    campButtonHelpRelease();
    if (g_naviMain != NULL) {
        jobStop(g_naviMain->job, 0);
        texOwner1480Free(g_naviMain->request);
        asdMemFree(g_naviMain);
        g_naviMain = NULL;
    }
}

} /* extern "C" */
