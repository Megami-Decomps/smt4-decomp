#include "common.h"

extern "C" {

void *QuestCenter_GetActiveEntry(void);
u32 FUN_00468858(void *entry);
void FUN_0039a6a4(u8 state);

/* Show the quest's message once its state is known. */
void scrComm_Message_ShowFromQuestStateWaitLock(void)
{
    FUN_0039a6a4(FUN_00468858(QuestCenter_GetActiveEntry()));
}

} /* extern "C" */
