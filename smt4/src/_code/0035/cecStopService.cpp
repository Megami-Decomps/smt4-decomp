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

s32 cecStopService(void)
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
        s32 stopResult = FUN_00358f74();
        result = stopResult;
        if (nnResultIsFailure(stopResult)) {
            return stopResult;
        }
        FUN_00358d34();
        DAT_004656ca.initialized = 0;
    }
    return result;
}
}
