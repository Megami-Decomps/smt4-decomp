/* NON_MATCHING: Retail bne 84 differs from recovered bne 78. */
#include "common.h"

namespace {

struct DevilRecordView {
    u16 unk00; // 0x00
    u8 unk02;  // 0x02
    u8 unk03;  // 0x03
};

}

extern "C" {
DevilRecordView* devilGetRecord(u16 recordId);
s32 dataTableGetEntry0102Value(u16 entryId);

// Compare table values, then record bytes in opposing orders, then record IDs.
s32 FUN_001f6524(const u16* leftId, const u16* rightId)
{
    const DevilRecordView* leftRecord = devilGetRecord(*leftId);
    const DevilRecordView* rightRecord = devilGetRecord(*rightId);

    s32 leftValue = dataTableGetEntry0102Value(leftRecord->unk00);
    s32 rightValue = dataTableGetEntry0102Value(rightRecord->unk00);
    s32 difference = leftValue - rightValue;
    if (difference != 0) {
        return difference;
    }

    leftRecord = devilGetRecord(*leftId);
    rightRecord = devilGetRecord(*rightId);

    difference = (s32)leftRecord->unk02 - (s32)rightRecord->unk02;
    if (difference != 0) {
        return difference;
    }

    difference = (s32)rightRecord->unk03 - (s32)leftRecord->unk03;
    if (difference != 0) {
        return difference;
    }

    return (s32)leftRecord->unk00 - (s32)rightRecord->unk00;
}
}
