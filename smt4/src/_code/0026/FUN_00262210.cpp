/* NON_MATCHING: output/first-record registers r4/r5 and x/y source registers r2/r3 are exchanged. */
#include "shard/W6_W6Match3_PointDifference.h"

extern "C" const PointLookupRecord* FUN_002bf4f8(u32 bank, u32 index);

// Store the coordinate difference between two records in the same bank.
extern "C" void FUN_00262210(PointDeltaWork* output, u32 bank, u32 firstIndex, u32 secondIndex)
{
    const PointLookupRecord* first = FUN_002bf4f8(bank, firstIndex);
    const PointLookupRecord* second = FUN_002bf4f8(bank, secondIndex);
    s16 firstY = first->y;
    s16 secondY = second->y;
    output->x = first->x - second->x;
    output->y = firstY - secondY;
}
