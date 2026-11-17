#include "common.h"
#include "gamedata/DevilRecord.h"

extern "C" {
s32 dataTableGetEntry0102Value(u16 entryId);

// Compare table values, then record bytes in opposing orders, then record IDs.
s32 devilCompareTablePriority(const u16* leftId, const u16* rightId)
{
    const DevilRecord *leftRecord = devilGetRecord(*leftId);
    const DevilRecord *rightRecord = devilGetRecord(*rightId);

    s32 leftValue = dataTableGetEntry0102Value(leftRecord->id);
    s32 rightValue = dataTableGetEntry0102Value(rightRecord->id);
    s32 difference = leftValue - rightValue;
    if (difference == 0) {
        leftRecord = devilGetRecord(*leftId);
        rightRecord = devilGetRecord(*rightId);
        difference = (s32)leftRecord->race - (s32)rightRecord->race;
        if (difference == 0) {
            difference = (s32)rightRecord->level - (s32)leftRecord->level;
            if (difference == 0)
                difference = (s32)leftRecord->id - (s32)rightRecord->id;
        }
    }
    return difference;
}
}
