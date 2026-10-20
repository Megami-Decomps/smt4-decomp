/* Polls the bust-up viewer's shutdown: returns 1 while its task is still running or hasn't
 * finished, otherwise frees the work area and returns 0. */
#include "common.h"
#include "test/BustupViewer.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobFind(u32 task);                  /* nonzero while the task exists */

extern BustupViewerWork *g_bustupViewer;

u32 bustupViewerPollShutdown(void)
{
    BustupViewerWork *work = g_bustupViewer;

    if (g_bustupViewer != NULL) {
        if (jobFind(work->task) != 0 || !work->done) {
            return 1;
        }
        if (g_bustupViewer != NULL) {
            asdMemFree(g_bustupViewer);
            g_bustupViewer = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
