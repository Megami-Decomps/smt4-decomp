#include "quest_center/qcMain.h"

struct QuestEntry;

extern "C" {

extern QcGlobalsA g_qcMain;

void titleDrawSceneOverlay(QuestEntry *entry);
s32 qcMainRunEntryIfLoaded(void)
{
    if (g_qcMain.work != NULL && g_qcMain.work->entry != 0) {
        titleDrawSceneOverlay((QuestEntry *)g_qcMain.work->entry);
    }
    return 0;
}

} /* extern "C" */
