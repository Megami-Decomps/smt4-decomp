#include "title/titleMain.h"

extern "C" {

void asdMemFree(void *block);
s32 jobFind(u32 job);

extern TitleMain *g_titleMain;

/* Returns 1 while the title job runs or the block is to be kept; otherwise frees the block
 * and returns 0. */
s32 titleMainIsRunning(void)
{
    TitleMain *title = g_titleMain;

    if (g_titleMain != NULL) {
        if (jobFind(g_titleMain->job) != 0 || title->freeOnEnd == 0) {
            return 1;
        }
        if (g_titleMain != NULL) {
            asdMemFree(g_titleMain);
            g_titleMain = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
