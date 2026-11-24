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
/* The points an equipment upgrade of one kind can still add: hit points (cap 999) and up to three
 * stats (cap 99), laid out like the bonuses already applied. */
struct UpgradeLimits {
    s16 hp;        /* 0x00 */
    u8 unk02[6];
    s16 statA;     /* 0x08 */
    s16 statB;     /* 0x0a */
    s16 statC;     /* 0x0c */
};
typedef char EquipmentUpgradeOffsets[
    sizeof(EquipmentUpgradeEntry) == 0xc &&
    offsetof(EquipmentUpgradeState, categories) == 0 &&
    sizeof(EquipmentUpgradeModifiers) == 8 ? 1 : -1];
#endif
