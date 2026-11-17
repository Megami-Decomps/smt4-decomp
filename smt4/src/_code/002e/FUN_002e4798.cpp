#include "common.h"
#include "gamedata/EquipmentRecord.h"
extern "C" {
s32 FUN_002e4798(const u16 *firstId, const u16 *secondId)
{
    EquipmentRecord *first = dataTable08Sub2GetRecord(*firstId);
    EquipmentRecord *second = dataTable08Sub2GetRecord(*secondId);
    s32 difference = first->statBonus[3] - second->statBonus[3];
    if (difference == 0) { difference = second->id - first->id; }
    return difference;
}
}
