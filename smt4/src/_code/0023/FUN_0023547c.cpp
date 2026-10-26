/* NON_MATCHING: the state change stores as str timer + add + stm; retail writes stmib with writeback and the timer through it (same as FUN_00223cf0). */
#include "shard/W4_W4Match2_UiQuest.h"
#include "util/FUN_0029efa8.h"

extern "C" {

void FUN_00189c24(void);
void uiQuestLoadResources(void);
void FUN_0028fe0c(u16 id, s32 mode);
void FUN_00290d5c(s32 sound);
s32 FUN_0029efc0(void *cursor);
void timerStart(void *timer, s32 a, s32 b);

/* Switch the quest menu to a new state, remembering the old one and restarting its timer. */
static void uiQuestChangeState(s32 state)
{
    UiQuest *quest = g_uiQuest;

    quest->previousState = quest->state;
    quest->state = state;
    quest->timer = 0;
}

/* Answer the quest confirmation with `choice`, then leave the detail view: open the selected quest,
 * or go back from state 13 with a cancel sound. */
void FUN_0023547c(u8 choice)
{
    UiQuest *quest = g_uiQuest;

    quest->panel.confirming = 1;
    quest->panel.choice = choice;
    FUN_00189c24();
    quest = g_uiQuest;
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
