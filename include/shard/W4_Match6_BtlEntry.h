/* Battle entry table (smt4): the battle main state's array of 0x6d combatant entries. */
#ifndef SHARD_W4_MATCH6_BTLENTRY_H
#define SHARD_W4_MATCH6_BTLENTRY_H

#include "common.h"

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

typedef struct BtlEntry {
    /* 0x000 */ u32 flags;
    union {
        /* 0x004 */ u8 unk004[0x6A];
        struct {
            /* 0x004 */ u8 unk004[4];
            /* 0x008 */ s16 ids[50];
        } members;
    };
    /* 0x06E */ s16 selectionIndex;
    /* 0x070 */ u8 unk070[2];
    /* 0x072 */ s16 stat[12];       /* indexed by the script's kind (7, 10 and 11 are used) */
    union {
        /* 0x08A */ u8 unk08a[0xCE - 0x8A];
        struct {
            u8 unk08a[0x24];
            u16 values[9];       /* 0x0AE */
        } modifiers;
        struct {
            u8 unk08a[0xC];
            /* 0x096 */ s16 value96;
            /* 0x098 */ s16 unk098;          /* positive while the entry can still act */
            /* 0x09A */ s16 counter;         /* positive while the entry has a pending effect */
        } turn;
        struct {
            s16 unk08a;            /* 0x08A */
            s16 unk08c;            /* 0x08C */
            s16 primary;           /* 0x08E */
            s16 primaryAlternate;  /* 0x090 */
            s16 secondary;         /* 0x092 */
            s16 secondaryAlternate; /* 0x094 */
        } effects;
    };
    /* 0x0CE */ u16 id;             /* the id scripts refer to the entry by */
    /* 0x0D0 */ u8 unk0d0[4];
    /* 0x0D4 */ s16 unk0D4;
    /* 0x0D6 */ u8 unk0d6[2];
    /* 0x0D8 */ u32 identity;       /* the unit's identity key, matched against the action history */
    /* 0x0DC */ u8 unk0dc[0x1B4 - 0xDC];
    /* 0x1B4 */ s16 hp;
    /* 0x1B6 */ s16 maxHp;
    /* 0x1B8 */ s16 mp;
    /* 0x1BA */ s16 maxMp;
    /* 0x1BC */ u8 unk1bc[6];
    /* 0x1C2 */ s16 speed;
    /* 0x1C4 */ s16 luck;
    /* 0x1C6 */ u16 groupMask;      /* one bit per script group */
    /* 0x1C8 */ u8 unk1c8[4];
    /* 0x1CC */ u16 level;
    /* 0x1CE */ u8 unk1CE[0x24];
    /* 0x1F2 */ u16 values[0x12];   /* bits 10 and up hold the entry's kind */
    /* 0x216 */ u8 unk216[0xA];
    struct {
        /* 0x220 */ BtlEntryActionIV selected;
        /* 0x228 */ BtlEntryActionIV available[5];
    } actionList;
    /* 0x250 */ u8 unk250[4];
    /* 0x254 */ s16 speedBonus;
    /* 0x256 */ u8 unk256[0x22];
    union {
        /* 0x278 */ BtlEquip *equipA;
        /* 0x278 */ BtlUnitSource *source;
    };
    union {
        /* 0x27C */ BtlEquip *equipB;
        /* 0x27C */ BtlUnitLink *link;
    };
    union {
        /* 0x280 */ u32 unk280;
        /* 0x280 */ BtlEquip *reserve;
    };
    union {
        /* 0x284 */ void *devil;        /* non-NULL when the entry is a demon */
        /* 0x284 */ BtlUnitDetail *detail;
    };
} BtlEntry; /* 0x288 bytes */

typedef char BtlEntryMaxHpOffsetCheck[__INTADDR__(&((BtlEntry *)0)->maxHp) == 0x1B6 ? 1 : -1];
typedef char BtlEntryEffectOffsets[
    __INTADDR__(&((BtlEntry *)0)->effects.primary) == 0x8E &&
    __INTADDR__(&((BtlEntry *)0)->effects.primaryAlternate) == 0x90 &&
    __INTADDR__(&((BtlEntry *)0)->effects.secondary) == 0x92 &&
    __INTADDR__(&((BtlEntry *)0)->effects.secondaryAlternate) == 0x94 &&
    sizeof(BtlEntry) == 0x288 ? 1 : -1];
typedef char BtlEntryActionOffsetsCheck[
    __INTADDR__(&((BtlEntry *)0)->actionList.selected) == 0x220 &&
    __INTADDR__(&((BtlEntry *)0)->actionList.available) == 0x228 &&
    __INTADDR__(&((BtlEquip *)0)->weapon.id) == 4 &&
    sizeof(BtlEntry) == 0x288 && sizeof(BtlEquip) == 0x44 ? 1 : -1];
typedef char BtlEntryUnitViewOffsets[
    __INTADDR__(&((BtlEntry *)0)->members.ids) == 8 &&
    __INTADDR__(&((BtlEntry *)0)->selectionIndex) == 0x6E &&
    __INTADDR__(&((BtlEntry *)0)->turn.value96) == 0x96 &&
    __INTADDR__(&((BtlEntry *)0)->turn.unk098) == 0x98 &&
    __INTADDR__(&((BtlEntry *)0)->turn.counter) == 0x9A &&
    __INTADDR__(&((BtlEntry *)0)->level) == 0x1CC &&
    __INTADDR__(&((BtlEntry *)0)->values) == 0x1F2 &&
    __INTADDR__(&((BtlEntry *)0)->equipA) == 0x278 &&
    sizeof(BtlEntry) == 0x288 ? 1 : -1];
typedef char BtlEntryUnitLinkOffsets[
    __INTADDR__(&((BtlEntry *)0)->unk0D4) == 0xD4 &&
    __INTADDR__(&((BtlEntry *)0)->hp) == 0x1B4 &&
    __INTADDR__(&((BtlEntry *)0)->source) == 0x278 &&
    __INTADDR__(&((BtlEntry *)0)->link) == 0x27C &&
    __INTADDR__(&((BtlEntry *)0)->detail) == 0x284 &&
    __INTADDR__(&((BtlUnitDetail *)0)->flags) == 0x16 &&
    __INTADDR__(&((BtlUnitSource *)0)->maxHp) == 0x1C &&
    __INTADDR__(&((BtlUnitLink *)0)->id) == 0x46 &&
    sizeof(BtlUnitLink) == 0x48 ? 1 : -1];
typedef char BtlEntrySpeedOffsets[
    __INTADDR__(&((BtlEntry *)0)->speed) == 0x1C2 &&
    __INTADDR__(&((BtlEntry *)0)->speedBonus) == 0x254 &&
    sizeof(BtlEntry) == 0x288 ? 1 : -1];

typedef char BtlEquipmentSkillIdsOffsetCheck[
    __INTADDR__(&((BtlEquip *)0)->skillIds) == 0x34 && sizeof(BtlEquip) == 0x44 ? 1 : -1];

typedef char BtlEntryIdentityLuckOffsets[
    __INTADDR__(&((BtlEntry *)0)->identity) == 0xD8 &&
    __INTADDR__(&((BtlEntry *)0)->luck) == 0x1C4 &&
    sizeof(BtlEntry) == 0x288 ? 1 : -1];

#endif
