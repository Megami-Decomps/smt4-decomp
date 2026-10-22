/* Polls the bible screen's shutdown: returns 1 while its task is running or hasn't finished;
 * otherwise tears the screen down (view, work area) and returns 0. */
#include "common.h"
#include "bible/bibleMain.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobFind(u32 task);                /* nonzero while the task exists */

extern BibleGlobals g_bible;

u32 biblePollShutdown(void)
{
    BibleWork *work = g_bible.work;

    if (work != NULL) {
        if (jobFind(work->task) != 0 || work->done == 0) {
            return 1;
        }
        work = g_bible.work;
        if (work != NULL) {
            work->done = 1;
            g_bible.mode = -1;
            if (work->view != NULL) {
                work->view->stop();
                if (work->view != NULL) {
                    delete work->view;
                }
                work->view = NULL;
            }
            asdMemFree(g_bible.work);
            g_bible.work = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
