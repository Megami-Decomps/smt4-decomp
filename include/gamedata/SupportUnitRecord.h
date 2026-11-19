#ifndef GAMEDATA_SUPPORTUNITRECORD_H
#define GAMEDATA_SUPPORTUNITRECORD_H

#include "common.h"
#include "gamedata/PackedSkillSlot.h"
#include <stddef.h>

struct SupportUnitRecord {
    /* 0x00 */ u8 unk00[8];
    union {
        /* 0x08 */ u32 flags;
        struct {
            u32 unk00 : 7;
            u32 targeting : 4;
            u32 minimumHits : 3;
            u32 maximumHits : 3;
            u32 element : 5;
            u32 unk22 : 10;
        } attackBits; /* the unit's normal attack */
    };
    union {
        /* 0x0C */ u8 unk0C[0x18];
        struct {
            /* 0x0C */ u8 unk0C;
            /* 0x0D */ u8 ailment;
            /* 0x0E */ u8 ailmentRate;
            /* 0x0F */ u8 unk0F;
            /* 0x10 */ u16 unk10;
            /* 0x12 */ u16 power;
        } attack;
        struct {
            u8 prefix0C[8];
            u16 base[7];
            u8 suffix22[2];
        } stats;
    };
    /* 0x24 */ PackedSkillSlot packedSkills[1];
    union {
        /* 0x26 */ u8 unk26[0x36];
        struct {
            u8 unk26[0x22];
            /* 0x48 */ char name[0x14];
        } aiScript;
        struct {
            u8 unk26[0x34];
            /* 0x5A */ u16 id;  /* the record's demon (its icon and model) */
        } demon;
    };
};

typedef char SupportUnitRecordSizeCheck[sizeof(SupportUnitRecord) == 0x5C ? 1 : -1];
typedef char SupportUnitRecordSkillOffsetCheck[
    offsetof(SupportUnitRecord, packedSkills) == 0x24 ? 1 : -1];
typedef char SupportUnitAiScriptOffsetCheck[
    offsetof(SupportUnitRecord, aiScript.name) == 0x48 &&
    sizeof(SupportUnitRecord) == 0x5C ? 1 : -1];
typedef char SupportUnitBaseStatsOffsetCheck[
    offsetof(SupportUnitRecord, stats.base) == 0x14 && sizeof(SupportUnitRecord) == 0x5C ? 1 : -1];

struct SupportUnitRecordA {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 flags;
    /* 0x0c */ u8 unk0c[0x1c];
    /* 0x28 */ PackedSkillSlot packedSkills[1];
    /* 0x2a */ u8 unk2a[0x3e];
};

typedef char SupportUnitRecordALayoutCheck[sizeof(SupportUnitRecordA) == 0x68 &&
    offsetof(SupportUnitRecordA, packedSkills) == 0x28 ? 1 : -1];

#endif
