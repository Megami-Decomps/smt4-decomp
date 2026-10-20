/* NON_MATCHING: retail tests the error bit with `lsrs r1, r0, #31` and loads the 10 ms sleep constant at the call; built compares with 0 and hoists the constant. */
#include "common.h"

extern "C" {

extern u32 FUN_002a7e4c(u32 request);
extern void FUN_002bb150(s64 nanoseconds);

/* Whether an nn result code is an error (bit 31). */
static __inline u32 resultIsFailure(u32 result)
{
    return result >> 31;
}

/* Retries request 0x407 until it succeeds or fails with the final error; sleeps 10 ms
 * whenever the service answers that it is busy. */
void FUN_00361160(void)
{
    for (;;) {
        u32 result = FUN_002a7e4c(0x407);

        if ((result >> 31) == 0 || result == 0xc8a0cffc) {
            return;
        }
        if (result == 0xe0a0cc08) {
            FUN_002bb150(10000000);
        }
    }
}

} /* extern "C" */
