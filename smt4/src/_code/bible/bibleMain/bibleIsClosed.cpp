/* NON_MATCHING: control flow matches (single exit through eor r0, r0, #1); only the register allocation differs: retail keeps zero in r6 and &g_bible in r5, built swaps them (`!bibleIsRunning()` fixes the registers but splits the exit). */
/* The same shutdown poll as biblePollShutdown with the result inverted: returns 0 while the bible
 * screen is still running, 1 once it is gone. */
#include "common.h"
#include "bible/bibleMain.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {


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
    return bibleIsRunning() ^ 1;
}

} /* extern "C" */
