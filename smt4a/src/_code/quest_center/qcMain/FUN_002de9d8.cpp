/* NON_MATCHING: the load of work->entry is scheduled above the store of done here; retail stores first and loads afterwards */
/* Polls the quest center's shutdown: while its task is running or hasn't finished returns the
 * current result byte; otherwise releases the active entry, frees the work area and returns -1. */
#include "common.h"
#include "quest_center/qcMain.h"

extern "C" {

int FUN_001919a4(void);
int asdMemFree(void *ptr);               /* heap free */
int jobFind(u32 task);                /* nonzero while the task exists */
int FUN_002e3328(u32 entry);

extern QcGlobalsA DAT_00588c30;

s32 FUN_002de9d8(void)
{
    QcWork *work = DAT_00588c30.work;

    if (work != NULL) {
        if (jobFind(work->task) != 0 || work->done == 0) {
            return DAT_00588c30.result;
        }
        work = DAT_00588c30.work;
        if (work != NULL) {
            work->done = 1;
            if (work->entry != 0) {
                FUN_001919a4();
                FUN_002e3328(work->entry);
                work->entry = 0;
            }
            asdMemFree(DAT_00588c30.work);
            DAT_00588c30.work = NULL;
        }
    }
    return -1;
}

} /* extern "C" */
