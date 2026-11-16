#include "nn/fnd/TimeSpan.h"
#include "common.h"
#include "nn/Result.h"

extern "C" {

extern s32 FUN_001a3010(u32 request);
extern void svcSleepThread(nn::fnd::TimeSpan span);

/* Retries request 0x407 until it succeeds or fails with the final error; sleeps 10 ms
 * whenever the service answers that it is busy. */
void FUN_0043bffc(void)
{
    for (;;) {
        s32 result = FUN_001a3010(0x407);

        if (!nnResultIsFailure(result) || result == (s32)0xc8a0cffc) {
            return;
        }
        if (result == (s32)0xe0a0cc08) {
            svcSleepThread(nn::fnd::TimeSpan::FromMilliSeconds(10));
        }
    }
}

} /* extern "C" */
