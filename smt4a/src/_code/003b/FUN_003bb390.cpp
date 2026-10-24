#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
void tableFireMatchingEntriesThunk(u32 matchId);
/* Script command: fires the table entries matching its first argument. */
s32 FUN_003bb390(void)
{
    tableFireMatchingEntriesThunk(scrGetArg(0));
    return 1;
}
}
