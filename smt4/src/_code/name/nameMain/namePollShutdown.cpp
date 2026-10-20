/* Polls the name entry screen's shutdown: returns 1 while its task is still running or hasn't
 * finished, otherwise frees the work area and returns 0. */
#include "common.h"
#include "name/nameMain.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobFind(u32 task);                  /* nonzero while the task exists */

extern NameGlobals g_name;

u32 namePollShutdown(void)
{
    NameWork *work = g_name.work;

    if (g_name.work != NULL) {
        if (jobFind(work->task) != 0 || !work->done) {
            return 1;
        }
        if (g_name.work != NULL) {
            asdMemFree(g_name.work);
            g_name.work = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
