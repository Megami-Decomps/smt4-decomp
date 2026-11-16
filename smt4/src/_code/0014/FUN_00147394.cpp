#include "nn/fnd/TimeSpan.h"
#include "common.h"
#include "nn/Result.h"

extern "C" {

s32 FUN_002c1148(u32 arg0, u32 arg1);
void threadSleepDuration(nn::fnd::TimeSpan span);

#define RESULT_DONE 0xC8A0CFFC   /* error result that ends the retry loop like a success */
#define RESULT_BUSY 0xE0A0CC08   /* error result: sleep, then retry */

/* Calls FUN_002c1148 until it succeeds (or reports RESULT_DONE), sleeping 10 ms after RESULT_BUSY. */
void FUN_00147394(void)
{
    for (;;) {
        s32 result = FUN_002c1148(0, 0);

        if (!nnResultIsFailure(result) || result == (s32)RESULT_DONE) {
            break;
        }
        if (result == (s32)RESULT_BUSY) {
            threadSleepDuration(nn::fnd::TimeSpan::FromMilliSeconds(10));
        }
    }
}

} /* extern "C" */
