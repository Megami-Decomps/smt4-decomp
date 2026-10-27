#include "classes/AllocatorState.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {

extern AllocatorState g_allocationAddressRanges;
s32 svcWaitSynchronization1(u32 handle, s64 timeout);

/* Takes the allocator lock (a kernel mutex), reporting a failed wait. */
void asdAllocatorLock(void)
{
    s32 result = svcWaitSynchronization1(*g_allocationAddressRanges.mutex, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
}

} /* extern "C" */
