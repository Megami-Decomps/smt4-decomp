/* Polls the resident module's shutdown: returns 1 while its task is still running or hasn't
 * finished, otherwise frees the work area and returns 0. */
#include "common.h"
#include "kernel/jyoucyu.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobFind(u32 task);                  /* nonzero while the task exists */

extern JyoucyuGlobals g_jyoucyu;

u32 jyoucyuPollShutdown(void)
{
    JyoucyuWork *work = g_jyoucyu.work;

    if (g_jyoucyu.work != NULL) {
        if (jobFind(work->task) != 0 || !work->done) {
            return 1;
        }
        if (g_jyoucyu.work != NULL) {
            asdMemFree(g_jyoucyu.work);
            g_jyoucyu.work = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
