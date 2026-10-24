#include "common.h"
#include "nn/Result.h"
#include "nn/svc.h"
extern "C" {
s32 FUN_003609bc(u32 *output);
void asdFatalError(void);
/* Replaces the owner's handle with a newly queried handle. */
void conversionReplaceEventHandle(u32 *handle)
{
    u32 replacement = 0;
    s32 result = FUN_003609bc(&replacement);
    if (nnResultIsFailure(result))
        asdFatalError();
    if (*handle) {
        svcCloseHandle(*handle);
        *handle = 0;
    }
    *handle = replacement;
}
}
