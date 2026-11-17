#include "nn/svc.h"
#include "classes/AllocatorState.h"
#include "nn/Result.h"
#include "util/MemoryHelpers_Smt4a.h"
#include "sys/ResultReport.h"

/* The allocator's global state, as far as the allocation entry points use it. */
extern "C" {


void asdAllocatorLock(void);
void *asdMemoryAllocImpl(u32 a, u32 b, u32 c, u32 size, u32 extra);
void *asdMemInitAllocationHeader(void *block, u32 size, u32 alignment, u32 flags);
void rt_memclr(void *memory, u32 size);

// Allocates `size` zeroed bytes aligned to `alignment` (at least 0x80) under the allocator lock.
void *asdMemoryAllocAligned(u32 a, u32 b, u32 c, u32 size, u32 alignment, u32 extra)
{
    asdAllocatorLock();
    if (alignment < 0x80) {
        alignment = 0x80;
    }
    u32 paddedSize = size + alignment + alignment;
    u32 mask = -alignment;
    paddedSize = (paddedSize + 0x3f) & mask;
    void *block = asdMemoryAllocImpl(a, b, c, paddedSize, extra);
    void *memory = asdMemInitAllocationHeader(block, paddedSize, alignment, 0);
    rt_memclr(memory, size);
    u32 result = nn::svc::ReleaseMutex(*g_allocationAddressRanges.mutex);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return memory;
}

}
