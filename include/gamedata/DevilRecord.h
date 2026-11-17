#ifndef GAMEDATA_DEVILRECORD_H
#define GAMEDATA_DEVILRECORD_H

#include "common.h"
#include <stddef.h>

/* The packed chances of a demon record (0x2C). */
struct DevilChanceData {
    /* 0x00, bits 0-6 */ u32 skillChance : 7;  /* base chance of a skill-triggered roll */
    /* 0x00, bits 7-13 */ u32 baseChance : 7;
    /* 0x00, bits 14-20 */ u32 dropGroup : 7;  /* row of data table 0x14's drop groups */
    /* 0x00, bits 21-31 */ u32 unk21 : 11;
};

/* A demon's response to one element: the resistance id and its affinity state. */
struct DevilAffinity {
    u16 id : 10;
    u16 state : 6;
};

/* A skill the demon learns on reaching a level. */
struct DevilLearnedSkill {
    u16 level;
    u16 id;
};

/* IV's demon record (data table 0, 0x94 bytes, sorted by id), as devilGetRecord returns it; add-on
   content supplies further records of the same layout. Apocalypse's differs: DevilRecordA in
   gamedata/DevilRecordA.h. */
struct DevilRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 race;
    /* 0x03 */ u8 level;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 category;          /* 1, 4, 5: the classes battle scripts look for */
    /* 0x06 */ u16 flags;            /* bit 0: listed in the demon stock */
    /* 0x08 */ u16 attackProperties; /* normal attack: bits 1-4 target, 5-7 minimum hits, 8-10 maximum hits */
    /* 0x0A */ u8 element;           /* normal attack's element (mapCategoryToTableId maps it to a table) */
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u8 attackAilment;     /* normal attack's ailment, 0 = none */
    /* 0x0D */ u8 unk0D[7];
    /* 0x14 */ u16 baseHp;
    /* 0x16 */ u16 baseMp;
    /* 0x18 */ u8 hpGrowth;          /* HP gained per level */
    /* 0x19 */ u8 mpGrowth;
    /* 0x1A */ u16 stats[5];         /* base strength, dexterity, magic, agility, luck */
    /* 0x24 */ u8 statGrowth[5];     /* growth weights of the five stats */
    /* 0x29 */ u8 evolutionLevel;    /* level at which the demon evolves */
    /* 0x2A */ u16 evolutionTarget;  /* the demon it evolves into */
    union {
        /* 0x2C */ u32 fusionRestrictions;  /* whole-word tests of the restriction bits; 0x200000: excluded */
        /* 0x2C */ DevilChanceData chance;
    };
    /* 0x30 */ u8 talkTone;
    /* 0x31 */ u8 talkAlternate;
    /* 0x32 */ u8 unk32;
    /* 0x33 */ u8 battleRace;        /* the race a battle summary shows */
    /* 0x34 */ u16 prerequisite;     /* bit 0: needs a registry record; upper bits: its index (0 = own id) */
    /* 0x36 */ u16 requiredFlag;     /* unlock flag; 0 = always unlocked */
    /* 0x38 */ u16 innateFlag;       /* bit set in a new unit's state */
    /* 0x3A */ u8 unk3A[2];
    /* 0x3C */ u16 skills[8];        /* initial skills */
    /* 0x4C */ DevilLearnedSkill learnedSkills[8];
    /* 0x6C */ DevilAffinity affinities[16];
    /* 0x8C */ u8 unk8C[4];
    /* 0x90 */ u16 model;            /* model, bust-up and texture id */
    /* 0x92 */ u8 effectGroup;       /* race effect group of the summon effect */
    /* 0x93 */ u8 unk93;
};

typedef char DevilRecordSizeCheck[sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilRecordPrefixCheck[
    offsetof(DevilRecord, race) == 2 && offsetof(DevilRecord, level) == 3 &&
    offsetof(DevilRecord, category) == 5 && offsetof(DevilRecord, flags) == 6 &&
    offsetof(DevilRecord, element) == 0x0A ? 1 : -1];
typedef char DevilRecordAttackCheck[
    offsetof(DevilRecord, attackProperties) == 8 && offsetof(DevilRecord, attackAilment) == 0x0C &&
    offsetof(DevilRecord, statGrowth) == 0x24 && offsetof(DevilRecord, battleRace) == 0x33 &&
    offsetof(DevilRecord, effectGroup) == 0x92 ? 1 : -1];
typedef char DevilRecordStatsCheck[
    offsetof(DevilRecord, baseHp) == 0x14 && offsetof(DevilRecord, baseMp) == 0x16 &&
    offsetof(DevilRecord, mpGrowth) == 0x19 && offsetof(DevilRecord, stats) == 0x1A &&
    offsetof(DevilRecord, evolutionLevel) == 0x29 && offsetof(DevilRecord, evolutionTarget) == 0x2A ? 1 : -1];
typedef char DevilRecordFieldsCheck[
    sizeof(DevilChanceData) == 4 && offsetof(DevilRecord, chance) == 0x2C &&
    offsetof(DevilRecord, talkTone) == 0x30 && offsetof(DevilRecord, talkAlternate) == 0x31 &&
    offsetof(DevilRecord, prerequisite) == 0x34 && offsetof(DevilRecord, requiredFlag) == 0x36 &&
    offsetof(DevilRecord, innateFlag) == 0x38 && offsetof(DevilRecord, skills) == 0x3C &&
    offsetof(DevilRecord, learnedSkills) == 0x4C && offsetof(DevilRecord, affinities) == 0x6C &&
    offsetof(DevilRecord, model) == 0x90 ? 1 : -1];
typedef char DevilLearnedSkillOffsets[
    sizeof(DevilLearnedSkill) == 4 && offsetof(DevilLearnedSkill, id) == 2 && sizeof(DevilAffinity) == 2 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* The demon record for an id (base table, overridden by add-on records). Retail's definition takes a
   u16 (it only stores the halfword), but its callers pass ids unextended, so they see a u32; the
   definition file (devilGetRecord.cpp) defines DEVIL_RECORD_OWN_PROTOTYPE and declares the u16 one. */
#ifndef DEVIL_RECORD_OWN_PROTOTYPE
DevilRecord *devilGetRecord(u32 id);
#endif
/* Canonical declaration (matches the definition). */
bool aocRunByName(u32 arg0, u32 name, u32 arg2, int checked);
#ifdef __cplusplus
}
#endif

#endif
