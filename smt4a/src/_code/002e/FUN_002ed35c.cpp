#include "gamedata/RosterUnlock.h"
#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
/* Script command: resets the flag entry named by its first argument. */
s32 FUN_002ed35c(void)
{
    gameFlagUnlockEntryById(scrGetArg(0));
    return 1;
}
}
