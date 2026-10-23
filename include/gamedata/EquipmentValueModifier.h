#ifndef GAMEDATA_EQUIPMENT_VALUE_MODIFIER_H
#define GAMEDATA_EQUIPMENT_VALUE_MODIFIER_H
#include "common.h"
#include <stddef.h>

struct EquipmentValueItem {
    /* 0x00 */ u8 unk00[0x3A];
    /* 0x3A */ u16 modifierId;
};
struct EquipmentValueModifier {
    /* 0x00 */ u8 unk00[0x2F];
    /* 0x2F */ u8 percentage;
};
typedef char EquipmentValueItemOffsetCheck[offsetof(EquipmentValueItem, modifierId) == 0x3A ? 1 : -1];
typedef char EquipmentValueModifierOffsetCheck[offsetof(EquipmentValueModifier, percentage) == 0x2F ? 1 : -1];
#endif
