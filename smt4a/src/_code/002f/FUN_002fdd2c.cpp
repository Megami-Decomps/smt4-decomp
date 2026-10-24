#include "shard/W6_W6Match5_EntrySortPrimaryKey.h"

// Compare the primary key, then the existing table tie-break key.
extern "C" s32 FUN_002fdd2c(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = dataTable08Sub2GetRecord(left->id);
    EntrySortData *rightData = dataTable08Sub2GetRecord(right->id);
    s32 result = entrySortGetPrimaryKey(leftData) - entrySortGetPrimaryKey(rightData);
    if (result == 0) {
        leftData = dataTable08Sub2GetRecord(left->id);
        rightData = dataTable08Sub2GetRecord(right->id);
        result = leftData->tieKey - rightData->tieKey;
    }
    return result;
}
