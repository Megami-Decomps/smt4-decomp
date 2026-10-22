#ifndef GAMEDATA_BATTLEUNITSKILLS_H
#define GAMEDATA_BATTLEUNITSKILLS_H
#include "common.h"
#include <stddef.h>
/* The skill-list prefix of a persistent battle unit record. */
struct BtlUnitRecordA {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 skills[8];
};
typedef char BtlUnitRecordASkillsOffsetCheck[offsetof(BtlUnitRecordA, skills) == 0x34 ? 1 : -1];
#endif
