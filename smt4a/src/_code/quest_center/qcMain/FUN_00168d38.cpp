/* Polls the quest center with `param`: once its task has ended and it has finished, tears it
 * down (returns 0); while it runs, returns 1 if its active entry accepts `param` and is ready. */
#include "common.h"
#include "quest_center/qcMain.h"

extern "C" {

int FUN_001919a4(void);
int asdMemFree(void *ptr);               /* heap free */
int jobFind(u32 task);                /* nonzero while the task exists */
int FUN_002e3328(u32 entry);
extern int FUN_00191848(u32 entry);
extern int FUN_0019196c(u32 entry, u32 param);

extern QcGlobals g_qcMain;

u32 FUN_00168d38(u32 param)
{
    QcWork *work = g_qcMain.work;
    QcWork *current;
    u32 accepted;

    if (work != NULL) {
        int exists = jobFind(work->task);

        current = g_qcMain.work;
        if (exists == 0 && work->done != 0) {
            if (g_qcMain.work != NULL) {
                g_qcMain.work->done = 1;
                if (current->entry != 0) {
                    FUN_001919a4();
                    FUN_002e3328(current->entry);
                    current->entry = 0;
                }
                asdMemFree(g_qcMain.work);
                g_qcMain.work = NULL;
            }
        } else if (g_qcMain.work != NULL) {
            accepted = 0;
            if (g_qcMain.work->entry != 0 && FUN_0019196c(g_qcMain.work->entry, param) != 0 &&
                FUN_00191848(current->entry) != 0) {
                accepted = 1;
            }
            return accepted;
        }
    }
    return 0;
}

} /* extern "C" */
