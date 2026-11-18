#include "shard/W4_W4Match2_UiQuest.h"
#include "code/Code0029_VariantB.h"

extern "C" {

void uiQuestLoadResources(void);
void FUN_0028fe0c(u16 id, s32 mode);
void FUN_00290d5c(s32 sound);
s32 resourceRunOperationIfUnblocked(void *cursor);
void timerStart(void *timer, s32 a, s32 b);

/* Leave the quest detail view: open the selected quest, or go back from state 13 with a cancel sound. */
void FUN_00223cf0(void)
{
    UiQuest *quest = g_uiQuest;

    quest->panel.detailMode = 0;
    if (quest->state != 13) {
        uiQuestLoadResources();
        FUN_0028fe0c(quest->list[resourceRunOperationIfUnblocked(quest->cursor.data) + listCursorGetRowIfUnblocked(quest->cursor.data)], 1);
        timerStart(quest->mainSprite, 0, 0);
        uiQuestEnterState(g_uiQuest, 1);
        return;
    }
    timerStart(quest->mainSprite, 2, 0);
    uiQuestEnterState(g_uiQuest, 3);
    FUN_00290d5c(0xa0);
}

} /* extern "C" */
