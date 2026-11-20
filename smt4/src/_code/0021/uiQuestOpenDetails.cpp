#include "code/Code001b.h"
#include "shard/W4_W4Match2_UiQuest.h"
#include "quest_center/QuestRecord.h"

extern "C" {
void uiQuestLoadResources(void);
void FUN_0028fe0c(u32 questId, s32 enabled);
void uiSpriteSetKeyframe(void *sprite, s32 animation, s32 frame); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Opens quest details and selects the detail layout indicated by the quest flags. */
void uiQuestOpenDetails(u32 questId)
{
    UiQuest *work = g_uiQuest;
    work->panelView.panel.unkF2 = 1;
    work->panelView.panel.detailMode = dataTable1bOr1cRecordHasFlag1(questId);
    work->questId = questId;
    uiQuestLoadResources();
    FUN_0028fe0c(questId, 1);
    uiSpriteSetKeyframe(work->mainSprite, 0, 0);
    uiQuestEnterState(g_uiQuest, 1);
    work->nextState = 0x1D;
    QuestRecord *record = questDataGetRecord(questId);
    if (record->flags & 0x40) {
        work->panelView.panel.selection = 2;
    } else {
        work->panelView.panel.selection = 1;
    }
}
}
