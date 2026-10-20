/* NON_MATCHING: instruction order only (retail keeps the zero arguments in ip and stores them after the argument moves). */
#include "common.h"

extern "C" {

s32 scrGetArg(...);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 owner, s32 arg, u32 frame, s32 type, s32 arg4, s32 arg5);

/* Script command body: queues command type 7 for `owner` with the current script argument and frame. */
void FUN_002e4828(u32 owner)
{
    s32 arg = scrGetArg(0);

    FUN_0021bdac(owner, arg, scrGetCommandFrame(), 7, 0, 0);
}

} /* extern "C" */
