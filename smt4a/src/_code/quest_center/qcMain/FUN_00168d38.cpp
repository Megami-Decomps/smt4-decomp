/* NON_MATCHING: retail uses push {r4, r5, r6, r7, r8, lr} where the compiled block uses push {r4, r5, r6, lr}. */
#include "shard/W5_W5Match5_QuestCenter.h"

extern "C" {
u32 jobFind(u32 task);
void FUN_001919a4(QuestEntry *entry);
void asdOperatorDelete(void *memory);
void asdMemFree(void *memory);
u32 FUN_0019196c(QuestEntry *entry, u32 parameter);
u32 FUN_00191848(QuestEntry *entry);

u32 FUN_00168d38(u32 parameter)
{
    QuestWork *work = g_qcMain.work;
    if (work == NULL) {
        return 0;
    }

    if (jobFind(work->job) == 0 && work->closing != 0) {
        work = g_qcMain.work;
        if (work == NULL) {
            return 0;
        }

        QuestEntry *entry = work->entry;
        work->closing = 1;
        if (entry != NULL) {
            FUN_001919a4(entry);
            asdOperatorDelete(work->entry);
            work->entry = NULL;
        }
        asdMemFree(g_qcMain.work);
        g_qcMain.work = NULL;
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
    return FUN_00191848(work->entry) != 0 ? 1u : 0u;
}
}
