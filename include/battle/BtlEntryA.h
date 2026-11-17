/* The battle entry (Apocalypse): one of the battle main state's combatant records
 * (BtlMainStateA.entries). btlMainFindEntryByListedId returns the entry; from 0x164 on it holds the
 * unit's data block (BtlUnitDataA), which btlFindEntryBlockByMemberId returns and a battle unit keeps
 * as BtlUnitA.data. Shin Megami Tensei IV's entry is BtlEntry (battle/BtlEntry.h). */
#ifndef BATTLE_BTLENTRYA_H
#define BATTLE_BTLENTRYA_H

#include "common.h"
#include <stddef.h>

struct BtlUnitRecordA;

struct BattleCandidateRecord {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 flags;
};

struct BattleSlotSourceRecordA {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
};

/* One action a unit can take: its kind and the skill or item id. */
struct BtlCombatantActionA {
    /* 0x00 */ s16 unk00;
    /* 0x02 */ s16 kind;
    /* 0x04 */ s16 id;
    /* 0x06 */ s16 unk06;
};

/* A unit's data block: the part of its battle entry from 0x164 on (entry offsets in brackets). The
 * battle initialises it from the unit's record (FUN_003ea69c for the player). */
typedef struct BtlUnitDataA {
    /* 0x000 */ u8 flags;           /* [0x164] bits 0-1: the unit's appearance animates */
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u16 id;             /* [0x166] the id scripts refer to the entry by */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s16 lookupKey;      /* [0x16C] btlFindSelectionIndexByLookupKey */
    /* 0x00A */ u8 unk00A[2];
    /* 0x00C */ u32 parts[50];      /* [0x170] ids of the unit's part objects (stateEntryFindById) */
    /* 0x0D4 */ s8 special;         /* [0x238] */
    /* 0x0D5 */ u8 motionState;     /* [0x239] */
    /* 0x0D6 */ u8 marked;          /* [0x23A] */
    /* 0x0D7 */ u8 unk0D7;
    /* 0x0D8 */ u8 unk0D8[0x1C];    /* [0x23C] the vitals and stats below as the battle began */
    /* 0x0F4 */ s32 hp;             /* [0x258] */
    /* 0x0F8 */ s32 maxHp;          /* [0x25C] */
    /* 0x0FC */ s32 mp;             /* [0x260] */
    /* 0x100 */ s32 maxMp;          /* [0x264] */
    /* 0x104 */ s16 strength;       /* [0x268] */
    /* 0x106 */ s16 dexterity;      /* [0x26A] */
    /* 0x108 */ s16 magic;          /* [0x26C] */
    /* 0x10A */ s16 agility;        /* [0x26E] the turn order's base speed */
    /* 0x10C */ s16 luck;           /* [0x270] */
    /* 0x10E */ u8 unk10E[2];
    /* 0x110 */ u16 statusFlags;    /* [0x274] status bits */
    /* 0x112 */ u16 primaryFlags;   /* [0x276] */
    /* 0x114 */ u16 alternateFlags; /* [0x278] */
    /* 0x116 */ u16 unk116;         /* [0x27A] */
    /* 0x118 */ u16 skillIds[8];     /* [0x27C] the unit's skill ids (FUN_0039d804) */
    /* 0x128 */ u8 unk128[0x2A];
    /* 0x152 */ u16 values[21];     /* [0x2B6] bits 10 and up hold a kind (BTL_UNIT_SLOT_TABLE) */
    /* 0x17C */ u8 slotFlags[21];   /* [0x2E0] per-slot flags the scripts query */
    /* 0x191 */ u8 unk191[0x15];
    /* 0x1A6 */ u8 levels[21];      /* [0x30A] values >> 10 */
    /* 0x1BB */ u8 unk1BB[3];
    /* 0x1BE */ s16 actionKind;     /* [0x322] the action the unit takes next */
    /* 0x1C0 */ s16 actionArg;      /* [0x324] */
    /* 0x1C2 */ u8 unk1C2[2];
    struct {
        /* 0x1C4 */ BtlCombatantActionA single;        /* [0x328] */
        /* 0x1CC */ u8 unk08[4];
        /* 0x1D0 */ u16 queryValue;                    /* [0x334] */
        /* 0x1D2 */ u8 unk0E[2];
        /* 0x1D4 */ BtlCombatantActionA available[10]; /* [0x338] */
    } actionList;
    /* 0x224 */ u8 unk224[4];
    /* 0x228 */ s32 unk228;         /* [0x38C] */
    /* 0x22C */ s16 speedBonus;     /* [0x390] added to agility for the turn order */
    /* 0x22E */ u8 unk22E[0x62];
    /* 0x290 */ s8 state;           /* [0x3F4] */
    /* 0x291 */ u8 unk291[3];
    /* 0x294 */ BtlUnitRecordA *record; /* [0x3F8] the unit record the combatant was built from */
    union {
        /* 0x298 */ u32 sourceId;   /* [0x3FC] */
        /* 0x298 */ BtlUnitRecordA *secondaryRecord;
        /* 0x298 */ BattleSlotSourceRecordA *sourceRecord;
    };
    /* 0x29C */ BtlUnitRecordA *specialRecord;     /* [0x400] */
    /* 0x2A0 */ BattleCandidateRecord *candidate;  /* [0x404] */
} BtlUnitDataA; /* 0x2A4 bytes */

