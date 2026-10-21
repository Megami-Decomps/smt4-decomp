#include "shard/W6_W6Match5_DevilSort.h"

struct DevilTableSortValue {
    u8 unk00[8]; // 0x00
    s32 value;   // 0x08
};

extern "C" DevilTableSortValue* dataTable00FindById(u16);

// Sort by descending table value, ascending current level, then descending ID.
extern "C" s32 devilCompareTableValueLevelId(const u16* leftId, const u16* rightId)
{
    DevilTableSortValue* left = dataTable00FindById(*leftId);
    DevilTableSortValue* right = dataTable00FindById(*rightId);
    s32 difference = right->value - left->value;
    if (difference == 0) {
        DevilSortRecord* leftRecord = devilGetRecord(*leftId);
        DevilSortRecord* rightRecord = devilGetRecord(*rightId);
        difference = leftRecord->level - rightRecord->level;
        if (difference == 0) {
            difference = *rightId - *leftId;
        }
    }
    return difference;
}
