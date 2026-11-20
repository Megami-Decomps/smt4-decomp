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

extern CecState g_cecState;
s32 ipcServiceSessionRelease(void);
s32 cecdServiceCloseHandle(void);
void FUN_0042fbe4(void);

s32 cecShutdownIfInitialized(void)
{
    s32 result = 0;

    if (g_cecState.initialized != 0) {
        if (g_cecState.flushPending != 0) {
            s32 flushResult = ipcServiceSessionRelease();

            if (nnResultIsFailure(flushResult)) {
                return flushResult;
            }
            g_cecState.unk02 = 0;
            g_cecState.flushPending = 0;
        }
        s32 stopResult = cecdServiceCloseHandle();
        result = stopResult;
        if (nnResultIsFailure(stopResult)) {
            return stopResult;
        }
        FUN_0042fbe4();
        g_cecState.initialized = 0;
    }
    return result;
}
}
