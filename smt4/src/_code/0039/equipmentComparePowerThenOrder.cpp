#include "gamedata/EquipmentSortPower.h"

/* The third subtype's power is beyond the common table-8 prefix. */
struct EquipmentSortPowerTertiaryView {
    u8 unk00[0xa6];
    u16 power;
};
typedef char EquipmentSortPowerTertiaryOffset[
    offsetof(EquipmentSortPowerTertiaryView, power) == 0xa6 ? 1 : -1];

extern "C" {
const EquipmentSortPowerPrimary *dataTable08Sub0GetRecord(u32);
const EquipmentSortPowerSecondary *dataTable08Sub1GetRecord(u32);
const EquipmentSortPowerTertiaryView *dataTable08Sub2GetRecord(u32);
s32 FUN_00230f44(const u16 *);
u32 contentGetEntryKind(u32);

// Compare equipment by subtype-specific power, then by its secondary ordering key.
s32 equipmentComparePowerThenOrder(const u16 *left, const u16 *right)
{
    u32 leftId = *left;
    u32 leftPower = 0;
    switch (contentGetEntryKind(leftId)) {
    case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        leftPower = dataTable08Sub2GetRecord(leftId)->power;
        break;
    case 0: leftPower = dataTable08Sub0GetRecord(leftId)->power; break;
    case 1: leftPower = dataTable08Sub1GetRecord(leftId)->powerFlags & 0xff; break;
    }
    u32 rightId = *right;
    u32 rightPower = 0;
    switch (contentGetEntryKind(rightId)) {
    case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        rightPower = dataTable08Sub2GetRecord(rightId)->power;
        break;
    case 0: rightPower = dataTable08Sub0GetRecord(rightId)->power; break;
    case 1: rightPower = dataTable08Sub1GetRecord(rightId)->powerFlags & 0xff; break;
    }
    s32 difference = leftPower - rightPower;
    if (difference == 0) {
        s32 leftOrder = FUN_00230f44(left);
        s32 rightOrder = FUN_00230f44(right);
        difference = leftOrder - rightOrder;
    }
    return difference;
}
}
