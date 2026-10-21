#include "shard/W6_W6Match5_SecondarySort.h"

extern "C" {
s32 FUN_001f62ec(const u16 *, const u16 *);

// Compare secondary-table sort keys, then use the base ID comparator to break ties.
s32 FUN_00219488(const u16 *firstId, const u16 *secondId)
{
    SecondarySortRecord *first = dataTable1bOr1cGetRecord(*firstId);
    SecondarySortRecord *second = dataTable1bOr1cGetRecord(*secondId);
    if (first == NULL)
        return 0;
    if (second == NULL)
        return 0;
    s32 order = first->sortKey - second->sortKey;
    if (order != 0)
        return order;
    return FUN_001f62ec(firstId, secondId);
}
}
