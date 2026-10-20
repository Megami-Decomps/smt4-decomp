/* NON_MATCHING: the load of work->entry is scheduled above the store of done here; retail stores first and loads afterwards */
/* Polls the quest center's shutdown: returns 1 while its task is running or hasn't finished;
 * otherwise releases the active entry, frees the work area and returns 0. */
#include "common.h"
#include "quest_center/qcMain.h"

extern "C" {

int FUN_002a6fb8(void);
int FUN_002b2368(u32 entry);
int jobFind(u32 task);                /* nonzero while the task exists */
int asdMemFree(void *ptr);               /* heap free */

extern QcGlobals g_qcMain;

u32 QuestCenterMode_IsBusy(void)
{
    QcWork *work = g_qcMain.work;

    if (work != NULL) {
        if (jobFind(work->task) != 0 || work->done == 0) {
            return 1;
        }
        work = g_qcMain.work;
        if (work != NULL) {
            work->done = 1;
            if (work->entry != 0) {
                FUN_002a6fb8();
                FUN_002b2368(work->entry);
                work->entry = 0;
            }
            asdMemFree(g_qcMain.work);
            g_qcMain.work = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
