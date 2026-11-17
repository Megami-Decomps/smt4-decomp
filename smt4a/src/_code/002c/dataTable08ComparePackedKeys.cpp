#include "common.h"
#include "gamedata/EquipmentRecordA.h"

// Compare the ten-bit primary key, then the secondary halfword key.
extern "C" s32 dataTable08ComparePackedKeys(const u16* leftId, const u16* rightId)
{
    EquipmentRecordA* left = itemTableGetEquipmentRecord(*leftId);
    EquipmentRecordA* right = itemTableGetEquipmentRecord(*rightId);
    s32 difference = (left->traits & 0x3ff) - (right->traits & 0x3ff);
    if (difference == 0) {
        EquipmentRecordA* leftSecondary = itemTableGetEquipmentRecord(*leftId);
        EquipmentRecordA* rightSecondary = itemTableGetEquipmentRecord(*rightId);
        difference = leftSecondary->order - rightSecondary->order;
    }
    return difference;
}
