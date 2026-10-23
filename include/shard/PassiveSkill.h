/* Passive skill records, looked up by skill id. */
#ifndef SHARD_PASSIVESKILL_H
#define SHARD_PASSIVESKILL_H

#include "common.h"
#include <stddef.h>

struct PassiveSkillRecord {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u16 sortKey;
    /* 0x24 */ u8 unk24[0x2];
    /* 0x26 */ u8 holdChance;    /* percent: chance the skill applies when held */
    /* 0x27 */ u8 triggerChance; /* percent */
    union {
        /* 0x28 */ u8 unk28[0x10];
        struct {
            /* 0x28 */ u8 unk28[0xA];
            /* 0x32 */ u8 category;
        } classification;
        struct {
            u8 unk28[0xE];
            /* 0x36 */ u16 percent;
        } scaling;
    };
    /* 0x38 */ u32 affinity;
};

typedef char PassiveSkillRecordAffinityOffsetCheck[
    offsetof(PassiveSkillRecord, affinity) == 0x38 ? 1 : -1];
typedef char PassiveSkillRecordHoldChanceOffsetCheck[
    offsetof(PassiveSkillRecord, holdChance) == 0x26 ? 1 : -1];
typedef char PassiveSkillRecordSortKeyOffsetCheck[
    offsetof(PassiveSkillRecord, sortKey) == 0x22 ? 1 : -1];
typedef char PassiveSkillRecordCategoryOffsetCheck[
    offsetof(PassiveSkillRecord, classification.category) == 0x32 && sizeof(PassiveSkillRecord) == 0x3C ? 1 : -1];
typedef char PassiveSkillRecordScalingOffsetCheck[
    offsetof(PassiveSkillRecord, scaling.percent) == 0x36 && sizeof(PassiveSkillRecord) == 0x3C ? 1 : -1];

/* An active skill record (ids up to 400). */
struct ActiveSkillRecord {
    union {
        /* 0x00 */ u8 unk00[0x24];
        struct {
            /* 0x00 */ u8 unk00[0x20];
            /* 0x20 */ u16 costParameter;
        } cost;
        struct {
            u8 prefix00[0x23];
            u8 category;
        } classification;
    };
    /* 0x24 */ u16 sortKey;
};

typedef char ActiveSkillRecordCostOffsetCheck[
    offsetof(ActiveSkillRecord, cost.costParameter) == 0x20 &&
    sizeof(ActiveSkillRecord) == 0x26 ? 1 : -1];
typedef char ActiveSkillRecordCategoryOffsetCheck[
    offsetof(ActiveSkillRecord, classification.category) == 0x23 &&
    sizeof(ActiveSkillRecord) == 0x26 ? 1 : -1];

/* A skill list entry: the skill id and the unit that holds it (negative for none). */
struct SkillListEntry {
    /* 0x00 */ u32 skillId;
    /* 0x04 */ s32 unit;
};

extern "C" const PassiveSkillRecord *passiveSkillLookupRecord(u32 id);

#endif
