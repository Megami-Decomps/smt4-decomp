#include "nn/os/ThreadLaunch.h"
#include "sys/ResultReport.h"

extern "C" {

extern s32 addressSpaceMapApplicationMemoryBlock(ThreadStackStorage *stack, void *buffer, u32 size);

/* Initializes the thread's stack mapping, reporting a failed result. */
void resultReportIfFailed(ThreadStackStorage *stack, void *buffer, u32 size)
{
    s32 result = addressSpaceMapApplicationMemoryBlock(stack, buffer, size);
    bool failed = result < 0;

    if (failed) {
        resultHandleFailure(result);
    }
}

} /* extern "C" */
