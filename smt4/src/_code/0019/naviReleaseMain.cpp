#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

int naviReleaseTextureNode(u32 *block);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int soundRequestEnd(void);
int buttonHelpSetContext(int mode);
int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

void naviReleaseMain(void)
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
