#ifndef GAMEDATA_SKILLFLAGS_H
#define GAMEDATA_SKILLFLAGS_H

#include "common.h"
#include <stddef.h>

struct SkillFlagsRecord {
    union {
        /* 0x00 */ u8 unk00[3];
        struct { u8 prefix[2]; u8 category; } classification;
    };
    /* 0x03 */ u8 flags;
};
typedef char SkillFlagsCategoryOffset[offsetof(SkillFlagsRecord, classification.category) == 2 &&
    sizeof(SkillFlagsRecord) == 4 ? 1 : -1];

#endif
