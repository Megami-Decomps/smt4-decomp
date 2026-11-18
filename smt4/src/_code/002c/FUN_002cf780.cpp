#include "shard/W4_W4Match2_UiQuest.h"
#include "code/Code0029_VariantB.h"

extern "C" {

void uiQuestLoadResources(void);
s32 resourceRunOperationIfUnblocked(void *selector);
void FUN_0028fe0c(u32 id, s32 arg);
void timerStart(void *timer, s32 a, s32 b);

/* Opens the quest detail view for the selected list entry and switches the menu to state 1. */
void FUN_002cf780(void)
{
    UiQuest *quest = g_uiQuest;

    quest->panelView.panel.detailMode = 1;
    uiQuestLoadResources();
    FUN_0028fe0c(quest->cursor.alternate.ids[resourceRunOperationIfUnblocked(quest->panelView.panel.alternate.cursor) +
                                             listCursorGetRowIfUnblocked(quest->panelView.panel.alternate.cursor)], 1);
    timerStart(quest->mainSprite, 0, 0);
    uiQuestEnterState(g_uiQuest, 1);
}

} /* extern "C" */
