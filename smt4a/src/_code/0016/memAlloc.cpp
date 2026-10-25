#include "nn/svc.h"
#include "nn/Result.h"
#include "util/CalleeContracts.h"

/* The allocator's global state, as far as the allocation entry points use it. */
struct AllocatorLock {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 *mutex; /* handle of the mutex guarding the heaps */
};

extern "C" {

extern AllocatorLock g_allocationAddressRanges;

void FUN_0018003c(void);
void *asdMemoryAllocImpl(u32 a, u32 b, u32 c, u32 size, u32 extra);
void *FUN_001844ac(void *block, u32 size, u32 alignment, u32 flags);
void rt_memclr(void *memory, u32 size);
void FUN_002e3140(s32 result, bool failed);

// Allocates `size` zeroed bytes aligned to `alignment` (at least 0x80) under the allocator lock.
void *memAlloc(u32 a, u32 b, u32 c, u32 size, u32 alignment, u32 extra)
{
    FUN_0018003c();
    if (alignment < 0x80) {
        alignment = 0x80;
    }
    u32 paddedSize = size + alignment + alignment;
    u32 mask = -alignment;
    paddedSize = (paddedSize + 0x3f) & mask;
    void *block = asdMemoryAllocImpl(a, b, c, paddedSize, extra);
    void *memory = FUN_001844ac(block, paddedSize, alignment, 0);
    rt_memclr(memory, size);
    u32 result = nn::svc::ReleaseMutex(*g_allocationAddressRanges.mutex);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    return memory;
}

}
