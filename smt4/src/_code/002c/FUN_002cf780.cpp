/* NON_MATCHING: built keeps the constant 1 in a callee-saved register across the calls (and orders the two selector results differently); retail re-materialises it */
#include "shard/W4_W4Match2_UiQuest.h"
#include "util/FUN_0029efa8.h"

extern "C" {

void uiQuestLoadResources(void);
s32 FUN_0029efc0(void *selector);
void FUN_0028fe0c(u32 id, s32 arg);
void timerStart(void *timer, s32 a, s32 b);

/* Opens the quest detail view for the selected list entry and switches the menu to state 1. */
void FUN_002cf780(void)
{
    UiQuest *quest = g_uiQuest;

    quest->panel.detailMode = 1;
    uiQuestLoadResources();
    s32 base = FUN_0029efc0(quest->panel.alternate.cursor);
    s32 offset = FUN_0029efa8(quest->panel.alternate.cursor);
    FUN_0028fe0c(quest->cursor.alternate.ids[offset + base], 1);
    timerStart(quest->mainSprite, 0, 0);
    quest = g_uiQuest;
    quest->previousState = quest->state;
    quest->state = 1;
    quest->timer = 0;
}

} /* extern "C" */
