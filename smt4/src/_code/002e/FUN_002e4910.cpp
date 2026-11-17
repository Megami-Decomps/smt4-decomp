#include "common.h"
#include "gamedata/EquipmentRecord.h"
extern "C" {
s32 FUN_002e4910(const u16 *firstId, const u16 *secondId)
{
    EquipmentRecord *first = itemTableGetEquipmentRecord(*firstId);
    EquipmentRecord *second = itemTableGetEquipmentRecord(*secondId);
    s32 difference = first->statBonus[2] - second->statBonus[2];
    if (difference == 0) { difference = second->id - first->id; }
    return difference;
}
}
