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
    /* 0x28 */ u8 unk28[0x10];
    /* 0x38 */ u32 affinity;
};

typedef char PassiveSkillRecordAffinityOffsetCheck[
    offsetof(PassiveSkillRecord, affinity) == 0x38 ? 1 : -1];
typedef char PassiveSkillRecordHoldChanceOffsetCheck[
    offsetof(PassiveSkillRecord, holdChance) == 0x26 ? 1 : -1];
typedef char PassiveSkillRecordSortKeyOffsetCheck[
    offsetof(PassiveSkillRecord, sortKey) == 0x22 ? 1 : -1];

/* An active skill record (ids up to 400). */
struct ActiveSkillRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 sortKey;
};

/* A skill list entry: the skill id and the unit that holds it (negative for none). */
struct SkillListEntry {
    /* 0x00 */ u32 skillId;
    /* 0x04 */ s32 unit;
};

extern "C" const PassiveSkillRecord *passiveSkillLookupRecord(u32 id);

#endif
