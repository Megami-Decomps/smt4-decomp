#include "quest_center/QuestRecord.h"

extern "C" {
s32 FUN_001f62ec(const u16 *, const u16 *);

// Compare secondary-table sort keys, then use the base ID comparator to break ties.
s32 questCompareBySortKey(const u16 *firstId, const u16 *secondId)
{
    QuestRecord *first = questDataGetRecord(*firstId);
    QuestRecord *second = questDataGetRecord(*secondId);
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
