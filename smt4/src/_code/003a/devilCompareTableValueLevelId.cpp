#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/NkmEnemyLookup.h"

// Sort by descending table value, ascending current level, then descending ID.
extern "C" s32 devilCompareTableValueLevelId(const u16* leftId, const u16* rightId)
{
    NkmEnemyRecord* left = nkmEnemyFindById(*leftId);
    NkmEnemyRecord* right = nkmEnemyFindById(*rightId);
    s32 difference = right->maxMp - left->maxMp;
    if (difference == 0) {
        NkmBaseRecord* leftRecord = nkmBaseGetRecord(*leftId);
        NkmBaseRecord* rightRecord = nkmBaseGetRecord(*rightId);
        difference = leftRecord->level - rightRecord->level;
        if (difference == 0) {
            difference = *rightId - *leftId;
        }
    }
    return difference;
}
