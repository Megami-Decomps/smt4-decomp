#ifndef GAMEDATA_DEVILRECORD_H
#define GAMEDATA_DEVILRECORD_H

#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/Table00.h"
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

// Table 00's full retail record, with the common ID/race/level prefix.
struct DevilRecord {
    /* 0x00 */ DevilSortRecord header;
    union {
        /* 0x04 */ u8 unk04[0x28];
        struct {
            /* 0x04 */ u8 unk04[0x12];
            /* 0x16 */ u16 linkFlags;
            /* 0x18 */ u8 unk18[0x14];
        } links;
        struct {
            u8 unk04[2];
            /* 0x06 */ u16 flags;
        } fusion;
    };
    /* 0x2C */ DevilChanceData chance;
    union {
        /* 0x30 */ u8 unk30[0x60];
        struct {
            u8 unk30BeforePrerequisite[4];
            /* 0x34 */ u16 prerequisite;
            /* 0x36 */ u16 requiredFlag;
        } specialFusion;
        struct {
            /* 0x30 */ u8 tone;
            /* 0x31 */ u8 alternate;
        } talk;
        struct {
            /* 0x30 */ u8 unk30[0x4c];
            /* 0x7C */ u16 linkedIds[3];
            /* 0x82 */ u8 unk82[0x0e];
        } requirements;
        struct {
            /* 0x30 */ u8 unk30[0x28];
            /* 0x58 */ Table00Choice entries[3];
        } randomChoices;
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
        struct {
            u8 unk30BeforeScript[0x5A];
            /* 0x8A */ char name[6];
        } aiScript;
    };
    /* 0x90 */ u16 model;
    /* 0x92 */ u8 unk92[2];
};

typedef char DevilRecordSizeCheck[sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilRecordChanceLayoutCheck[sizeof(DevilChanceData) == 4 &&
    offsetof(DevilRecord, chance) == 0x2C && offsetof(DevilRecord, model) == 0x90 ? 1 : -1];
typedef char DevilRecordLinkLayoutCheck[offsetof(DevilRecord, links.linkFlags) == 0x16 && offsetof(DevilRecord, requirements.linkedIds) == 0x7c ? 1 : -1];
typedef char DevilRecordTalkOffsetCheck[
    offsetof(DevilRecord, talk.tone) == 0x30 &&
    offsetof(DevilRecord, talk.alternate) == 0x31 ? 1 : -1];
typedef char DevilRecordRandomChoicesOffsetCheck[
    offsetof(DevilRecord, randomChoices.entries) == 0x58 &&
    sizeof(Table00Choice) == 6 ? 1 : -1];

typedef char DevilRecordSkillListOffsetCheck[
    offsetof(DevilRecord, skillList.ids) == 0x3C ? 1 : -1];
typedef char DevilRecordInnateFlagOffsetCheck[
    offsetof(DevilRecord, initialization.innateFlag) == 0x38 &&
    sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilRecordAiScriptOffsetCheck[
    offsetof(DevilRecord, aiScript.name) == 0x8A &&
    sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilRecordFusionFlagsOffsetCheck[
    offsetof(DevilRecord, fusion.flags) == 6 &&
    sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilLearnedSkillOffsets[
    sizeof(DevilLearnedSkill) == 4 && offsetof(DevilLearnedSkill, id) == 2 &&
    offsetof(DevilRecord, learnedSkills.entries) == 0x4C &&
    sizeof(DevilRecord) == 0x94 ? 1 : -1];

typedef char DevilRecordSpecialFusionOffsets[
    offsetof(DevilRecord, specialFusion.prerequisite) == 0x34 &&
    offsetof(DevilRecord, specialFusion.requiredFlag) == 0x36 ? 1 : -1];
#endif
