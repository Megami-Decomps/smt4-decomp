#include "common.h"

extern "C" {

u32 QuestCenter_GetActiveEntry(void);
u32 questStateGetMessageDisplayMode(u32 entry);
void scrCommMessageShowWithKind(u32 kind);

/* Passes the active quest entry's message kind on to scrCommMessageShowWithKind, the script command body that follows it. */
void scrComm_Message_ShowFromQuestState(void)
{
    scrCommMessageShowWithKind(questStateGetMessageDisplayMode(QuestCenter_GetActiveEntry()) & 0xff);
}

} /* extern "C" */
