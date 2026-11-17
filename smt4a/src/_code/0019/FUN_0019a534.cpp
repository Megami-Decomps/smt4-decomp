#include "common.h"
#include "classes/AllocatorState.h"

extern "C" {


/* Walks a chain to its end; the per-step bookkeeping was stripped from the release build. */
static __inline void walkRanges(AllocationLink *range)
{
    while (range != NULL) {
        range = range->next;
    }
}

/* Walks the active heap usage record's allocation list four times. */
void FUN_0019a534(void)
{
    walkRanges(g_asdMemState.usage->head);
    walkRanges(g_asdMemState.usage->head);
    walkRanges(g_asdMemState.usage->head);
    walkRanges(g_asdMemState.usage->head);
}

} /* extern "C" */
