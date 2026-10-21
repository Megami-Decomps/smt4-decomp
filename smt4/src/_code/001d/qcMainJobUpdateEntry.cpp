#include "quest_center/qcMain.h"

extern "C" {

extern QcGlobals g_qcMain;
extern void FUN_003844a0(u32 entry);

/* Updates the quest center's active entry and reports success. */
s32 qcMainJobUpdateEntry(void)
{
    if (g_qcMain.work != NULL && g_qcMain.work->entry != 0) {
        FUN_003844a0(g_qcMain.work->entry);
    }
    return 0;
}

} /* extern "C" */
