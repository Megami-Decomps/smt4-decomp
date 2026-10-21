#include "shard/W6_W6Match5_SecondarySort.h"

extern "C" s32 FUN_002dcb60(const u16 *, const u16 *);

// Compare descending secondary-table keys, then use the fallback ID ordering.
extern "C" s32 FUN_002f2798(const u16 *firstId, const u16 *secondId)
{
    SecondarySortRecord *first = dataTable1bOr1cGetRecord(*firstId);
    SecondarySortRecord *second = dataTable1bOr1cGetRecord(*secondId);
    if (first == NULL)
        return 0;
    if (second == NULL)
        return 0;
    s32 order = second->sortKey - first->sortKey;
    if (order != 0)
        return order;
    return FUN_002dcb60(firstId, secondId);
}
