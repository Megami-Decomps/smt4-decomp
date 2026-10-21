/* NON_MATCHING: retail uses `mov r0, #0` where armcc emits `mov r0, #0`. */
#include "common.h"

extern "C" {

void scrSetResult(s32 result);

s32 scrCommSetResultZero(void)
{
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
