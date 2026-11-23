#include "shard/W4_W4Match2_UiQuest.h"
#include "code/Code0029_VariantB.h"

extern "C" {

void uiQuestRebuildLists(void);
void uiQuestLoadResources(void);
void uiQuestLoadDetailText(u16 id, s32 mode);
void buttonHelpWorkSetPreset(s32 sound);
s32 resourceRunOperationIfUnblocked(void *cursor);
void uiSpriteSetKeyframe(void *timer, s32 a, s32 b); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Answer the quest confirmation with `choice`, then leave the detail view: open the selected quest,
 * or go back from state 13 with a cancel sound. */
void uiQuestAnswerConfirm(s8 choice)
{
    UiQuest *quest = g_uiQuest;

    quest->panelView.panel.confirming = 1;
    quest->panelView.panel.choice = choice;
    uiQuestRebuildLists();
    quest = g_uiQuest;
    quest->panelView.panel.detailMode = 0;
    if (quest->state != 13) {
        uiQuestLoadResources();
        uiQuestLoadDetailText(quest->list[resourceRunOperationIfUnblocked(quest->cursor.data) + listCursorGetRowIfUnblocked(quest->cursor.data)], 1);
        uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
        uiQuestEnterState(g_uiQuest, 1);
        return;
    }
    uiSpriteSetKeyframe(quest->mainSprite, 2, 0);
    uiQuestEnterState(g_uiQuest, 3);
    buttonHelpWorkSetPreset(0xa0);
}

} /* extern "C" */
