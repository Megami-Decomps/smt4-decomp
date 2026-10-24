#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 questResetEligibleEntriesMatchingValue(s32 value);

/* Script command: resets the quest entries matching the argument and returns the result. */
u32 scrComm_Quest_ResetEntriesMatchingValue(void)
{
    scrSetResult(questResetEligibleEntriesMatchingValue(scrGetArg(0)));
    return 1;
}

} /* extern "C" */
