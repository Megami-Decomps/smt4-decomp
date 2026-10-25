#include "quest_center/qcMain.h"

extern "C" {

int FUN_00384ad8(void *target);

extern QcGlobals g_qcMain;

s32 FUN_001fe19c(u32 handle)
{
    QcWork *target = g_qcMain.work;
    void *sub;

    if (target->mode == 1 || target->mode == 3 || target->mode == 4) {
        sub = NULL;
        if (target != NULL) {
            sub = (void *)target->entry;
        }
        if (target != NULL && sub != NULL) {
            FUN_00384ad8(sub);
        }
    }
    return 0;
}

} /* extern "C" */
