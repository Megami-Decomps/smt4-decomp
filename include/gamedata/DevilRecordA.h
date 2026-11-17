#ifndef GAMEDATA_DEVILRECORDA_H
#define GAMEDATA_DEVILRECORDA_H

#include "common.h"
#include <stddef.h>

/* A demon's response to one element: the resistance id and its affinity state. */
struct DevilAffinityA {
    u16 id : 10;
    u16 state : 6;
};

/* The normal-attack bits of a demon record's flag word (0x0A). */
struct DevilAttackA {
    u16 available : 1;
    u16 target : 4;
    u16 minHits : 3;
    u16 maxHits : 3;
    u16 unkBits : 5;
};

/* A demon's initial skill ids. */
struct DevilSkillListA {
    u16 ids[8];
};

/* A skill the demon learns on reaching a level. */
struct DevilLearnedSkillA {
    u16 level;
    u16 id;
};

/* Apocalypse's demon record (data table 0, 0xB4 bytes, sorted by id), as devilGetRecord returns it;
   add-on content supplies further records of the same layout. IV's differs: DevilRecord in
   gamedata/DevilRecord.h. */
struct DevilRecordA {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 race;
    /* 0x03 */ u8 unk03[3];
    /* 0x06 */ u16 level;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 category;            /* 4 for the demons script checks look for */
    union {
        /* 0x0A */ u16 flags;          /* bit 0: available (can be summoned, matched, listed) */
        /* 0x0A */ DevilAttackA attack; /* the normal attack's targeting and hit counts */
    };
    /* 0x0C */ u8 kind;                /* the normal attack's attribute; selects the option resource */
    /* 0x0D */ u8 unk0D;
    /* 0x0E */ u8 element;             /* the normal attack's element entry (the skill help lists it as its ailment) */
    /* 0x0F */ u8 unk0F[2];
    /* 0x11 */ u8 special;             /* nonzero: counts as element 12 */
    /* 0x12 */ u8 unk12[6];
    /* 0x18 */ u16 baseHp;
    /* 0x1A */ u16 baseMp;
    /* 0x1C */ u8 hpGrowth;            /* HP gained per level */
    /* 0x1D */ u8 mpGrowth;
    /* 0x1E */ u16 stats[5];           /* base strength, dexterity, magic, agility, luck */
    /* 0x28 */ u8 statGrowth[5];
    /* 0x2D */ u8 unk2D[3];
    /* 0x30 */ u16 evolutionLevel;     /* level at which the demon evolves */
    /* 0x32 */ u16 evolutionTarget;    /* the demon it evolves into */
    union {
        /* 0x34 */ u32 fusionRestrictions; /* 0x200000: excluded */
        struct {
            u32 skillChance : 7;       /* bits 0-6: base chance of the skill roll */
            u32 unk34Bits7 : 7;
            u32 characterId : 7;       /* bits 14-20: row of the character table */
            u32 unk34Bits21 : 4;
            u32 formationHeight : 4;   /* bits 25-28: the battle camera's height class */
            u32 unk34Bits29 : 3;
        } packed;
    };
    /* 0x38 */ u8 talkTone;            /* selects the talk tone archive (battle/talk/Tone%s.tbb) */
    /* 0x39 */ u8 talkAlternate;
    /* 0x3A */ u8 unk3A;
    /* 0x3B */ u8 battleRace;          /* the race a battle unit shows */
    /* 0x3C */ u16 saveRequirement;    /* bit 0: needs a save entry; bits 1-15: its index (0 = own id) */
    /* 0x3E */ u16 unlockFlag;
    union {
        /* 0x40 */ DevilSkillListA skills; /* initial skills */
        /* 0x40 */ u16 name[8];        /* the player's record (536) holds a name here */
    };
    /* 0x50 */ DevilLearnedSkillA learnedSkills[8];
    union {
        /* 0x70 */ DevilAffinityA affinities[16];
        /* 0x70 */ u16 affinityWords[16];
    };
    /* 0x90 */ u8 unk90[0xC];
    /* 0x9C */ u16 model;              /* model, bust-up and texture id */
    /* 0x9E */ u8 lineKey;             /* key of the demon's records in its line table */
    /* 0x9F */ u8 unk9F;
    /* 0xA0 */ s8 categoryModifiers[18];
    /* 0xB2 */ u8 extraActionChance;
    /* 0xB3 */ u8 extraFlags;          /* bit 1: plays the special confirm sound; bit 2: allows the command (FUN_002cc9e0, FUN_0020d3d4) */
};

typedef char DevilRecordASizeCheck[sizeof(DevilRecordA) == 0xB4 ? 1 : -1];
typedef char DevilRecordAPrefixCheck[
    offsetof(DevilRecordA, race) == 0x02 && offsetof(DevilRecordA, level) == 0x06 &&
    offsetof(DevilRecordA, category) == 0x09 && offsetof(DevilRecordA, flags) == 0x0A &&
    offsetof(DevilRecordA, element) == 0x0E && offsetof(DevilRecordA, baseHp) == 0x18 &&
    offsetof(DevilRecordA, mpGrowth) == 0x1D && offsetof(DevilRecordA, stats) == 0x1E &&
    offsetof(DevilRecordA, statGrowth) == 0x28 ? 1 : -1];
typedef char DevilRecordAFieldsCheck[
    offsetof(DevilRecordA, evolutionLevel) == 0x30 && offsetof(DevilRecordA, fusionRestrictions) == 0x34 &&
    offsetof(DevilRecordA, talkTone) == 0x38 && offsetof(DevilRecordA, saveRequirement) == 0x3C &&
    offsetof(DevilRecordA, skills) == 0x40 && offsetof(DevilRecordA, learnedSkills) == 0x50 && offsetof(DevilRecordA, affinities) == 0x70 &&
    offsetof(DevilRecordA, model) == 0x9C && offsetof(DevilRecordA, categoryModifiers) == 0xA0 &&
    offsetof(DevilRecordA, extraActionChance) == 0xB2 && offsetof(DevilRecordA, extraFlags) == 0xB3 ? 1 : -1];

/* A demon stock entry: demon ID and the number held. */
struct DevilStock {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 count;
};

/* The demon record for an id (base table, overridden by add-on records). Retail's definition takes a
   u16 (it only stores the halfword), but its callers pass ids unextended, so they see a u32; the
   definition file (devilGetRecord.cpp) defines DEVIL_RECORD_A_OWN_PROTOTYPE and declares the u16 one. */
#ifndef DEVIL_RECORD_A_OWN_PROTOTYPE
extern "C" DevilRecordA *devilGetRecord(u32 id);
#endif

#endif
