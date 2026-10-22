#include "common.h"

struct MaskedSortRecord {
    u8 unk00[0x43];
    u8 secondary; // 0x43
    u32 flags; // 0x44
};

extern "C" {
MaskedSortRecord *dataTable8FindRecord(u32 id);

// Compare ascending low-byte primary keys, then ascending secondary bytes.
s32 FUN_002ce520(const u16 *left, const u16 *right)
{
    MaskedSortRecord *leftRecord = dataTable8FindRecord(*left);
    MaskedSortRecord *rightRecord = dataTable8FindRecord(*right);
    s32 difference = (leftRecord->flags & 0xff) - (rightRecord->flags & 0xff);
    if (difference == 0) {
        leftRecord = dataTable8FindRecord(*left);
        rightRecord = dataTable8FindRecord(*right);
        difference = leftRecord->secondary - rightRecord->secondary;
    }
    return difference;
}
}
