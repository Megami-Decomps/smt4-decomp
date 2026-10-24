#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 gameFlagIsSet(u32 flag);

/* Script command: returns whether the game flag named by the argument is set. */
u32 scrComm_Game_IsFlagSet(void)
{
    scrSetResult(gameFlagIsSet(scrGetArg(0)));
    return 1;
}

} /* extern "C" */
