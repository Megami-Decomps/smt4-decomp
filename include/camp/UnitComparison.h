#ifndef CAMP_UNIT_COMPARISON_H
#define CAMP_UNIT_COMPARISON_H
#include "common.h"
#include "addon/LookupRecord.h"
#include <stddef.h>

struct CampUnitComparison {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 race;
    /* 0x03 */ u8 category;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 flags;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u16 level;
    /* 0x0E */ u16 otherLevel;
    /* 0x10 */ u16 maximum;
    /* 0x12 */ u16 otherMaximum;
    /* 0x14 */ u16 secondaryMaximum;
    /* 0x16 */ u16 otherSecondaryMaximum;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ Table01Record *description;
};
typedef char CampUnitComparisonOffsets[
    offsetof(CampUnitComparison, level) == 0xC &&
    offsetof(CampUnitComparison, maximum) == 0x10 &&
    offsetof(CampUnitComparison, secondaryMaximum) == 0x14 &&
    offsetof(CampUnitComparison, description) == 0x1C &&
    sizeof(CampUnitComparison) == 0x20 ? 1 : -1];
#endif
