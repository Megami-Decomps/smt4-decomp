#include "common.h"

struct PackedRecordSortKeys {
    u8 unk00[0x24]; // 0x00
    u32 packed;     // 0x24
    u8 unk28[0x48]; // 0x28
    u16 secondary;  // 0x70
};

extern "C" PackedRecordSortKeys* dataTable08Sub2GetRecord(u32);

// Compare the ten-bit primary key, then the secondary halfword key.
extern "C" s32 dataTable08ComparePackedKeys(const u16* leftId, const u16* rightId)
{
    PackedRecordSortKeys* left = dataTable08Sub2GetRecord(*leftId);
    PackedRecordSortKeys* right = dataTable08Sub2GetRecord(*rightId);
    s32 difference = (left->packed & 0x3ff) - (right->packed & 0x3ff);
    if (difference == 0) {
        PackedRecordSortKeys* leftSecondary = dataTable08Sub2GetRecord(*leftId);
        PackedRecordSortKeys* rightSecondary = dataTable08Sub2GetRecord(*rightId);
        difference = leftSecondary->secondary - rightSecondary->secondary;
    }
    return difference;
}
