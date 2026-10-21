#include "shard/W5_W5Match5_QuestCenter.h"

extern "C" {

void FUN_0046a868(QuestEntry *entry);
s32 FUN_0027db84(void)
{
    if (g_qcMain.work != NULL && g_qcMain.work->entry != NULL) {
        FUN_0046a868(g_qcMain.work->entry);
    }
    return 0;
}

} /* extern "C" */
