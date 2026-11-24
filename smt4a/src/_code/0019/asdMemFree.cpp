#include "classes/AllocatorState.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "util/MemoryHelpers_VariantC.h"
#include "sys/ResultReport.h"

extern "C" {


void asdAllocatorLock(void);
void *asdMemReleaseTrackedAllocation(void *memory);
void asdMemoryFreeRegion(void *memory);

/* Releases the allocator lock (a kernel mutex), reporting a failed release. */
static __inline void allocatorUnlock(AllocatorStateA &state)
{
    s32 result = svcReleaseMutex(*state.mutex);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
}

// Releases a block under the allocator lock; blocks outside the two large regions are first
// translated to their owning block.
void asdMemFree(void *memory)
{
    asdAllocatorLock();
    u32 address = (u32)memory;
    u32 firstStart = g_asdMemState.regionBase[2];
    u32 secondStart = g_asdMemState.regionBase[3];
    if ((firstStart <= address && address <= firstStart + g_asdMemState.regionSize[2]) ||
        (secondStart <= address && address <= secondStart + g_asdMemState.regionSize[3])) {
        asdMemoryFreeRegion(memory);
        allocatorUnlock(g_asdMemState);
    } else {
        asdMemoryFreeRegion(asdMemReleaseTrackedAllocation(memory));
        allocatorUnlock(g_asdMemState);
    }
}

}
