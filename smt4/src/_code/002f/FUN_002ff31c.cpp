/* NON_MATCHING: compiler allocates the saved maximum and result registers differently and combines the two comparisons. */
#include "common.h"


extern "C" {
u32 scrGetArg(u32 index);
void btlGetMainState(void);
s32 btlMainFindActiveEntry(void);
void scrSetResult(u32 value);
u32 FUN_002ff31c(void)
{
    u32 maximum = scrGetArg(0);
    btlGetMainState();
    u32 result = 0;
    if (btlMainFindActiveEntry() != 0) { result = 1; }
    if (result > maximum) { result = maximum; }
    scrSetResult(result);
    return 1;
}
}
