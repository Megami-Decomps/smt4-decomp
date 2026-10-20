/* Polls the terminal's shutdown: returns 1 while its task is still running or hasn't
 * finished, otherwise frees the work area and returns 0. */
#include "common.h"
#include "Terminal/tmnlMain.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobIsValid(u32 task);                  /* nonzero while the task exists */

extern TmnlGlobalsA g_tmnl;

u32 tmnlPollShutdown(void)
{
    TmnlWorkA *work = g_tmnl.work;

    if (g_tmnl.work != NULL) {
        if (jobIsValid(work->task) != 0 || !work->done) {
            return 1;
        }
        if (g_tmnl.work != NULL) {
            asdMemFree(g_tmnl.work);
            g_tmnl.work = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
