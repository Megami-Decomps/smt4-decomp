/* NON_MATCHING: post-call range clearing uses r1 for zero instead of retail's r2. */
#include "shard/S1NwSnd.h"

extern "C" FrameHeapStateView *FUN_0038093c(FrameHeapStateView *heap);

/* Initialize the base frame heap, then clear the derived range. */
extern "C" void frameHeapInitializeRange(FrameHeapStateView *heap)
{
    heap = FUN_0038093c(heap);
    heap->first = 0;
    heap->last = 0;
}
