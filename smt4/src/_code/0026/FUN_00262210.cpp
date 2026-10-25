#include "shard/W6_W6Match3_PointDifference.h"

extern "C" const PointLookupRecord* FUN_002bf4f8(u32 bank, u32 index);

// Store the coordinate difference between two records in the same bank.
extern "C" void FUN_00262210(PointDeltaWork* output, u32 bank, u32 firstIndex, u32 secondIndex)
{
    const PointLookupRecord* first = FUN_002bf4f8(bank, firstIndex);
    const PointLookupRecord* second = FUN_002bf4f8(bank, secondIndex);
    s16 firstX = first->x;
    s16 firstY = first->y;
    s16 secondX = second->x;
    s16 secondY = second->y;
    output->x = firstX - secondX;
    output->y = firstY - secondY;
}
