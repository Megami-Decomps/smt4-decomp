#include "sys/ProcessResult.h"
#include "nn/Result.h"
#include "shard/FUN_001386b4.h"

extern "C" {

int FUN_00142b04(void);
s32 FUN_001a0380(void);

extern u8 DAT_005b40c9;

/* Runs FUN_001a0380 and clears DAT_005b40c9 when it succeeded; returns its result. */
s32 FUN_001386b4(void)
{
    s32 result;

    FUN_00142b04();
    result = FUN_001a0380();
    FUN_0013ebd8(result);
    if (nnResultIsSuccess(result)) {
        DAT_005b40c9 = 0;
    }
    return result;
}

} /* extern "C" */
