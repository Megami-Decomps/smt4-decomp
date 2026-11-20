#include "common.h"
#include "nn/Result.h"
#include "nn/svc.h"
extern "C" {
s32 ipcQueryHandleCommand(u32 *output);
void sysFatalBreak(void);
/* Replaces the owner's handle with a newly queried handle. */
void conversionReplaceEventHandle(u32 *handle)
{
    u32 replacement = 0;
    s32 result = ipcQueryHandleCommand(&replacement);
    if (nnResultIsFailure(result))
        sysFatalBreak();
    if (*handle) {
        svcCloseHandle(*handle);
        *handle = 0;
    }
    *handle = replacement;
}
}
