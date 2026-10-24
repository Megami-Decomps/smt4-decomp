/* NON_MATCHING: same calls, the two range tests (ldrd) and the unlock duplicated per branch; only register numbering (memory r4/state r5 in retail) and two compiler nop hints around the failure test differ */
#include "classes/AllocatorState.h"
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {

extern AllocatorState g_allocationAddressRanges;

void FUN_0018003c(void);
void *FUN_0017fe8c(void *memory);
void asdMemoryFreeRegion(void *memory);
void FUN_002e3140(s32 result, bool failed);

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
    FUN_0018003c();
    AllocatorState &state = g_allocationAddressRanges;
    u32 address = (u32)memory;
    u32 firstStart = state.firstRangeStart;
    u32 secondStart = state.secondRangeStart;
    if ((firstStart <= address && address <= firstStart + state.firstRangeSize) ||
        (secondStart <= address && address <= secondStart + state.secondRangeSize)) {
        asdMemoryFreeRegion(memory);
        allocatorUnlock(state);
    } else {
        asdMemoryFreeRegion(FUN_0017fe8c(memory));
        allocatorUnlock(state);
    }
}

}
