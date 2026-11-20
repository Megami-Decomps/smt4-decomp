#include "common.h"
#include "sys/ResultReport.h"

extern "C" {

extern s32 addressSpaceMapApplicationMemoryBlock(void *stack, void *memory, u32 size);

/* Reports the error code of addressSpaceMapApplicationMemoryBlock (the address-space mapping of a thread's stack memory) to
 * resultHandleFailure when it is negative. */
void resultReportIfFailed(void *stack, void *memory, u32 size)
{
    s32 result = addressSpaceMapApplicationMemoryBlock(stack, memory, size);
    bool failed = result < 0;

    if (failed) {
        resultHandleFailure(result, failed);
    }
}

} /* extern "C" */
