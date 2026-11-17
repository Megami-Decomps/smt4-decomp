#ifndef SHARD_W6_W6MATCH2_RANKED_TABLE_RECORD_H
#define SHARD_W6_W6MATCH2_RANKED_TABLE_RECORD_H

#include "common.h"
#include <stddef.h>
struct PlayerEquipmentAppearance {
    union {
        u8 unk00[6];
        struct { u16 melee, firearm, ammunition; } equipped;
    };
    u16 head;
    u16 body;
    u16 legs;
};

typedef char PlayerEquipmentAppearanceOffsetsCheck[
    offsetof(PlayerEquipmentAppearance, equipped.firearm) == 2 &&
    offsetof(PlayerEquipmentAppearance, equipped.ammunition) == 4 &&
    sizeof(PlayerEquipmentAppearance) == 0xC ? 1 : -1];

struct EquipmentModelCompatibility {
    u16 modelId;
    u16 unk02;
    const u16 *compatibleIds;
    s32 count;
};
typedef char EquipmentModelCompatibilityLayoutCheck[sizeof(EquipmentModelCompatibility) == 0xc &&
    offsetof(EquipmentModelCompatibility, compatibleIds) == 4 &&
    offsetof(EquipmentModelCompatibility, count) == 8 &&
    offsetof(PlayerEquipmentAppearance, body) == 8 ? 1 : -1];

#endif
