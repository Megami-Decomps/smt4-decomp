/* NON_MATCHING: identical except one compiler nop {0} that retail places between the unlock failure test and its branch in the special-heap path. */
#include "nn/svc.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

/* The allocator's global state, as far as the allocation entry points use it. */
struct AllocatorLock {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 *mutex; /* handle of the mutex guarding the heaps */
};

extern "C" {

extern AllocatorLock g_allocationAddressRanges;

void asdAllocatorLock(void);
void *asdMemoryAllocImpl(u32 a, u32 b, u32 c, u32 size, s32 extra);
void *FUN_001844ac(void *block, u32 size, u32 alignment, u32 flags);
void rt_memclr(void *memory, u32 size);

/* Releases the allocator lock, reporting a failed release. */
static __inline void allocatorUnlock(void)
{
    s32 result = nn::svc::ReleaseMutex(*g_allocationAddressRanges.mutex);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
}

// Allocates from `heap` under the allocator lock; the two special heaps hand out the block as is, every other heap gets a
// 0x80-aligned zeroed block.
void *asdMemoryAlloc(u32 heap, u32 b, u32 c, u32 size, s32 extra)
{
    void *memory;
    if (heap != 0x20000 && heap != 0x30000) {
        asdAllocatorLock();
        u32 paddedSize = (size + 0x13f) & ~0x7f;
        void *block = asdMemoryAllocImpl(heap, b, c, paddedSize, extra);
        memory = FUN_001844ac(block, paddedSize, 0x80, 0);
        rt_memclr(memory, size);
        allocatorUnlock();
    } else {
        asdAllocatorLock();
        memory = asdMemoryAllocImpl(heap, b, c, size, extra);
        allocatorUnlock();
    }
    return memory;
}

}
