#include "sys/ProcessResult.h"
#include "common.h"

extern "C" {

extern u8 DAT_005b40ca;

int FUN_00144534(void);
int fsUnmountByName(void);

/* Runs fsUnmountByName between FUN_00144534/processResultSetValue; clears DAT_005b40ca when its result has the sign bit clear (success). */
int FUN_00138cc4(void)
{
    int result;

    FUN_00144534();
    result = fsUnmountByName();
    processResultSetValue(result);
    if ((s32)(result & 0x80000000) >= 0) {
        DAT_005b40ca = 0;
    }
    return result;
}

} /* extern "C" */
