#include "quest_center/qcMain.h"

struct QuestEntry;

extern "C" {

extern QcGlobalsA g_qcMain;

void FUN_0046a868(QuestEntry *entry);
s32 qcMainRunEntryIfLoaded(void)
{
    if (g_qcMain.work != NULL && g_qcMain.work->entry != 0) {
        FUN_0046a868((QuestEntry *)g_qcMain.work->entry);
    }
    return 0;
}

} /* extern "C" */
