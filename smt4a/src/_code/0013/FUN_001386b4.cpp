#include "sys/ProcessResult.h"
#include "nn/Result.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

int FUN_00142b04(void);
s32 fsUnmountByName(void);

extern u8 DAT_005b40c9;

/* Runs fsUnmountByName and clears DAT_005b40c9 when it succeeded; returns its result. */
s32 FUN_001386b4(void)
{
    s32 result;

    FUN_00142b04();
    result = fsUnmountByName();
    processResultSetValue(result);
    if (nnResultIsSuccess(result)) {
        DAT_005b40c9 = 0;
    }
    return result;
}

} /* extern "C" */
