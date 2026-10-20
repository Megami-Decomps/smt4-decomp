#include "title/titleMain.h"

extern "C" {

void asdMemFree(void *block);
s32 jobFind(u32 job);

extern TitleMainGlobals g_titleMain;

/* Returns 1 while the title job runs or the block is to be kept; otherwise frees the block
 * and returns 0. */
s32 titleMainIsRunning(void)
{
    TitleMain *title = g_titleMain.title;

    if (g_titleMain.title != NULL) {
        if (jobFind(g_titleMain.title->job) != 0 || title->freeOnEnd == 0) {
            return 1;
        }
        if (g_titleMain.title != NULL) {
            asdMemFree(g_titleMain.title);
            g_titleMain.title = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
