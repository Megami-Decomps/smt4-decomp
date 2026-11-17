#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

// Sorts IDs by ascending table rank, then descending explicit order.
extern "C" s32 dataTable08CompareRankAscending(const u16* first, const u16* second)
{
    EquipmentRecord* a = itemTableGetEquipmentRecord(*first);
    EquipmentRecord* b = itemTableGetEquipmentRecord(*second);
    s32 order = a->element - b->element;
    if (order == 0) {
        a = itemTableGetEquipmentRecord(*first);
        b = itemTableGetEquipmentRecord(*second);
        order = b->order - a->order;
    }
    return order;
}
