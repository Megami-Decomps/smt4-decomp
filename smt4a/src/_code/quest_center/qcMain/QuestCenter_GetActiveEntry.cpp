/* Returns the quest center's active entry, or 0 when it is not open. */
#include "common.h"
#include "quest_center/qcMain.h"

extern "C" {

extern QcGlobals g_qcMain;

s32 QuestCenter_GetActiveEntry(void)
{
    QcWork *work = g_qcMain.work;

    if (work != NULL && work->entry != 0) {
        return reinterpret_cast<s32>(work->entry);
    }
    return 0;
}

} /* extern "C" */
