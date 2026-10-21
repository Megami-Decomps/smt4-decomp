#include "shard/W6_W6Match5_EntrySortPrimaryKey.h"

extern "C" {
// Sort descending by the primary key, then descending by the tie-break key.
s32 entrySortComparePrimaryKeyDesc(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = FUN_00192608(left->id);
    EntrySortData *rightData = FUN_00192608(right->id);
    s32 difference = entrySortGetPrimaryKey(rightData) - entrySortGetPrimaryKey(leftData);
    if (difference == 0) {
        leftData = FUN_00192608(left->id);
        rightData = FUN_00192608(right->id);
        difference = rightData->tieKey - leftData->tieKey;
    }
    return difference;
}
}
