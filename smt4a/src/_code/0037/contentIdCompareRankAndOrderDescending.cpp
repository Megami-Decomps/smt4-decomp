#include "common.h"
#include "gamedata/EquipmentRecordA.h"

// Sort content IDs by descending packed rank, then descending order.
extern "C" s32 contentIdCompareRankAndOrderDescending(const u16* firstId, const u16* secondId)
{
    EquipmentRecordA* first = itemTableGetEquipmentRecord(*firstId);
    EquipmentRecordA* second = itemTableGetEquipmentRecord(*secondId);
    s32 difference = (second->traits >> 20) - (first->traits >> 20);
    if (difference == 0) {
        first = itemTableGetEquipmentRecord(*firstId);
        second = itemTableGetEquipmentRecord(*secondId);
        difference = second->order - first->order;
    }
    return difference;
}
