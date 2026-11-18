#include "shard/W4_W4Match2_UiQuest.h"
#include "quest_center/QuestRecord.h"

extern "C" {
void uiQuestLoadResources(void);
void FUN_0028fe0c(u32 questId, s32 enabled);
u32 FUN_00298f88(u32 questId);
void timerStart(void *sprite, s32 animation, s32 frame);

/* Opens quest details and selects the detail layout indicated by the quest flags. */
void FUN_00215cd4(u32 questId)
{
    UiQuest *work = g_uiQuest;
    work->panel.unkF2 = 1;
    work->panel.detailMode = FUN_00298f88(questId);
    work->questId = questId;
    uiQuestLoadResources();
    FUN_0028fe0c(questId, 1);
    timerStart(work->mainSprite, 0, 0);
    uiQuestEnterState(g_uiQuest, 1);
    work->nextState = 0x1D;
    QuestRecord *record = questDataGetRecord(questId);
    if (record->flags & 0x40) {
        work->panel.selection = 2;
    } else {
        work->panel.selection = 1;
    }
}
}
