#include "common.h"

extern "C" {

u32 QuestCenter_GetActiveEntry(void);
u32 FUN_00468858(u32 entry);
void FUN_003456cc(u32 kind);

/* Passes the active quest entry's message kind on to FUN_003456cc, the script command body that follows it. */
void scrComm_Message_ShowFromQuestState(void)
{
    FUN_003456cc(FUN_00468858(QuestCenter_GetActiveEntry()) & 0xff);
}

} /* extern "C" */
