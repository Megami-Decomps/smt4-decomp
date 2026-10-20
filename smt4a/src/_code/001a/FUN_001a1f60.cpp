/* NON_MATCHING: build hoists the 10 ms sleep constant out of the loop (r6), retail loads it inside the branch. */
#include "common.h"
#include "nn/Result.h"

extern "C" {

s32 FUN_0017145c(u32 arg0, u32 arg1);
void svcSleepThread(u32 nanosecondsLow, u32 nanosecondsHigh);

#define RESULT_DONE 0xC8A0CFFC   /* error result that ends the retry loop like a success */
#define RESULT_BUSY 0xE0A0CC08   /* error result: sleep, then retry */

/* Calls FUN_0017145c until it succeeds (or reports RESULT_DONE), sleeping 10 ms after RESULT_BUSY. */
void FUN_001a1f60(void)
{
    for (;;) {
        s32 result = FUN_0017145c(0, 0);

        if (!nnResultIsFailure(result) || result == (s32)RESULT_DONE) {
            break;
        }
        if (result == (s32)RESULT_BUSY) {
            svcSleepThread(10000000, 0);
        }
    }
}

} /* extern "C" */
