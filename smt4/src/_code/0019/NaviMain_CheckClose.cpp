#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

int FUN_00291730(u32 *block);
int asdMemFree(void *ptr);
extern int jobFind(u32 job);

/* Returns 1 while the navi job is running (or no close was requested); otherwise frees the state and returns 0. */
u32 NaviMain_CheckClose(void)
{
    NaviMain *navi = g_naviMain;

    if (g_naviMain != NULL) {
        if ((jobFind(g_naviMain->job) != 0) || (navi->closeRequested == 0)) {
            return 1;
        }
        if (g_naviMain != NULL) {
            FUN_00291730(g_naviMain->state);
            asdMemFree(g_naviMain);
            g_naviMain = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
