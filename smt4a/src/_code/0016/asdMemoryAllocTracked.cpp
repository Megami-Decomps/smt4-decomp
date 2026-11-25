#include "AsdSDK/AsdMemAlloc.h"
#include "classes/AllocatorState.h"
#include "nn/svc.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "runtime/String.h"

extern "C" {

void asdAllocatorLock(void);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 region, u32 size, u32 option);

// Allocate under the tracking lock and clear the block when the allocation succeeded.
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option)
{
    asdAllocatorLock();
    void *block = asdMemoryAlloc(heap, alignment, region, size, option);
    if (block != NULL) {
        rt_memclr(block, size);
    }
    s32 result = svcReleaseMutex(*g_asdMemState.mutex);
    if (nnResultIsFailure(result)) {
        resultHandleFailure(result);
    }
    return block;
}

} /* extern "C" */
