/* Polls the terminal's shutdown: returns 1 while its task is still running or hasn't
 * finished, otherwise frees the work area and returns 0. */
#include "common.h"
#include "Terminal/tmnlMain.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobIsValid(u32 task);                  /* nonzero while the task exists */

extern TmnlWork *g_tmnl;

u32 tmnlPollShutdown(void)
{
    TmnlWork *work = g_tmnl;

    if (g_tmnl != NULL) {
        if (jobIsValid(work->task) != 0 || !work->done) {
            return 1;
        }
        if (g_tmnl != NULL) {
            asdMemFree(g_tmnl);
            g_tmnl = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
