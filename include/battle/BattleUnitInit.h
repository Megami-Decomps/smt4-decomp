/* Battle unit state block (the record the battle builds when a unit joins) and the demon/party
 * record it is initialised from. Shared by the unit initialisers of Apocalypse (0x3E9CEC, 0x3ECFB4). */
#ifndef BATTLE_BATTLEUNITINIT_H
#define BATTLE_BATTLEUNITINIT_H

#include "common.h"
#include <stddef.h>

/* Four words of damage-affinity data. */
struct UnitAffinities {
    u32 words[4];
};

/* A demon/party record as the battle reads it when it builds a unit. */
struct UnitSourceRecord {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 level;
    /* 0x12 */ u16 stats[5];
    /* 0x1C */ u8 unk1C[0xE];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2E[6];
    /* 0x34 */ UnitAffinities affinities;
    /* 0x44 */ u8 unk44[0x1C];
    /* 0x60 */ u16 unk60;
    /* 0x62 */ u16 id;
    /* 0x64 */ u16 unk64;
};

/* A skill slot: id in the low ten bits, category in the top six. */
struct SkillSlot {
    u16 id : 10;
    u16 category : 6;
};

/* Vital values; a unit keeps the current set and the set it started with. */
struct UnitVitals {
    /* 0x00 */ s32 hp;
    /* 0x04 */ s32 maxHp;
    /* 0x08 */ s32 mp;
    /* 0x0C */ s32 level;
    /* 0x10 */ u16 stats[5];
    /* 0x1A */ u16 pad1A;
};

/* The 21 bytes the unit's flag block starts with. */
__packed struct UnitFlagBlock {
    u32 first;
    u32 second;
    u32 third;
    u32 fourth;
    u32 fifth;
    u8 last;
};

/* The unit's state block, as the battle fills it when the unit joins. */
struct BattleUnitState {
    /* 0x000 */ u8 kind;
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u16 sourceId;
    /* 0x004 */ s16 unk004;
    /* 0x006 */ s16 unk006;
    /* 0x008 */ s16 unk008;
    /* 0x00A */ u8 unk00A[2];
    /* 0x00C */ s32 unk00C;
    /* 0x010 */ u8 unk010[0xC4];
    /* 0x0D4 */ u8 clearedD4[4];
    /* 0x0D8 */ UnitVitals current;
    /* 0x0F4 */ UnitVitals initial;
    /* 0x110 */ u16 unk110;
    /* 0x112 */ u16 unk112;
    /* 0x114 */ u16 unk114;
    /* 0x116 */ u16 unk116;
    /* 0x118 */ UnitAffinities affinities;
    /* 0x128 */ SkillSlot skills[21];
    /* 0x152 */ SkillSlot learnable[21];
    /* 0x17C */ u8 flagsA[0x15];
    /* 0x191 */ UnitFlagBlock flagsB;
    /* 0x1A6 */ u8 learnableCategory[21];
    /* 0x1BB */ u8 unk1BB;
    /* 0x1BC */ u8 unk1BC;
    /* 0x1BD */ u8 unk1BD;
    /* 0x1BE */ u8 clear1BE[8];
    /* 0x1C6 */ u8 clear1C6[8];
    /* 0x1CE */ u8 clear1CE[8];
    /* 0x1D6 */ u8 clear1D6[0x50];
    /* 0x226 */ u8 unk226[2];
    /* 0x228 */ u32 unk228;
};

struct DemonModelInfo {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 kind;
    /* 0x0A */ u8 unk0A[0x31];
    /* 0x3B */ u8 unk3B;
    /* 0x3C */ u8 unk3C[0x77];
    /* 0xB3 */ u8 flagsB3;
};

typedef char BattleUnitStateLayoutCheck[offsetof(BattleUnitState, current) == 0xD8 && offsetof(BattleUnitState, unk00C) == 0xC &&
    offsetof(BattleUnitState, clearedD4) == 0xD4 &&
    offsetof(BattleUnitState, initial) == 0xF4 && offsetof(BattleUnitState, skills) == 0x128 &&
    offsetof(BattleUnitState, learnable) == 0x152 && offsetof(BattleUnitState, flagsB) == 0x191 &&
    offsetof(BattleUnitState, clear1BE) == 0x1BE && offsetof(BattleUnitState, unk228) == 0x228 ? 1 : -1];
typedef char UnitSourceRecordLayoutCheck[offsetof(UnitSourceRecord, hp) == 0x2A &&
    offsetof(UnitSourceRecord, affinities) == 0x34 && offsetof(UnitSourceRecord, id) == 0x62 ? 1 : -1];
typedef char DemonModelInfoLayoutCheck[offsetof(DemonModelInfo, flagsB3) == 0xB3 ? 1 : -1];

#endif
