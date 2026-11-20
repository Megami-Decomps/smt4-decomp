#include "common.h"
#include "nn/svc.h"
#include "nn/Result.h"
extern "C" {
extern u8 DAT_00471ba8;
void ipcSendParameterlessCommand0x2c0000();
void asdFatalError(void);
/* Closes the initialized service handle and clears its initialization flag. */
void serviceCloseInitializedHandle(const u32 *handle)
{
    u8 *initialized = &DAT_00471ba8;
    if (*initialized) {
        ipcSendParameterlessCommand0x2c0000();
        s32 result = svcCloseHandle(*handle);
        if (nnResultIsFailure(result))
            asdFatalError();
        *initialized = 0;
    }
}
}
