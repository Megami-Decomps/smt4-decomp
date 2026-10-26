/* NON_MATCHING: the registers match (zero r6, &g_bible r5); only the exit blocks differ: retail sets r0 = 1 once before both branches that share the final eor, build puts it in a separate block (`mov r0, #1; b`) and loads 0 for the fall-through exit. */
/* The same shutdown poll as biblePollShutdown with the result inverted: returns 0 while the bible
 * screen is still running, 1 once it is gone. */
#include "common.h"
#include "bible/bibleMain.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */

extern BibleGlobals g_bible;

static __inline u32 bibleIsRunning(void)
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

u32 bibleIsClosed(void)
{
    bool running = bibleIsRunning() != 0;
    return !running;
}

} /* extern "C" */
