#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

// Sort the packed primary priority and secondary byte key in descending order.
s32 FUN_002e4aac(const u16 *left, const u16 *right)
{
    ConsumableRecord *leftRecord = itemTableGetItemRecord(*left);
    ConsumableRecord *rightRecord = itemTableGetItemRecord(*right);
    s32 result = (rightRecord->sortFlags & 0xff) - (leftRecord->sortFlags & 0xff);
    if (result == 0) {
        leftRecord = itemTableGetItemRecord(*left);
        rightRecord = itemTableGetItemRecord(*right);
        result = rightRecord->rank - leftRecord->rank;
    }
    return result;
}
}
