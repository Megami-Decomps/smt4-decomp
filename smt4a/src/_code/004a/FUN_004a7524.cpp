#include "common.h"

struct RecordOrderKeys {
    u8 unk00[6];    // 0x00
    u16 secondary;  // 0x06
    u8 unk08[0x12]; // 0x08
    u16 primary;    // 0x1a
};

extern "C" RecordOrderKeys* FUN_00184310(u16);

// Compare descending primary key, ascending secondary key, then descending ID.
extern "C" s32 FUN_004a7524(const u16* leftId, const u16* rightId)
{
    RecordOrderKeys* left = FUN_00184310(*leftId);
    RecordOrderKeys* right = FUN_00184310(*rightId);
    s32 difference = right->primary - left->primary;
    if (difference == 0) {
        RecordOrderKeys* leftSecondary = FUN_00184310(*leftId);
        RecordOrderKeys* rightSecondary = FUN_00184310(*rightId);
        difference = leftSecondary->secondary - rightSecondary->secondary;
        if (difference == 0) {
            difference = *rightId - *leftId;
        }
    }
    return difference;
}
