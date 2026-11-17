/* Passive skill records, looked up by skill id. */
#ifndef SHARD_PASSIVESKILL_H
#define SHARD_PASSIVESKILL_H

#include "common.h"
#include <stddef.h>

struct PassiveSkillRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u16 sortKey;
    /* 0x24 */ u8 hpPercentTens; /* stat passives: hp bonus, in tens of percent */
    /* 0x25 */ u8 mpPercentTens; /* stat passives: mp bonus, in tens of percent */
    /* 0x26 */ u8 holdChance;    /* percent: chance the skill applies when held */
    /* 0x27 */ u8 triggerChance; /* percent */
    union {
        /* 0x28 */ u8 unk28[0x10];
        struct {
            /* 0x28 */ u8 statBonus[5]; /* stat passives: the five stat bonuses */
        } stats;
        struct {
            u8 unk28[0x7];
            /* 0x2F */ u8 expBonus; /* experience passives: percent bonus (0 = none) */
        } experience;
        struct {
            /* 0x28 */ u8 unk28[0xA];
            /* 0x32 */ u8 category;
        } classification;
        struct {
            u8 unk28[0xE];
            /* 0x36 */ u16 percent;
        } scaling;
        struct {
            u8 unk28[0x9];
            /* 0x31 */ u8 weight;
        } weighting;
        struct {
            u8 unk28[0xD];
            /* 0x35 */ u8 tier;
        } rank;
    };
    /* 0x38 */ u32 affinity;
};

typedef char PassiveSkillRecordBonusOffsetCheck[
    offsetof(PassiveSkillRecord, hpPercentTens) == 0x24 && offsetof(PassiveSkillRecord, mpPercentTens) == 0x25 &&
    offsetof(PassiveSkillRecord, stats.statBonus) == 0x28 && offsetof(PassiveSkillRecord, experience.expBonus) == 0x2F ? 1 : -1];
typedef char PassiveSkillRecordAffinityOffsetCheck[
    offsetof(PassiveSkillRecord, affinity) == 0x38 ? 1 : -1];
typedef char PassiveSkillRecordHoldChanceOffsetCheck[
    offsetof(PassiveSkillRecord, holdChance) == 0x26 ? 1 : -1];
typedef char PassiveSkillRecordSortKeyOffsetCheck[
    offsetof(PassiveSkillRecord, sortKey) == 0x22 ? 1 : -1];
typedef char PassiveSkillRecordCategoryOffsetCheck[
    offsetof(PassiveSkillRecord, classification.category) == 0x32 && sizeof(PassiveSkillRecord) == 0x3C ? 1 : -1];
typedef char PassiveSkillRecordRankOffsetCheck[
    offsetof(PassiveSkillRecord, rank.tier) == 0x35 && sizeof(PassiveSkillRecord) == 0x3C ? 1 : -1];
typedef char PassiveSkillRecordScalingOffsetCheck[
    offsetof(PassiveSkillRecord, scaling.percent) == 0x36 && sizeof(PassiveSkillRecord) == 0x3C ? 1 : -1];

/* A skill list entry: the skill id and the unit that holds it (negative for none). */
struct SkillListEntry {
    /* 0x00 */ u32 skillId;
    /* 0x04 */ s32 unit;
};

struct SkillDataRecord;

extern "C" const PassiveSkillRecord *passiveSkillLookupRecord(u32 id);
/* Whether a passive skill's affinity word matches a skill record (the skill inheritance pick). IV only. */
extern "C" bool FUN_0026a604(const PassiveSkillRecord *passive, const SkillDataRecord *skill);

#endif
