#include "shard/W6_W6Match3_PointDifference.h"
#include "camp/UIQuest/UIQuest.h"

extern "C" const PointLookupRecord* asdTMTexTableEntryAt(u32 bank, u32 index);

// Store the coordinate difference between two records in the same bank.
extern "C" void FUN_00262210(PointDeltaWork* output, u32 bank, u32 firstIndex, u32 secondIndex)
{
    const PointLookupRecord* first = asdTMTexTableEntryAt(bank, firstIndex);
    const PointLookupRecord* second = asdTMTexTableEntryAt(bank, secondIndex);
    s16 firstX = first->x;
    s16 firstY = first->y;
    s16 secondX = second->x;
    s16 secondY = second->y;
    output->x = firstX - secondX;
    output->y = firstY - secondY;
}
