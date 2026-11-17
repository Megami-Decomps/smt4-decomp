#include "gamedata/NkmBaseRecordA.h"

// Compare descending base MP, ascending level, then descending ID.
extern "C" s32 FUN_004a7524(const u16* leftId, const u16* rightId)
{
    NkmBaseRecordA* left = nkmBaseGetRecord(*leftId);
    NkmBaseRecordA* right = nkmBaseGetRecord(*rightId);
    s32 difference = right->baseMp - left->baseMp;
    if (difference == 0) {
        NkmBaseRecordA* leftSecondary = nkmBaseGetRecord(*leftId);
        NkmBaseRecordA* rightSecondary = nkmBaseGetRecord(*rightId);
        difference = leftSecondary->level - rightSecondary->level;
        if (difference == 0) {
            difference = *rightId - *leftId;
        }
    }
    return difference;
}
