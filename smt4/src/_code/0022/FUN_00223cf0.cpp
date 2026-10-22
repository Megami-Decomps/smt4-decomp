/* NON_MATCHING: the state change stores as add+stm with the timer first; retail writes stmib with writeback and the timer through it. */
#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

void uiQuestLoadResources(void);
void FUN_0028fe0c(u16 id, s32 mode);
void FUN_00290d5c(s32 sound);
s32 FUN_0029efa8(void *cursor);
s32 FUN_0029efc0(void *cursor);
void timerStart(void *timer, s32 a, s32 b);

/* Switch the quest menu to a new state, remembering the old one and restarting its timer. */
static void uiQuestChangeState(s32 state)
{
    UiQuest *quest = g_uiQuest;
    s32 previous = quest->state;

    quest->state = state;
    quest->previousState = previous;
    quest->timer = 0;
}

/* Leave the quest detail view: open the selected quest, or go back from state 13 with a cancel sound. */
void FUN_00223cf0(void)
{
    UiQuest *quest = g_uiQuest;

    quest->panel.detailMode = 0;
    if (quest->state != 13) {
        uiQuestLoadResources();
        FUN_0028fe0c(quest->list[FUN_0029efc0(quest->cursor.data) + FUN_0029efa8(quest->cursor.data)], 1);
        timerStart(quest->mainSprite, 0, 0);
        uiQuestChangeState(1);
        return;
    }
    timerStart(quest->mainSprite, 2, 0);
    uiQuestChangeState(3);
    FUN_00290d5c(0xa0);
}

} /* extern "C" */
