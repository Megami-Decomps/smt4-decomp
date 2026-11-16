#include "sys/ProcessResult.h"
#include "common.h"
#include "sys/ResultReport.h"

extern "C" {

extern u8 g_appletBusyFlag;

int FUN_002c3520(void);
int fsUnmountByName(void);

/* Runs fsUnmountByName between FUN_002c3520/processResultSetValue; clears g_appletBusyFlag when its result has the sign bit clear (success). */
int FUN_00103c9c(void)
{
    int result;

    FUN_002c3520();
    result = fsUnmountByName();
    processResultSetValue(result);
    if ((s32)(result & 0x80000000) >= 0) {
        g_appletBusyFlag = 0;
    }
    return result;
}

} /* extern "C" */
