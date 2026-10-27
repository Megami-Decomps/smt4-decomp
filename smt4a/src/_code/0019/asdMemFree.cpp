/* NON_MATCHING: registers, range tests and unlock duplication match; retail has a `nop {0}` between the unlock failure test (`lsrs r1, r0, #31`) and its branch in both arms, with no source construct found that yields it. */
#include "classes/AllocatorState.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "util/MemoryHelpers_VariantC.h"
#include "sys/ResultReport.h"

extern "C" {

extern AllocatorState g_allocationAddressRanges;

void asdAllocatorLock(void);
void *FUN_0017fe8c(void *memory);
void asdMemoryFreeRegion(void *memory);

/* Releases the allocator lock (a kernel mutex), reporting a failed release. */
static __inline void allocatorUnlock(AllocatorState &state)
{
    s32 result = nn::svc::ReleaseMutex(*state.mutex);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
}

// Releases a block under the allocator lock; blocks outside the two large regions are first
// translated to their owning block.
void asdMemFree(void *memory)
{
    asdAllocatorLock();
    u32 address = (u32)memory;
    u32 firstStart = g_allocationAddressRanges.firstRangeStart;
    u32 secondStart = g_allocationAddressRanges.secondRangeStart;
    if ((firstStart <= address && address <= firstStart + g_allocationAddressRanges.firstRangeSize) ||
        (secondStart <= address && address <= secondStart + g_allocationAddressRanges.secondRangeSize)) {
        asdMemoryFreeRegion(memory);
        allocatorUnlock(g_allocationAddressRanges);
    } else {
        asdMemoryFreeRegion(FUN_0017fe8c(memory));
        allocatorUnlock(g_allocationAddressRanges);
    }
}

}