struct BtlCombatantEntryA {
    /* 0x000 */ u64 flags;
    /* 0x008 */ s16 ids[50];        /* the member ids the entry is listed under; the first is the unit's index */
    /* 0x06C */ u8 unk06C[2];
    /* 0x06E */ s16 selectionIndex;
    /* 0x070 */ u8 unk070[4];
    /* 0x074 */ s32 properties[50]; /* per-property counters, indexed by a script's property id */
    /* 0x13C */ s16 modifiers[9];
    /* 0x14E */ u8 unk14E[0x16];
    /* 0x164 */ BtlUnitDataA data;
}; /* 0x408 bytes */

typedef char BtlUnitDataALayoutCheck[
    offsetof(BtlUnitDataA, id) == 2 && offsetof(BtlUnitDataA, parts) == 0xC && offsetof(BtlUnitDataA, hp) == 0xF4 &&
    offsetof(BtlUnitDataA, agility) == 0x10A && offsetof(BtlUnitDataA, statusFlags) == 0x110 &&
    offsetof(BtlUnitDataA, skillIds) == 0x118 &&
    offsetof(BtlUnitDataA, values) == 0x152 && offsetof(BtlUnitDataA, slotFlags) == 0x17C &&
    offsetof(BtlUnitDataA, levels) == 0x1A6 && offsetof(BtlUnitDataA, actionKind) == 0x1BE &&
    offsetof(BtlUnitDataA, actionList.queryValue) == 0x1D0 && offsetof(BtlUnitDataA, actionList.available) == 0x1D4 &&
    offsetof(BtlUnitDataA, unk228) == 0x228 && offsetof(BtlUnitDataA, speedBonus) == 0x22C &&
    offsetof(BtlUnitDataA, state) == 0x290 && offsetof(BtlUnitDataA, record) == 0x294 &&
    offsetof(BtlUnitDataA, candidate) == 0x2A0 && sizeof(BtlUnitDataA) == 0x2A4 ? 1 : -1];
typedef char BtlCombatantEntryALayoutCheck[
    offsetof(BtlCombatantEntryA, ids) == 8 && offsetof(BtlCombatantEntryA, selectionIndex) == 0x6E &&
    offsetof(BtlCombatantEntryA, properties) == 0x74 && offsetof(BtlCombatantEntryA, modifiers) == 0x13C &&
    offsetof(BtlCombatantEntryA, data) == 0x164 && offsetof(BtlCombatantEntryA, data.hp) == 0x258 &&
    offsetof(BtlCombatantEntryA, data.record) == 0x3F8 && sizeof(BtlCombatantEntryA) == 0x408 ? 1 : -1];
typedef char BtlCombatantRecordLayoutCheck[
    sizeof(BtlCombatantActionA) == 8 && offsetof(BtlCombatantActionA, kind) == 2 &&
    offsetof(BattleCandidateRecord, flags) == 0x16 &&
    offsetof(BattleSlotSourceRecordA, id) == 0x62 && sizeof(BattleSlotSourceRecordA) == 0x64 ? 1 : -1];

#endif
