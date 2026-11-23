/* NON_MATCHING: retail materializes zero at entry and one after jobFind; the build materializes both near the done store and compares entry before that store. */
/* Polls the quest center's shutdown: while its task is running or hasn't finished returns the
 * current result byte; otherwise releases the active entry, frees the work area and returns -1. */
#include "common.h"
#include "quest_center/qcMain.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int scriptPanelRelease(QuestEntry *entry);
int jobFind(u32 task);                /* nonzero while the task exists */

extern QcGlobalsA g_qcMain;

s32 FUN_002de9d8(void)
{
    QcWork *work = g_qcMain.work;

    if (work != NULL) {
        if (jobFind(work->task) != 0 || work->done == 0) {
            return (s8)g_qcMain.entryId;
        }
        work = g_qcMain.work;
        if (work != NULL) {
            work->done = 1;
            if (work->entry != 0) {
                scriptPanelRelease(work->entry);
                asdOperatorDelete(work->entry);
                work->entry = 0;
            }
            asdMemFree(g_qcMain.work);
            g_qcMain.work = NULL;
        }
    }
    return -1;
}

} /* extern "C" */
