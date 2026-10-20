/* NON_MATCHING: retail tests the error bit with `lsrs r1, r0, #31` and loads the 10 ms sleep constant at the call; built compares with 0 and hoists the constant. */
#include "common.h"

extern "C" {

extern s32 FUN_001a3010(u32 request);
extern void svcSleepThread(s64 nanoseconds);

/* Retries request 0x407 until it succeeds or fails with the final error; sleeps 10 ms
 * whenever the service answers that it is busy. */
void FUN_0043bffc(void)
{
    for (;;) {
        s32 result = FUN_001a3010(0x407);

        if (result >= 0 || result == (s32)0xc8a0cffc) {
            return;
        }
        if (result == (s32)0xe0a0cc08) {
            svcSleepThread(10000000);
        }
    }
}

} /* extern "C" */
