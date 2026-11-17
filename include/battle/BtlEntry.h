/* The battle entry (Shin Megami Tensei IV): one of the battle main state's 0x6D combatant records
 * (BtlMainState.entries). btlMainFindEntryByListedId returns the entry; from 0xCC on it holds the
 * unit's data block (BtlUnitData), which btlFindEntryBlockByMemberId returns and a battle unit keeps
 * as BtlUnit.data. Apocalypse's entry is BtlCombatantEntryA (battle/BtlEntryA.h). */
#ifndef BATTLE_BTLENTRY_H
#define BATTLE_BTLENTRY_H

#include "common.h"
#include <stddef.h>

#define BTL_ENTRY_COUNT 0x6D

#define BTL_ENTRY_FLAG_ACTIVE   0x01
#define BTL_ENTRY_FLAG_PRESENT  0x10
#define BTL_ENTRY_FLAG_BLOCKED  0x40

/* A persistent unit record, including its eight equipment item ids. */
typedef struct BtlEquip {
    union {
        /* 0x00 */ u8 unk00[0xe];
        struct {
            u8 unk00[4];
            /* 0x04 */ u16 id;
        } weapon;
    };
    /* 0x0E */ s16 maxHp;
    /* 0x10 */ s16 maxMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2e[6];
    union {
        /* 0x34 */ u16 items[8];
        /* 0x34 */ u16 skillIds[8];
    };
} BtlEquip;

/* One action a unit can take: its kind and the skill or item id. */
struct BtlEntryActionIV {
    s16 kind;
    s16 id;
    u8 unk04[4];
};
typedef char BtlEntryActionIVSizeCheck[sizeof(BtlEntryActionIV) == 8 ? 1 : -1];

/* A unit's detail record: bit 9 of the halfword at 0x16 marks an eligible unit. */
struct BtlUnitDetail {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 flags;
};

/* The object a unit is linked to; its id at +0x46 is what a script refers to the unit by. */
typedef struct BtlUnitLink {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ s16 maxHp;
    /* 0x10 */ u8 unk10[0x36];
    /* 0x46 */ u16 id;
} BtlUnitLink;

struct BtlUnitSource {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 maxHp;
};

/* A unit's data block: the part of its battle entry from 0xCC on (entry offsets in brackets). The
 * battle initialises it from the unit's record (FUN_0023ebc8 for an enemy). */
typedef struct BtlUnitData {
    /* 0x000 */ u8 flags;           /* [0x0CC] bit 2: the unit fights on the second side */
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u16 id;             /* [0x0CE] the id scripts refer to the entry by */
    /* 0x004 */ s16 slot;           /* [0x0D0] -1 when none */
    /* 0x006 */ s16 alternateSlot;  /* [0x0D2] -1 when none */
    /* 0x008 */ s16 model;          /* [0x0D4] -1 when none */
    /* 0x00A */ u8 unk00A[2];
    /* 0x00C */ u32 parts[50];      /* [0x0D8] ids of the unit's part objects (idSlotsFindEntryById); the
                                     * first is the unit's identity key, matched against the action history */
    /* 0x0D4 */ s8 special;         /* [0x1A0] */
    /* 0x0D5 */ u8 unk0D5;
    /* 0x0D6 */ s16 baseStats[9];   /* [0x1A2] the stats below as the battle began */
    /* 0x0E8 */ s16 hp;             /* [0x1B4] */
    /* 0x0EA */ s16 maxHp;          /* [0x1B6] */
    /* 0x0EC */ s16 mp;             /* [0x1B8] */
    /* 0x0EE */ s16 maxMp;          /* [0x1BA] */
    /* 0x0F0 */ s16 strength;       /* [0x1BC] */
    /* 0x0F2 */ s16 dexterity;      /* [0x1BE] */
    /* 0x0F4 */ s16 magic;          /* [0x1C0] scales an attack's base power */
    /* 0x0F6 */ s16 agility;        /* [0x1C2] */
    /* 0x0F8 */ s16 luck;           /* [0x1C4] */
    /* 0x0FA */ u16 statusFlags;    /* [0x1C6] status bits (0x800: inactive, ...), one bit per script group */
    /* 0x0FC */ u16 primaryFlags;   /* [0x1C8] bit 4: marked (btlTargetSetFlag10) */
    /* 0x0FE */ u16 alternateFlags; /* [0x1CA] bit 4: marked (btlTargetSetFlag10, FUN_003cefe0) */
    /* 0x100 */ u16 level;          /* [0x1CC] */
    /* 0x102 */ u8 unk102[0x24];
    /* 0x126 */ u16 values[0x12];   /* [0x1F2] bits 10 and up hold a kind */
    /* 0x14A */ u8 unk14A;
    /* 0x14B */ u8 affinityIndex;   /* [0x217] index into an attack summary's resistance percents */
    /* 0x14C */ s16 actionKind;     /* [0x218] the action the unit takes next */
    /* 0x14E */ s16 actionArg;      /* [0x21A] */
    /* 0x150 */ u8 unk150[4];
    struct {
        /* 0x154 */ BtlEntryActionIV selected;     /* [0x220] */
        /* 0x15C */ BtlEntryActionIV available[5]; /* [0x228] */
    } actionList;
    /* 0x184 */ u8 unk184[4];
    /* 0x188 */ s16 speedBonus;     /* [0x254] */
    /* 0x18A */ u8 unk18A[2];
    /* 0x18C */ u32 history[6];     /* [0x258] */
    /* 0x1A4 */ s32 cursor;         /* [0x270] */
    /* 0x1A8 */ s32 total;          /* [0x274] a script-maintained accumulator (scrComm_Battle_AddToRecordTotal) */
    union {
        /* 0x1AC */ BtlEquip *equipA;     /* [0x278] */
        /* 0x1AC */ BtlUnitSource *source;
    };
    union {
        /* 0x1B0 */ BtlEquip *equipB;     /* [0x27C] */
        /* 0x1B0 */ BtlUnitLink *link;
    };
    union {
        /* 0x1B4 */ u32 unk1B4;           /* [0x280] */
        /* 0x1B4 */ BtlEquip *reserve;
    };
    union {
        /* 0x1B8 */ void *devil;          /* [0x284] non-NULL when the entry is a demon */
        /* 0x1B8 */ BtlUnitDetail *detail;
    };
} BtlUnitData; /* 0x1BC bytes */

