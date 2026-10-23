#ifndef GAMEDATA_UNIT_SUMMARY_H
#define GAMEDATA_UNIT_SUMMARY_H
#include "gamedata/UnitStats.h"

struct StoredUnitSummary {
    /* 0x00 */ u16 level;
    /* 0x02 */ s16 stats[5];
    /* 0x0C */ u16 baseStats[5];
    union {
        /* 0x16 */ u8 options;
        struct {
            u8 low : 2;
            u8 bonus : 4;
            u8 high : 2;
        } optionBits;
    };
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u16 id;
    /* 0x1A */ u16 kind;
    /* 0x1C */ UnitSummarySkills skills;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 experience;
};
typedef char StoredUnitSummaryLayout[
    offsetof(StoredUnitSummary, stats) == 2 &&
    offsetof(StoredUnitSummary, baseStats) == 0xC &&
    offsetof(StoredUnitSummary, options) == 0x16 &&
    offsetof(StoredUnitSummary, id) == 0x18 &&
    offsetof(StoredUnitSummary, kind) == 0x1A &&
    offsetof(StoredUnitSummary, skills) == 0x1C &&
    offsetof(StoredUnitSummary, experience) == 0x30 &&
    sizeof(StoredUnitSummary) == 0x34 ? 1 : -1];
#endif
