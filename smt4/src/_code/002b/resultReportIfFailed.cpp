#include "common.h"
#include "sys/ResultReport.h"

extern "C" {

extern s32 FUN_00127fac(void *stack, void *memory, u32 size);

/* Reports the error code of FUN_00127fac (the address-space mapping of a thread's stack memory) to
 * FUN_002c526c when it is negative. */
void resultReportIfFailed(void *stack, void *memory, u32 size)
{
    s32 result = FUN_00127fac(stack, memory, size);
    bool failed = result < 0;

    if (failed) {
        FUN_002c526c(result, failed);
    }
}

} /* extern "C" */
