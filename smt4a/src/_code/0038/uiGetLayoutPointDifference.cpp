#include "shard/W6_W6Match3_PointDifference.h"

extern "C" const PointLookupRecord* FUN_001834a4(u32 bank, u32 index);

static inline void pointDeltaSetDifference(PointDeltaWork *output, const PointLookupRecord *first,
                                          const PointLookupRecord *second)
{
    s16 firstX = first->x;
    s16 firstY = first->y;
    s16 secondX = second->x;
    s16 secondY = second->y;
    output->x = firstX - secondX;
    output->y = firstY - secondY;
}

// Store the coordinate difference between two records in the same bank.
extern "C" void uiGetLayoutPointDifference(PointDeltaWork* output, u32 bank, u32 firstIndex, u32 secondIndex)
{
    const PointLookupRecord* first = FUN_001834a4(bank, firstIndex);
    const PointLookupRecord* second = FUN_001834a4(bank, secondIndex);
    pointDeltaSetDifference(output, first, second);
}
