#include "mapnavi/NaviMainGlobals.h"

extern "C" {

void texOwner1480Free(u32 *member);
void asdMemFree(void *memory);
s32 jobFind(u32 job);


/* Returns 1 while the scene's job is still found or the scene has not started running; otherwise destroys the scene and returns 0. */
u32 naviMainPollClose(void)
{
    NaviMainA *navi;
    s32 found;

    navi = g_naviMain;
    if (g_naviMain != NULL) {
        found = jobFind(g_naviMain->job);
        if ((found != 0) || (navi->closeRequested == 0)) {
            return 1;
        }
        if (g_naviMain != NULL) {
            texOwner1480Free(g_naviMain->request);
            asdMemFree(g_naviMain);
            g_naviMain = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
