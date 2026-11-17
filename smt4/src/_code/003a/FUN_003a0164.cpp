#include "gamedata/EquipmentSortPower.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"
extern "C" {
u32 contentGetEntryKind(u32 id);
EquipmentSortPowerPrimary *dataTable08Sub0GetRecord(u32 id);
}

static inline u16 equipmentSortPower(u16 id)
{
    u16 power = 0;
    switch (contentGetEntryKind(id)) {
    case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        power = dataTable08Sub2GetRecord(id)->priority;
        break;
    case 0:
        power = dataTable08Sub0GetRecord(id)->power;
        break;
    case 1:
        power = dataTable08Sub1GetRecord(id)->sortFlags & 0xFF;
        break;
    }
    return power;
}

// Sort by descending equipment power, then by the existing item ordering.
extern "C" s32 FUN_003a0164(const u16 *left, const u16 *right)
{
    u16 leftPower = equipmentSortPower(*left);
    s32 result = equipmentSortPower(*right) - leftPower;
    if (result == 0)
        result = aocEntryGetSortOrder(left) - aocEntryGetSortOrder(right);
    return result;
}
