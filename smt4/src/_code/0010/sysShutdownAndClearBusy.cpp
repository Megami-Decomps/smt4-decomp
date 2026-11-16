/* Runs the shutdown hooks and returns the fsUnmountByName result; clears the "busy" byte when it succeeded (sign bit clear). */
#include "sys/ProcessResult.h"
#include "common.h"

extern "C" {

extern u8 DAT_00465240;

extern s32 FUN_0010e574(void);
extern s32 fsUnmountByName(void);

s32 sysShutdownAndClearBusy(void)
{
    s32 result;

    FUN_0010e574();
    result = fsUnmountByName();
    processResultSetValue(result);
    if ((s32)(result & 0x80000000) >= 0) {
        DAT_00465240 = 0;
    }
    return result;
}

}
