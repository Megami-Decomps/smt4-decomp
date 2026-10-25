#include "sys/ProcessResult.h"
#include "nn/Result.h"

extern "C" {
void *FUN_00142b04(void);
s32 FUN_00429fcc(const char *name, u64 titleId);

extern u8 DAT_005b40c9;

s32 FUN_0025cb5c(u64 titleId)
{
    void *context = FUN_00142b04();
    s32 result = FUN_00429fcc((const char *)context, titleId);
    FUN_0013ebd8(result);

    if (nnResultIsSuccess(result)) {
        DAT_005b40c9 = 1;
    }

    return result;
}
}
