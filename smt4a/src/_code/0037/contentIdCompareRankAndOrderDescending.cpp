#include "common.h"
#include "gamedata/EquipmentRecordA.h"

// Sort content IDs by descending packed rank, then descending order.
extern "C" s32 contentIdCompareRankAndOrderDescending(const u16* firstId, const u16* secondId)
{
    EquipmentRecordA* first = dataTable08Sub2GetRecord(*firstId);
    EquipmentRecordA* second = dataTable08Sub2GetRecord(*secondId);
    s32 difference = (second->traits >> 20) - (first->traits >> 20);
    if (difference == 0) {
        first = dataTable08Sub2GetRecord(*firstId);
        second = dataTable08Sub2GetRecord(*secondId);
        difference = second->order - first->order;
    }
    return difference;
}
