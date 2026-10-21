/* NON_MATCHING: retail helper argument lifetime or state-store scheduling differs. */
#include "common.h"

extern "C" {
s32 FUN_003609f8(s32 first, s32 second, s32 third, s32 fourth);
void asdFatalError(s32 result);
/* Runs the operation and reports fatal failures. */
void FUN_003605b0(s32 first, s32 second, s32 third, s32 fourth)
{
    s32 result = FUN_003609f8(first, second, third, fourth);
    if (result < 0)
        asdFatalError(result);
}
}
