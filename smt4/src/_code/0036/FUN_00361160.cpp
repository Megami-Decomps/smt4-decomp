#include "nn/fnd/TimeSpan.h"
#include "common.h"
#include "nn/Result.h"

extern "C" {

extern s32 FUN_002a7e4c(u32 request);
extern void threadSleepDuration(nn::fnd::TimeSpan span);

/* Retries request 0x407 until it succeeds or fails with the final error; sleeps 10 ms
 * whenever the service answers that it is busy. */
void FUN_00361160(void)
{
    for (;;) {
        s32 result = FUN_002a7e4c(0x407);

        if (!nnResultIsFailure(result) || result == (s32)0xc8a0cffc) {
            return;
        }
        if (result == (s32)0xe0a0cc08) {
            threadSleepDuration(nn::fnd::TimeSpan::FromMilliSeconds(10));
        }
    }
}

} /* extern "C" */
