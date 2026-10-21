/* NON_MATCHING: retail uses a different error-test or return scheduling. */
#include "common.h"
extern "C" {
s32 FUN_00360908(s8 *output, s32 second, s32 third, s32 fourth);
void asdFatalError(s32 result);
/* Returns the queried byte, reporting a fatal error on a negative result. */
s32 FUN_0036051c(s32 first, s32 second, s32 third, s32 fourth)
{
    s8 output;
    s32 result = FUN_00360908(&output, second, third, fourth);
    if ((u32)result >> 31)
        asdFatalError(result);
    return output;
}
}
