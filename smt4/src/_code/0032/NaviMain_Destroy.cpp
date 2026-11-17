#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int naviReleaseTextureNode(u32 *block);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int soundRequestEnd(void);
int buttonHelpSetContext(int a);
int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

void NaviMain_Destroy(void)
{
    buttonHelpSetContext(3);
    soundRequestEnd();
    uiFadeRelease();
    buttonHelpRelease();
    if (g_naviMain != NULL) {
        jobStop(g_naviMain->job, 0);
        naviReleaseTextureNode(g_naviMain->state);
        asdMemFree(g_naviMain);
        g_naviMain = NULL;
    }
}

} /* extern "C" */
