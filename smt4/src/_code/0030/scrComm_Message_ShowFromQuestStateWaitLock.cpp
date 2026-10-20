#include "common.h"

extern "C" {

void *QuestCenter_GetActiveEntry(void);
u32 FUN_003821b8(void *entry);
void FUN_0030a02c(u8 state);

/* Show the quest's message once its state is known. */
void scrComm_Message_ShowFromQuestStateWaitLock(void)
{
    FUN_0030a02c(FUN_003821b8(QuestCenter_GetActiveEntry()));
}

} /* extern "C" */
