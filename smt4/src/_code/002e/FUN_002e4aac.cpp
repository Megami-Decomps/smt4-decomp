#include "common.h"

struct PackedPriorityRecord {
    u8 unk00[0x6f];
    u8 tieKey; // 0x6f
    u32 sortFlags; // 0x70: low byte is the primary sort key
};

extern "C" {
PackedPriorityRecord *dataTable08Sub1GetRecord(u16);

// Sort the packed primary priority and secondary byte key in descending order.
s32 FUN_002e4aac(const u16 *left, const u16 *right)
{
    PackedPriorityRecord *leftRecord = dataTable08Sub1GetRecord(*left);
    PackedPriorityRecord *rightRecord = dataTable08Sub1GetRecord(*right);
    s32 result = (rightRecord->sortFlags & 0xff) - (leftRecord->sortFlags & 0xff);
    if (result == 0) {
        leftRecord = dataTable08Sub1GetRecord(*left);
        rightRecord = dataTable08Sub1GetRecord(*right);
        result = rightRecord->tieKey - leftRecord->tieKey;
    }
    return result;
}
}
