#include "AsdSDK/AsdMemAlloc.h"
#include "classes/AllocatorState.h"
#include "nn/svc.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {

void asdAllocatorLock(void);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
void rt_memclr(void *buffer, u32 size);

// Allocate under the tracking lock and clear the block when the allocation succeeded.
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option)
{
    asdAllocatorLock();
    void *block = asdMemoryAlloc(heap, alignment, region, size, option);
    if (block != NULL) {
        rt_memclr(block, size);
    }
    s32 result = nn::svc::ReleaseMutex(*g_allocationAddressRanges.mutex);
    if (nnResultIsFailure(result)) {
        resultHandleFailure(result);
    }
    return block;
}

} /* extern "C" */
