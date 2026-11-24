#include "quest_center/qcMain.h"

extern "C" {

extern QcGlobals g_qcMain;
extern void titleDrawSceneOverlay(QuestEntry *entry);

/* Updates the quest center's active entry and reports success. */
s32 qcMainJobUpdateEntry(u32 handle)
{
    if (g_qcMain.work != NULL && g_qcMain.work->entry != 0) {
        titleDrawSceneOverlay(g_qcMain.work->entry);
    }
    return 0;
}

} /* extern "C" */
