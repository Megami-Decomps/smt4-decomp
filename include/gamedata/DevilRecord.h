#ifndef GAMEDATA_DEVILRECORD_H
#define GAMEDATA_DEVILRECORD_H

#include "common.h"
#include <stddef.h>

struct DevilChanceData {
    /* 0x00, bits 0-6 */ u32 unk00 : 7;
    /* 0x00, bits 7-13 */ u32 baseChance : 7;
    /* 0x01, bits 14-31 */ u32 unk01 : 18;
};

struct DevilLearnedSkill {
    u16 unk00;
    u16 id;
};

/* IV's demon record (data table 0, 0x94 bytes, sorted by id), as devilGetRecord returns it; add-on
   content supplies further records of the same layout. Apocalypse's differs: DevilRecordA in
   gamedata/DevilRecordA.h. */
struct DevilRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 race;
    /* 0x03 */ u8 level;
    /* 0x04 */ u8 unk04[2];
    /* 0x06 */ u16 flags;      /* bit 0: listed in the demon stock */
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ u16 baseHp;
    /* 0x16 */ u16 baseMp;
    /* 0x18 */ u8 hpGrowth;    /* HP gained per level */
    /* 0x19 */ u8 mpGrowth;
    /* 0x1A */ u8 unk1A[0x12];
    union {
        /* 0x2C */ u32 fusionRestrictions;  /* whole-word tests of the restriction bits */
        /* 0x2C */ DevilChanceData chance;
    };
    union {
        /* 0x30 */ u8 unk30[0x60];
        struct {
            u8 unk30BeforePrerequisite[4];
            /* 0x34 */ u16 prerequisite;  /* bit 0: needs a registry record; upper bits: its index */
            /* 0x36 */ u16 requiredFlag;  /* unlock flag; 0 = always unlocked */
        } specialFusion;
        struct {
            /* 0x30 */ u8 tone;
            /* 0x31 */ u8 alternate;
        } talk;
        struct {
            /* 0x30 */ u8 unk30[0x0C];
            /* 0x3C */ u16 ids[8];
        } skillList;
        struct {
            /* 0x30 */ u8 unk30BeforeLearned[0x1C];
            /* 0x4C */ DevilLearnedSkill entries[8];
        } learnedSkills;
        struct {
            /* 0x30 */ u8 unk30BeforeInnate[8];
            /* 0x38 */ u16 innateFlag;
        } initialization;
    };
    /* 0x90 */ u16 model;
    /* 0x92 */ u8 unk92[2];
};

typedef char DevilRecordSizeCheck[sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilRecordPrefixCheck[offsetof(DevilRecord, race) == 2 && offsetof(DevilRecord, level) == 3 ? 1 : -1];
typedef char DevilRecordChanceLayoutCheck[sizeof(DevilChanceData) == 4 &&
    offsetof(DevilRecord, chance) == 0x2C && offsetof(DevilRecord, model) == 0x90 ? 1 : -1];
typedef char DevilRecordStatsCheck[offsetof(DevilRecord, flags) == 6 && offsetof(DevilRecord, baseHp) == 0x14 &&
    offsetof(DevilRecord, baseMp) == 0x16 && offsetof(DevilRecord, mpGrowth) == 0x19 ? 1 : -1];
typedef char DevilRecordTalkOffsetCheck[
    offsetof(DevilRecord, talk.tone) == 0x30 &&
    offsetof(DevilRecord, talk.alternate) == 0x31 ? 1 : -1];

typedef char DevilRecordSkillListOffsetCheck[
    offsetof(DevilRecord, skillList.ids) == 0x3C ? 1 : -1];
typedef char DevilRecordInnateFlagOffsetCheck[
    offsetof(DevilRecord, initialization.innateFlag) == 0x38 &&
    sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilLearnedSkillOffsets[
    sizeof(DevilLearnedSkill) == 4 && offsetof(DevilLearnedSkill, id) == 2 &&
    offsetof(DevilRecord, learnedSkills.entries) == 0x4C &&
    sizeof(DevilRecord) == 0x94 ? 1 : -1];

typedef char DevilRecordSpecialFusionOffsets[
    offsetof(DevilRecord, specialFusion.prerequisite) == 0x34 &&
    offsetof(DevilRecord, specialFusion.requiredFlag) == 0x36 ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif
/* The demon record for an id (base table, overridden by add-on records). */
DevilRecord *devilGetRecord(u16 id);
/* Canonical declaration (matches the definition). */
bool aocRunByName(u32 arg0, u32 name, u32 arg2, int checked);
#ifdef __cplusplus
}
#endif

#endif
