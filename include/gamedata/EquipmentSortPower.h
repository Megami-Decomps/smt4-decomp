#ifndef GAMEDATA_EQUIPMENTSORTPOWER_H
#define GAMEDATA_EQUIPMENTSORTPOWER_H
#include "common.h"
#include <stddef.h>
struct EquipmentSortPowerPrimary {
    u8 unk00[0x55];
    u8 power;
};
struct EquipmentSortPowerSecondary {
    u8 unk00[0x70];
    u32 powerFlags;
};
typedef char EquipmentSortPowerOffsets[offsetof(EquipmentSortPowerPrimary, power) == 0x55 && offsetof(EquipmentSortPowerSecondary, powerFlags) == 0x70 ? 1 : -1];
#endif
