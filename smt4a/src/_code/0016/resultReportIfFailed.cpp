#include "common.h"

extern "C" {

extern s32 FUN_0016dfe0(void);
extern void FUN_002e3140(s32 error);

/* Reports the error code of FUN_0016dfe0 to FUN_002e3140 when it is negative. */
void resultReportIfFailed(void)
{
    s32 result = FUN_0016dfe0();
    bool failed = result < 0;

    if (failed) {
        FUN_002e3140(result);
    }
}

} /* extern "C" */
