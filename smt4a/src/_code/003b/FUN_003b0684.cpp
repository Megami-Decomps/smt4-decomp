/* NON_MATCHING: one register: retail materialises the request's enable flag 1 in r1 before the store, the build uses r0. */
#include "common.h"

extern "C" {

/* Request handed to the quest center: two script arguments and an enable flag. */
typedef struct QuestCenterRequest {
    /* 0x0 */ u32 first;
    /* 0x4 */ u32 second;
    /* 0x8 */ u32 enabled;
} QuestCenterRequest;

u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
void jyoucyuGetTableEntry(s32 index);
void questCenterInitialize(void *request, u32 size);
s32 stateAt4IsAbove2(void);
void *QuestCenter_GetActiveEntry(void);

/* Script command: opens the quest center with its two arguments on the first frame; returns whether an entry is active and past state 2. */
u32 FUN_003b0684(void)
{
    if (scrGetCommandFrame() == 0) {
        u32 first = scrGetArg(0);
        u32 second = scrGetArg(1);

        jyoucyuGetTableEntry(0);
        QuestCenterRequest request;
        request.enabled = 1;
        request.first = first;
        request.second = second;
        questCenterInitialize(&request, sizeof(request));
    }
    if (QuestCenter_GetActiveEntry() != NULL && stateAt4IsAbove2() != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
