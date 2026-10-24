#include "shard/W6_W6Match5_EntrySortPrimaryKey.h"

extern "C" {
// Sort descending by the primary key, then descending by the tie-break key.
s32 entrySortComparePrimaryKeyDesc(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = dataTable08Sub2GetRecord(left->id);
    EntrySortData *rightData = dataTable08Sub2GetRecord(right->id);
    s32 difference = entrySortGetPrimaryKey(rightData) - entrySortGetPrimaryKey(leftData);
    if (difference == 0) {
        leftData = dataTable08Sub2GetRecord(left->id);
        rightData = dataTable08Sub2GetRecord(right->id);
        difference = rightData->tieKey - leftData->tieKey;
    }
    return difference;
}
}
