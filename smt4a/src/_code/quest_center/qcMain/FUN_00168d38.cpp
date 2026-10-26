/* NON_MATCHING: control flow now matches (shared return 0, nop/b); retail hoists the constants 0 (r7) and 1 (r1) to the top and so pushes r7/r8. */
#include "quest_center/qcMain.h"
extern "C" QcGlobalsA g_qcMain;

extern "C" {
u32 jobFind(u32 task);
void scriptPanelRelease(QuestEntry *entry);
void asdOperatorDelete(void *memory);
void asdMemFree(void *memory);
u32 FUN_0019196c(QuestEntry *entry, u32 parameter);
u32 itemCategoryHasUsableEntry(QuestEntry *entry);

u32 FUN_00168d38(u32 parameter)
{
    QcWork *work = g_qcMain.work;
    if (work == NULL) {
        return 0;
    }

    if (jobFind(work->task) == 0 && work->done != 0) {
        work = g_qcMain.work;
        if (work != NULL) {
            QuestEntry *entry = work->entry;
            work->done = 1;
            if (entry != NULL) {
                scriptPanelRelease(entry);
                asdOperatorDelete(work->entry);
                work->entry = NULL;
            }
            asdMemFree(g_qcMain.work);
            g_qcMain.work = NULL;
        }
        return 0;
    }

    work = g_qcMain.work;
    if (work == NULL) {
        return 0;
    }
    if (work->entry == NULL) {
        return 0;
    }
    if (FUN_0019196c(work->entry, parameter) == 0) {
        return 0;
    }
    return itemCategoryHasUsableEntry(work->entry) != 0 ? 1u : 0u;
}
}
