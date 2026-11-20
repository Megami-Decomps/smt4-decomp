#include "common.h"

extern "C" {

void *QuestCenter_GetActiveEntry(void);
u32 questStateGetMessageDisplayMode(void *entry);
void scrMessageShowLockedForQuestState(u8 state);

/* Show the quest's message once its state is known. */
void scrComm_Message_ShowFromQuestStateWaitLock(void)
{
    scrMessageShowLockedForQuestState(questStateGetMessageDisplayMode(QuestCenter_GetActiveEntry()));
}

} /* extern "C" */