typedef struct BtlEntry {
    union {
        /* 0x000 */ u32 flags;
        /* 0x000 */ u64 flagMask;       /* flags (low word) and the next word, updated as one mask */
    };
    /* 0x008 */ s16 ids[50];            /* the member ids the entry is listed under */
    /* 0x06C */ u8 unk06C[2];
    /* 0x06E */ s16 selectionIndex;
    /* 0x070 */ u8 unk070[2];
    /* 0x072 */ s16 stat[12];           /* indexed by the script's kind (7, 10 and 11 are used) */
    struct {
        /* 0x08A */ s16 unk08a;
        /* 0x08C */ s16 unk08c;
        /* 0x08E */ s16 primary;
        /* 0x090 */ s16 primaryAlternate;
        /* 0x092 */ s16 secondary;
        /* 0x094 */ s16 secondaryAlternate;
    } effects;                          /* effect counters, positive while the effect lasts */
    struct {
        /* 0x096 */ s16 value96;
        /* 0x098 */ s16 unk098;         /* positive while the entry can still act */
        /* 0x09A */ s16 counter;        /* positive while the entry has a pending effect */
    } turn;
    /* 0x09C */ u8 unk09C[0x12];
    /* 0x0AE */ s16 modifiers[9];
    /* 0x0C0 */ u8 unk0C0[4];
    /* 0x0C4 */ s32 forcedSlot;         /* 1 + an affinity slot forced on the entry's attacks, 0 when none */
    /* 0x0C8 */ s32 unk0C8;             /* <= 0 marks a downed live entry (FUN_00229914) */
    /* 0x0CC */ BtlUnitData data;
} BtlEntry; /* 0x288 bytes */

typedef char BtlUnitDataLayoutCheck[
    offsetof(BtlUnitData, id) == 2 && offsetof(BtlUnitData, model) == 8 && offsetof(BtlUnitData, parts) == 0xC &&
    offsetof(BtlUnitData, hp) == 0xE8 && offsetof(BtlUnitData, magic) == 0xF4 &&
    offsetof(BtlUnitData, statusFlags) == 0xFA && offsetof(BtlUnitData, level) == 0x100 &&
    offsetof(BtlUnitData, values) == 0x126 && offsetof(BtlUnitData, affinityIndex) == 0x14B &&
    offsetof(BtlUnitData, actionKind) == 0x14C && offsetof(BtlUnitData, actionList.available) == 0x15C &&
    offsetof(BtlUnitData, speedBonus) == 0x188 && offsetof(BtlUnitData, equipA) == 0x1AC &&
    offsetof(BtlUnitData, detail) == 0x1B8 && sizeof(BtlUnitData) == 0x1BC ? 1 : -1];
typedef char BtlEntryLayoutCheck[
    offsetof(BtlEntry, ids) == 8 && offsetof(BtlEntry, selectionIndex) == 0x6E &&
    offsetof(BtlEntry, stat) == 0x72 && offsetof(BtlEntry, effects.primary) == 0x8E &&
    offsetof(BtlEntry, turn.counter) == 0x9A && offsetof(BtlEntry, modifiers) == 0xAE &&
    offsetof(BtlEntry, data) == 0xCC && offsetof(BtlEntry, data.hp) == 0x1B4 &&
    offsetof(BtlEntry, data.equipA) == 0x278 && sizeof(BtlEntry) == 0x288 ? 1 : -1];
typedef char BtlEquipLayoutCheck[
    offsetof(BtlEquip, weapon.id) == 4 && offsetof(BtlEquip, skillIds) == 0x34 && sizeof(BtlEquip) == 0x44 &&
    offsetof(BtlUnitDetail, flags) == 0x16 && offsetof(BtlUnitSource, maxHp) == 0x1C &&
    offsetof(BtlUnitLink, id) == 0x46 && sizeof(BtlUnitLink) == 0x48 ? 1 : -1];

#endif
