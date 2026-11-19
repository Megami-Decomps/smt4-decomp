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

/* Half of a unit's progress bytes, copied as words. */
struct UnitProgressWords {
    u32 words[8];
};

/* IV: a saved unit record (0x604 bytes): the 24 records of the save block's slot table
 * (SaveSlotTableIV.units), returned by gameGetUnitRecord() (gamedata/UnitRecordAccess.h). */
struct StatBlock {
    union {
        /* 0x00 */ u16 base[7];
        struct {
            /* 0x00 */ u16 id;
            /* 0x02 */ u16 kind;
            /* 0x04 */ u16 stats[5];
        } summary;
        struct {
            u8 unk00[4];
            /* 0x04 */ u16 id;
        } weapon;
    };
    /* 0x0E */ s16 maxHp;
    /* 0x10 */ s16 maxMp;
    /* 0x12 */ s16 effectiveStats[5];  /* strength, magic, dexterity, agility, luck */
    /* 0x1C */ u16 cur[2];
    /* 0x20 */ u16 cur2;
    /* 0x22 */ u16 cur6;
    /* 0x24 */ u16 cur3;
    /* 0x26 */ u16 cur4;
    /* 0x28 */ u16 cur5;
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2E[2];
    union {
        /* 0x30 */ u32 bits;
        /* 0x30 */ u32 experience;
    };
    union {
        /* 0x34 */ u16 resist[8];
        /* 0x34 */ UnitSummarySkills skills;
    };
    /* 0x44 */ u16 ailments;   /* ailment and state bits (bit 1: dead) */
    /* 0x46 */ u16 id;         /* the devil's id */
    union {
        /* 0x48 */ u8 level;
        /* 0x48 */ u8 unk48Bytes[0x5BC];
        /* the record's growth and progress state (kept inside the union: retail's stack layout of a
         * local StatBlock matches only with it) */
        struct {
                /* 0x48 */ u8 unk48;
                /* 0x49 */ u8 unk49;
                /* 0x4A */ u8 slot;        /* the record's own index in the slot table */
                /* 0x4B */ u8 unk4B;
                union {
                    /* 0x4C */ u8 progress[0x40];   /* per-unit progress bytes (learned skills, completed goals) */
                    /* 0x4C */ UnitProgressWords progressWords[2];  /* the same bytes, as the two blocks fusion copies */
                };
                /* 0x8C */ u8 counters[0x500];  /* saturating byte counters */
                /* 0x58C */ u16 hpBonus;
                /* 0x58E */ u16 mpBonus;
                /* 0x590 */ u16 statBonuses[5];
                /* 0x59A */ u8 unk59A[0x66];
                /* 0x600 */ u8 probabilityTier;
                /* 0x601 */ u8 initializationKind;
                /* 0x602 */ u8 unk602[2];
        } growth;
    };
};

typedef char StatBlockSizeCheck[sizeof(StatBlock) == 0x604 ? 1 : -1];
typedef char StatBlockSummaryOffsets[
    offsetof(StatBlock, summary.id) == 0 &&
    offsetof(StatBlock, summary.kind) == 2 &&
    offsetof(StatBlock, summary.stats) == 4 &&
    offsetof(StatBlock, experience) == 0x30 &&
    offsetof(StatBlock, skills) == 0x34 ? 1 : -1];
typedef char StatBlockUnitOffsets[offsetof(StatBlock, maxHp) == 0x0E && offsetof(StatBlock, maxMp) == 0x10 &&
    offsetof(StatBlock, hp) == 0x2A && offsetof(StatBlock, mp) == 0x2C && offsetof(StatBlock, ailments) == 0x44 &&
    offsetof(StatBlock, id) == 0x46 && offsetof(StatBlock, level) == 0x48 &&
    offsetof(StatBlock, growth.slot) == 0x4A &&
    offsetof(StatBlock, growth.progress) == 0x4C && offsetof(StatBlock, growth.counters) == 0x8C &&
    offsetof(StatBlock, effectiveStats) == 0x12 && offsetof(StatBlock, growth.statBonuses) == 0x590 &&
    offsetof(StatBlock, growth.probabilityTier) == 0x600 && offsetof(StatBlock, growth.initializationKind) == 0x601 ? 1 : -1];

extern "C" {
s32 FUN_001ab9dc(void);
}

#endif
