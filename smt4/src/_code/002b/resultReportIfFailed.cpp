#include "common.h"

extern "C" {

extern s32 FUN_00127fac(void);
extern void FUN_002c526c(s32 error);

/* Reports the error code of FUN_00127fac to FUN_002c526c when it is negative. */
void resultReportIfFailed(void)
{
    s32 result = FUN_00127fac();
    bool failed = result < 0;

    if (failed) {
        FUN_002c526c(result);
    }
}

} /* extern "C" */
