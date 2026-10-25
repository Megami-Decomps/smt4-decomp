#include "quest_center/QuestRegistration.h"

extern "C" {

u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
void jyoucyuGetTableEntry(s32 index);
void questCenterInitialize(const QuestRegistration *request, u32 size);
s32 stateAt4IsAbove2(void);
void *QuestCenter_GetActiveEntry(void);

/* Script command: opens the quest center with its two arguments on the first frame; returns whether an entry is active and past state 2. */
u32 FUN_003b0684(void)
{
    if (scrGetCommandFrame() == 0) {
        u32 first = scrGetArg(0);
        u32 second = scrGetArg(1);

        jyoucyuGetTableEntry(0);
        QuestRegistration request(first, second, 1);
        questCenterInitialize(&request, sizeof(request));
    }
    if (QuestCenter_GetActiveEntry() != NULL && stateAt4IsAbove2() != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
