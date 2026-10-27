/* NON_MATCHING: syscall wrappers now inline as in retail; remaining: retail reloads the handle before each wait, keeps the 0 constant in r6, and evaluates the timeout test through separate boolean temporaries (movne/moveq, teq) that armcc folds */
#include "classes/AllocatorState.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "sys/ResultReport.h"

extern "C" {

extern AllocatorState g_allocationAddressRanges;

void FUN_0018003c(void);
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
    AllocatorState &state = g_allocationAddressRanges;
    u32 address = (u32)memory;

    FUN_0018003c();
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
