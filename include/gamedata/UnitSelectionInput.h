#ifndef GAMEDATA_UNIT_SELECTION_INPUT_H
#define GAMEDATA_UNIT_SELECTION_INPUT_H
#include "common.h"
#include <stddef.h>

struct UnitSelectionInput {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 value;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ u32 parameter;
    /* 0x34 */ u16 unitId;
    /* 0x36 */ u8 unk36;
    /* 0x37 */ u8 mode;
};
typedef char UnitSelectionInputOffsets[sizeof(UnitSelectionInput) == 0x38 &&
    offsetof(UnitSelectionInput, value) == 0x24 &&
    offsetof(UnitSelectionInput, parameter) == 0x30 &&
    offsetof(UnitSelectionInput, unitId) == 0x34 &&
    offsetof(UnitSelectionInput, mode) == 0x37 ? 1 : -1];
#endif
