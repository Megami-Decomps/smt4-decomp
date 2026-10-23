#ifndef GAMEDATA_EQUIPMENTUPGRADESTATE_H
#define GAMEDATA_EQUIPMENTUPGRADESTATE_H
#include "common.h"
#include <stddef.h>

struct EquipmentUpgradeEntry {
    u8 unk00[8];
    u16 power;
    u16 secondary;
};
struct EquipmentUpgradeState {
    EquipmentUpgradeEntry categories[3][120];
};
struct EquipmentUpgradeModifiers {
    union { u32 word; s8 values[4]; };
    s8 extra;
};
struct EquipmentUpgradeBonusRecord {
    u8 unk00[0x31];
    u8 modifiers[5];
    s16 power;
};
typedef char EquipmentUpgradeOffsets[
    sizeof(EquipmentUpgradeEntry) == 0xc &&
    offsetof(EquipmentUpgradeState, categories) == 0 &&
    sizeof(EquipmentUpgradeModifiers) == 8 &&
    offsetof(EquipmentUpgradeBonusRecord, modifiers) == 0x31 &&
    offsetof(EquipmentUpgradeBonusRecord, power) == 0x36 ? 1 : -1];
#endif
