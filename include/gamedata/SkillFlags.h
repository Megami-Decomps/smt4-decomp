#ifndef GAMEDATA_SKILLFLAGS_H
#define GAMEDATA_SKILLFLAGS_H

#include "common.h"
#include <stddef.h>

/* A record of data table 6, section 1 (four bytes, sorted by its halfword key). */
struct SkillFlagsRecord {
    /* 0x00 */ u16 id;
    union {
        /* 0x02 */ u8 category;  /* element / kind / type of the skill */
        struct { u8 category; } classification;
    };
    /* 0x03 */ u8 flags;         /* bits 0-4: power/cost/rank; 0x20: the skill is usable */
};
typedef char SkillFlagsCategoryOffset[offsetof(SkillFlagsRecord, classification.category) == 2 &&
    offsetof(SkillFlagsRecord, category) == 2 && offsetof(SkillFlagsRecord, flags) == 3 &&
    sizeof(SkillFlagsRecord) == 4 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Finds the record of data table 6/1 whose key is `id`. */
SkillFlagsRecord *dataTable06Sub1GetRecord(u16 id);
#ifdef __cplusplus
}
#endif

#endif
