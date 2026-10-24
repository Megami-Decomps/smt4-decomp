/* NON_MATCHING: retail closes an existing handle through SVC 0x23, prohibited by the no-intrinsics rule. */
#include "common.h"
#include "nn/Result.h"
#include "nn/svc.h"
extern "C" {
s32 FUN_003609bc(u32 *output);
void asdFatalError(s32 result);
/* Replaces the owner's handle with a newly queried handle. */
void conversionReplaceEventHandle(u32 *handle)
{
    u32 replacement = 0;
    s32 result = FUN_003609bc(&replacement);
    if (nnResultIsFailure(result))
        asdFatalError(result);
    if (*handle) {
        svcCloseHandle(*handle);
        *handle = 0;
    }
    *handle = replacement;
}
}
