#include "common.h"

extern "C" {

u32 QuestCenter_GetActiveEntry(void);
u32 FUN_003821b8(u32 entry);
void FUN_002d7b64(u32 kind);

/* Passes the active quest entry's message kind on to FUN_002d7b64, the script command body that follows it. */
void scrComm_Message_ShowFromQuestState(void)
{
    FUN_002d7b64(FUN_003821b8(QuestCenter_GetActiveEntry()) & 0xff);
}

} /* extern "C" */
