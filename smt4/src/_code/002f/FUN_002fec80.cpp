/* NON_MATCHING: retail rematerializes the constant 1 for the state store instead of keeping it in a callee-saved register across the calls (saves r4-r6 only; ours pushes r4-r8). */
#include "shard/W4_W4Match2_UiQuest.h"
#include "util/CalleeContracts.h"

extern "C" {

void uiQuestLoadResources(void);
void FUN_0028fe0c(u32 questId, s32 mode);
void timerStart(void *timer, s32 key, s32 mode);

/* Switches the menu to a new state, remembering the old one. */
static __inline void uiQuestChangeState(s32 state)
{
    g_uiQuest->previousState = g_uiQuest->state;
    g_uiQuest->state = state;
    g_uiQuest->timer = 0;
}

/* Opens the quest detail for a quest id and switches the menu to state 1 (next state 0x1C). */
void FUN_002fec80(u32 questId)
{
    UiQuest *quest = g_uiQuest;

    quest->panel.unkF2 = 1;
    quest->panel.detailMode = FUN_00298f88(questId);
    quest->questId = questId;
    uiQuestLoadResources();
    FUN_0028fe0c(questId, 1);
    timerStart(quest->mainSprite, 0, 0);
    uiQuestChangeState(1);
    quest->nextState = 0x1C;
}

} /* extern "C" */
