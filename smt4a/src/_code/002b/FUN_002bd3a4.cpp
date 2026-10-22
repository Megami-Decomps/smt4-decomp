#include "quest_center/qcMain.h"

extern "C" {

void FUN_0046b068(void);

extern QcGlobalsA g_qcMain;

/* When the target's mode is 1, 3 or 4 and it has a handle, runs FUN_0046b068; always returns 0. */
u32 FUN_002bd3a4(void)
{
    u8 mode;
    QcWork *target;
    QuestEntry *handle;

    target = g_qcMain.work;
    mode = target->mode;
    if ((mode == 1 || mode == 3) || mode == 4) {
        handle = 0;
        if (target != NULL) {
            handle = target->entry;
        }
        if (target != NULL && handle != 0) {
            FUN_0046b068();
        }
    }
    return 0;
}

} /* extern "C" */
