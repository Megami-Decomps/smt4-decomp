#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

// Compares the signed table stat descending, then the table's explicit order ascending.
extern "C" s32 dataTable08CompareStatDescending(const u16* first, const u16* second)
{
    EquipmentRecord* a = dataTable08Sub2GetRecord(*first);
    EquipmentRecord* b = dataTable08Sub2GetRecord(*second);
    s32 order = b->hpBonus - a->hpBonus;
    if (order == 0) {
        a = dataTable08Sub2GetRecord(*first);
        b = dataTable08Sub2GetRecord(*second);
        order = a->order - b->order;
    }
    return order;
}
