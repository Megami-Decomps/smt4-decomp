#ifndef GAMEDATA_SAVED_UNIT_CHOICE_H
#define GAMEDATA_SAVED_UNIT_CHOICE_H

#include "common.h"
#include <stddef.h>

struct UnitSevenStats { u16 values[7]; };

/* Saved unit profile copied into the selection screen's highlighted slot. */
struct SavedUnitChoice {
    /* 0x00 */ char name[0x12];
    /* 0x12 */ UnitSevenStats base;
    /* 0x20 */ u32 bits;
    /* 0x24 */ u16 hp;
    /* 0x26 */ u16 mp;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ UnitSevenStats current;
    /* 0x3E */ UnitSevenStats maximum;
    /* 0x4C */ u8 alternate;
    /* 0x4D */ u8 unk4D[0x17];
    /* 0x64 */ u16 id;
    /* 0x66 */ u8 unk66[4];
    /* 0x6A */ u8 kind;
    /* 0x6B */ u8 unk6B[0x15];
};

typedef char SavedUnitChoiceOffsets[
    sizeof(UnitSevenStats) == 0xE && sizeof(SavedUnitChoice) == 0x80 &&
    offsetof(SavedUnitChoice, base) == 0x12 &&
    offsetof(SavedUnitChoice, maximum) == 0x3E &&
    offsetof(SavedUnitChoice, id) == 0x64 ? 1 : -1];

#endif
