#include "gamedata/DevilRecordA.h"

// Compare descending base MP, ascending level, then descending ID.
extern "C" s32 FUN_004a7524(const u16* leftId, const u16* rightId)
{
    DevilRecordA* left = devilGetRecord(*leftId);
    DevilRecordA* right = devilGetRecord(*rightId);
    s32 difference = right->baseMp - left->baseMp;
    if (difference == 0) {
        DevilRecordA* leftSecondary = devilGetRecord(*leftId);
        DevilRecordA* rightSecondary = devilGetRecord(*rightId);
        difference = leftSecondary->level - rightSecondary->level;
        if (difference == 0) {
            difference = *rightId - *leftId;
        }
    }
    return difference;
}
