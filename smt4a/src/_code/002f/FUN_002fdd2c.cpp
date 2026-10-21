#include "shard/W6_W6Match5_EntrySortPrimaryKey.h"

// Compare the primary key, then the existing table tie-break key.
extern "C" s32 FUN_002fdd2c(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = FUN_00192608(left->id);
    EntrySortData *rightData = FUN_00192608(right->id);
    s32 result = entrySortGetPrimaryKey(leftData) - entrySortGetPrimaryKey(rightData);
    if (result == 0) {
        leftData = FUN_00192608(left->id);
        rightData = FUN_00192608(right->id);
        result = leftData->tieKey - rightData->tieKey;
    }
    return result;
}
