#ifndef GAMEDATA_BATTLEUNITSKILLS_H
#define GAMEDATA_BATTLEUNITSKILLS_H
#include "common.h"
#include <stddef.h>
/* The equipment and skill-list prefix of a persistent battle unit record. */
struct BtlUnitRecordA {
    union {
        /* 0x00 */ u8 unk00[0x34];
        struct {
            /* 0x00 */ u16 melee;
            /* 0x02 */ u16 gun;
            /* 0x04 */ u16 gunRounds;
        } equipment;
        struct {
            /* 0x00 */ u8 unk00[0x1C];
            /* 0x1C */ s16 maxHp;
        } maximum;
    };
    /* 0x34 */ u16 skills[8];
};
typedef char BtlUnitRecordASkillsOffsetCheck[offsetof(BtlUnitRecordA, skills) == 0x34 ? 1 : -1];
typedef char BtlUnitRecordAMaximumOffsetCheck[
    offsetof(BtlUnitRecordA, equipment.gunRounds) == 4 &&
    offsetof(BtlUnitRecordA, maximum.maxHp) == 0x1C &&
    sizeof(BtlUnitRecordA) == 0x44 ? 1 : -1];
#endif
