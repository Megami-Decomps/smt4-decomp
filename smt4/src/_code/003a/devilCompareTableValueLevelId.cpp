#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/Table00Lookup.h"

// Sort by descending table value, ascending current level, then descending ID.
extern "C" s32 devilCompareTableValueLevelId(const u16* leftId, const u16* rightId)
{
    Table00Record* left = dataTable00FindById(*leftId);
    Table00Record* right = dataTable00FindById(*rightId);
    s32 difference = right->maxMp - left->maxMp;
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
