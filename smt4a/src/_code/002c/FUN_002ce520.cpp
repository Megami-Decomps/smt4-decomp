#include "common.h"

struct MaskedSortRecord {
    u8 unk00[0x43];
    u8 secondary; // 0x43
    u32 flags; // 0x44
};

extern "C" {
MaskedSortRecord *FUN_00192550(u32 id);

// Compare ascending low-byte primary keys, then ascending secondary bytes.
s32 FUN_002ce520(const u16 *left, const u16 *right)
{
    MaskedSortRecord *leftRecord = FUN_00192550(*left);
    MaskedSortRecord *rightRecord = FUN_00192550(*right);
    s32 difference = (leftRecord->flags & 0xff) - (rightRecord->flags & 0xff);
    if (difference == 0) {
        leftRecord = FUN_00192550(*left);
        rightRecord = FUN_00192550(*right);
        difference = leftRecord->secondary - rightRecord->secondary;
    }
    return difference;
}
}
