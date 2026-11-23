#include "shard/W4_W4Match2_UiQuest.h"
#include "code/Code0029.h"
#include "code/Code001b.h"

extern "C" {

void uiQuestLoadResources(void);
void uiQuestLoadDetailText(u32 questId, s32 mode);
void uiSpriteSetKeyframe(void *timer, s32 key, s32 mode); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Opens the quest detail for a quest id and switches the menu to state 1 (next state 0x1C). */
void FUN_002fec80(u32 questId)
{
    UiQuest *quest = g_uiQuest;

    quest->panelView.panel.unkF2 = 1;
    quest->panelView.panel.detailMode = dataTable1bOr1cRecordHasFlag1(questId);
    quest->questId = questId;
    uiQuestLoadResources();
    uiQuestLoadDetailText(questId, 1);
    uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
    uiQuestEnterState(g_uiQuest, 1);
    quest->nextState = 0x1C;
}

} /* extern "C" */
