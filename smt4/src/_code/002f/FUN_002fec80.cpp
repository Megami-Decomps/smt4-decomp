#include "shard/W4_W4Match2_UiQuest.h"
#include "code/Code0029.h"

extern "C" {

void uiQuestLoadResources(void);
void FUN_0028fe0c(u32 questId, s32 mode);
void timerStart(void *timer, s32 key, s32 mode);

/* Opens the quest detail for a quest id and switches the menu to state 1 (next state 0x1C). */
void FUN_002fec80(u32 questId)
{
    UiQuest *quest = g_uiQuest;

    quest->panelView.panel.unkF2 = 1;
    quest->panelView.panel.detailMode = FUN_00298f88(questId);
    quest->questId = questId;
    uiQuestLoadResources();
    FUN_0028fe0c(questId, 1);
    timerStart(quest->mainSprite, 0, 0);
    uiQuestEnterState(g_uiQuest, 1);
    quest->nextState = 0x1C;
}

} /* extern "C" */
