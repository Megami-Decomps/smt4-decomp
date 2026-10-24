/* Polls quest-center shutdown, releasing its work once the task has finished. */
#include "quest_center/qcMain.h"

extern "C" {

int scriptPanelRelease(QuestEntry *entry);
int asdMemFree(void *ptr);
int asdOperatorDelete(void *ptr);
int jobFind(u32 task);

extern QcGlobalsA g_qcMain;

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
            if (work->entry != NULL) {
                scriptPanelRelease(work->entry);
                asdOperatorDelete(work->entry);
                work->entry = NULL;
            }
            asdMemFree(g_qcMain.work);
            g_qcMain.work = NULL;
        }
    }
    return 0;
}

}
