/* Polls the local terminal's shutdown: returns 1 while its task is still running or hasn't
 * finished, otherwise frees the work area and returns 0. */
#include "common.h"
#include "Terminal/LocaltmnlMain.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobIsValid(u32 task);                  /* nonzero while the task exists */

extern LocalTmnlWork *g_localTmnl;

u32 localtmnlPollShutdown(void)
{
    LocalTmnlWork *work = g_localTmnl;

    if (g_localTmnl != NULL) {
        if (jobIsValid(work->task) != 0 || !work->done) {
            return 1;
        }
        if (g_localTmnl != NULL) {
            asdMemFree(g_localTmnl);
            g_localTmnl = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
