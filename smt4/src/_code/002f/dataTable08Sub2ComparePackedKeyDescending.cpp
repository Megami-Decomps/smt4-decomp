#include "gamedata/EquipmentRecord.h"

extern "C" {

s32 dataTable08Sub2ComparePackedKeyDescending(const u16* leftId, const u16* rightId)
{
    const EquipmentRecord* left =
        dataTable08Sub2GetRecord(*leftId);
    const EquipmentRecord* right =
        dataTable08Sub2GetRecord(*rightId);
    s32 difference = (s32)(right->traits >> 20) -
                     (s32)(left->traits >> 20);
    if (difference == 0) {
        left = dataTable08Sub2GetRecord(*leftId);
        right = dataTable08Sub2GetRecord(*rightId);
        difference = right->order - left->order;
    }
    return difference;
}

} /* extern "C" */
