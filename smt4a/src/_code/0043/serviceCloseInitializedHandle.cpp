#include "common.h"
#include "nn/svc.h"
#include "nn/Result.h"
extern "C" {
extern u8 DAT_005c0b48;
void FUN_0043aa48();
void sysFatalBreak(void);
/* Closes the initialized service handle and clears its initialization flag. */
void serviceCloseInitializedHandle(const u32 *handle)
{
    u8 *initialized = &DAT_005c0b48;
    if (*initialized) {
        FUN_0043aa48();
        s32 result = svcCloseHandle(*handle);
        if (nnResultIsFailure(result))
            sysFatalBreak();
        *initialized = 0;
    }
}
}
