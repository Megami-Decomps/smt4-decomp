#include "gamedata/EquipmentSortPower.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {
const EquipmentSortPowerPrimary *dataTable08Sub0GetRecord(u32);
u32 contentGetEntryKind(u32);

// Compare equipment by subtype-specific power, then by its secondary ordering key.
s32 equipmentComparePowerThenOrder(const u16 *left, const u16 *right)
{
    u32 leftId = *left;
    u32 leftPower = 0;
    switch (contentGetEntryKind(leftId)) {
    case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        leftPower = dataTable08Sub2GetRecord(leftId)->priority;
        break;
    case 0: leftPower = dataTable08Sub0GetRecord(leftId)->power; break;
    case 1: leftPower = dataTable08Sub1GetRecord(leftId)->sortFlags & 0xff; break;
    }
    u32 rightId = *right;
    u32 rightPower = 0;
    switch (contentGetEntryKind(rightId)) {
    case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        rightPower = dataTable08Sub2GetRecord(rightId)->priority;
        break;
    case 0: rightPower = dataTable08Sub0GetRecord(rightId)->power; break;
    case 1: rightPower = dataTable08Sub1GetRecord(rightId)->sortFlags & 0xff; break;
    }
    s32 difference = leftPower - rightPower;
    if (difference == 0) {
        s32 leftOrder = aocEntryGetSortOrder(left);
        s32 rightOrder = aocEntryGetSortOrder(right);
        difference = leftOrder - rightOrder;
    }
    return difference;
}
}
