/* NON_MATCHING: only the failure test of the stop call: retail tests into r1 (lsrs r1, r0, #31) and returns r0 directly on failure; armcc tests into r0 and returns through r4 */
/* Shuts the CEC service down when it is initialised: flushes pending work if there is any, stops the service and clears
 * the initialised flag. Returns the first failure result, or 0. */
#include "nn/Result.h"

extern "C" {
/* The CEC module's state flags. */
struct CecState {
    /* 0x0 */ u8 initialized;
    /* 0x1 */ u8 flushPending;
    /* 0x2 */ u8 unk02;
};

extern CecState DAT_004656ca;
s32 FUN_0023a244(void);
s32 FUN_00358f74(void);
void FUN_00358d34(void);

s32 FUN_003578b8(void)
{
    s32 result = 0;

    if (DAT_004656ca.initialized != 0) {
        if (DAT_004656ca.flushPending != 0) {
            s32 flushResult = FUN_0023a244();

            if (nnResultIsFailure(flushResult)) {
                return flushResult;
            }
            DAT_004656ca.unk02 = 0;
            DAT_004656ca.flushPending = 0;
        }
        result = FUN_00358f74();
        if (!nnResultIsFailure(result)) {
            FUN_00358d34();
            DAT_004656ca.initialized = 0;
        }
    }
    return result;
}
}
