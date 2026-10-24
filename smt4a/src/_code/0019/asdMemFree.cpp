/* NON_MATCHING: retail loads both range starts with one ldrd, inlines the unlock (and its failure test) separately in each branch and has compiler nop hints at the branch targets; the build shares one unlock tail and compares the ranges differently. */
#include "classes/AllocatorState.h"
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {

extern AllocatorState g_allocationAddressRanges;

void FUN_0018003c(void);
void *FUN_0017fe8c(void *memory);
void asdMemoryFreeRegion(void *memory);
void FUN_002e3140(s32 result, bool failed);

/* Holds the allocator lock for the enclosing scope. */
class AllocatorLockGuard {
public:
    AllocatorLockGuard() { FUN_0018003c(); }
    ~AllocatorLockGuard()
    {
        s32 result = nn::svc::ReleaseMutex(*g_allocationAddressRanges.mutex);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
    }
};

// Releases a block under the allocator lock; blocks outside the two large regions are first
// translated to their owning block.
void asdMemFree(void *memory)
{
    AllocatorLockGuard lock;
    AllocatorState &state = g_allocationAddressRanges;
    u32 address = (u32)memory;
    if ((address >= state.firstRangeStart && address <= state.firstRangeStart + state.firstRangeSize) ||
        (address >= state.secondRangeStart && address <= state.secondRangeStart + state.secondRangeSize)) {
        asdMemoryFreeRegion(memory);
    } else {
        asdMemoryFreeRegion(FUN_0017fe8c(memory));
    }
}

}
