#ifndef GAMEDATA_UNITSTATS_H
#define GAMEDATA_UNITSTATS_H

#include "common.h"
#include <stddef.h>

struct UnitSummarySkills {
    union {
        u16 ids[8];
        u32 words[4];
    };
};

struct StatBlock {
    union {
        /* 0x00 */ u16 base[7];
        struct {
            /* 0x00 */ u16 id;
            /* 0x02 */ u16 kind;
            /* 0x04 */ u16 stats[5];
        } summary;
    };
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u16 unk10;
    /* 0x12 */ u8 unk12[0xA];
    /* 0x1C */ u16 cur[2];
    /* 0x20 */ u16 cur2;
    /* 0x22 */ u16 cur6;
    /* 0x24 */ u16 cur3;
    /* 0x26 */ u16 cur4;
    /* 0x28 */ u16 cur5;
    /* 0x2A */ u16 copy0;
    /* 0x2C */ u16 copy1;
    /* 0x2E */ u8 unk2E[2];
    union {
        /* 0x30 */ u32 bits;
        /* 0x30 */ u32 experience;
    };
    union {
        /* 0x34 */ u16 resist[8];
        /* 0x34 */ UnitSummarySkills skills;
    };
    /* 0x44 */ u8 unk44[2];
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 level;
    union {
        /* 0x49 */ u8 unk49[0x5BB];
        struct {
            u8 unk49[0x5B7];
            /* 0x600 */ u8 probabilityTier;
            union {
                u8 unk601[3];
                struct {
                    /* 0x601 */ u8 initializationKind;
                    u8 unk602[2];
                } initialization;
            };
        } encounter;
    };
};

typedef char StatBlockSizeCheck[sizeof(StatBlock) == 0x604 ? 1 : -1];
typedef char StatBlockProbabilityTierOffsetCheck[
    offsetof(StatBlock, encounter.probabilityTier) == 0x600 ? 1 : -1];
typedef char StatBlockInitializationKindOffsetCheck[
    offsetof(StatBlock, encounter.initialization.initializationKind) == 0x601 &&
    sizeof(StatBlock) == 0x604 ? 1 : -1];
typedef char StatBlockSummaryOffsets[
    offsetof(StatBlock, summary.id) == 0 &&
    offsetof(StatBlock, summary.kind) == 2 &&
    offsetof(StatBlock, summary.stats) == 4 &&
    offsetof(StatBlock, experience) == 0x30 &&
    offsetof(StatBlock, skills) == 0x34 ? 1 : -1];

#endif
