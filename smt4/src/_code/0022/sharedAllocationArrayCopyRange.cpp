/* NON_MATCHING: instruction sequence matches, but loop-count and iterator register allocation differs. */
#include "shard/W7_W7Match2_SharedAllocation.h"

// Copy an overlapping range of shared-allocation references in the safe direction.
extern "C" void sharedAllocationArrayCopyRange(SharedAllocationArray *array, u32 destination, u32 source, s32 count)
{
    if (count == 0)
        return;
    if (destination <= source) {
        SharedAllocationLink *output = array->entries + destination;
        SharedAllocationLink *input = array->entries + source;
        do {
            *output++ = *input++;
        } while (--count != 0);
    } else {
        SharedAllocationLink *output = array->entries + destination + count;
        SharedAllocationLink *input = array->entries + source + count;
        do {
            *--output = *--input;
        } while (--count != 0);
    }
}
