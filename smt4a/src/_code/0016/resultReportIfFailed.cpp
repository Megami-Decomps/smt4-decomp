#include "nn/os/ThreadLaunch.h"
#include "sys/ResultReport.h"

extern "C" {

extern s32 FUN_0016dfe0(ThreadStackStorage *stack, void *buffer, u32 size);

/* Initializes the thread's stack mapping, reporting a failed result. */
void resultReportIfFailed(ThreadStackStorage *stack, void *buffer, u32 size)
{
    s32 result = FUN_0016dfe0(stack, buffer, size);
    bool failed = result < 0;

    if (failed) {
        FUN_002e3140(result);
    }
}

} /* extern "C" */
