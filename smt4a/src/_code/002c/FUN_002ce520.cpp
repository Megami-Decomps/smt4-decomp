#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

// Compare ascending low-byte primary keys, then ascending secondary bytes.
s32 FUN_002ce520(const u16 *left, const u16 *right)
{
    ConsumableRecordA *leftRecord = itemTableGetItemRecord(*left);
    ConsumableRecordA *rightRecord = itemTableGetItemRecord(*right);
    s32 difference = (leftRecord->sortFlags & 0xff) - (rightRecord->sortFlags & 0xff);
    if (difference == 0) {
        leftRecord = itemTableGetItemRecord(*left);
        rightRecord = itemTableGetItemRecord(*right);
        difference = leftRecord->rank - rightRecord->rank;
    }
    return difference;
}
}
