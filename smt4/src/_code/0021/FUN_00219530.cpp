#include "shard/W6_W6Match2_RankedTableRecord.h"

// Compare the high twelve flag bits, then ascending secondary order.
extern "C" s32 FUN_00219530(const u16 *left, const u16 *right)
{
    RankedTableRecord *leftRecord = dataTable08Sub2GetRecord(*left);
    RankedTableRecord *rightRecord = dataTable08Sub2GetRecord(*right);
    s32 result = (rankedTableRecordGetSortFlags(leftRecord) >> 20)
               - (rankedTableRecordGetSortFlags(rightRecord) >> 20);
    if (result == 0) {
        leftRecord = dataTable08Sub2GetRecord(*left);
        rightRecord = dataTable08Sub2GetRecord(*right);
        result = leftRecord->order - rightRecord->order;
    }
    return result;
}
