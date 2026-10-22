#ifndef SHARD_W6_W6MATCH3_BTL_COMBATANT_ENTRY_A_H
#define SHARD_W6_W6MATCH3_BTL_COMBATANT_ENTRY_A_H

#include "common.h"
#include <stddef.h>

struct BtlUnitRecordA;

struct BtlCombatantEntryA {
    /* 0x000 */ u64 flags;
    /* 0x008 */ s16 unitIndex;
    union {
        /* 0x00A */ u8 unk00a[0x15c];
        struct {
            /* 0x00A */ u8 unk00aBeforeParameters[0x132];
            /* 0x13C */ s16 values[9];
        } parameters;
        struct {
            /* 0x00A */ u8 unk00aBeforeSelectionIndex[0x64];
            /* 0x06E */ s16 selectionIndex;
        } indexView;
    };
    /* 0x166 */ u16 id;
    union {
        /* 0x168 */ u8 unk168[0xf0];
        struct {
            /* 0x168 */ u8 unk168BeforeSelection[0xd2];
            /* 0x23A */ u8 marked;
        } selection;
        struct {
            /* 0x168 */ u8 unk168BeforeMotion[0xD1];
            /* 0x239 */ u8 state;
        } motion;
        struct {
            /* 0x168 */ u8 unk168BeforeLookup[4];
            /* 0x16C */ s16 lookupKey;
        } lookupView;
    };
    /* 0x258 */ s32 hp;
    /* 0x25C */ s32 maxHp;
    /* 0x260 */ s32 mp;
    /* 0x264 */ s32 maxMp;
    union {
        /* 0x268 */ u8 unk268[0xc];
        struct {
            /* 0x268 */ u8 unk268[6];
            /* 0x26E */ s16 value;
        } sortBase;
    };
    /* 0x274 */ u16 statusFlags;
    union {
        /* 0x276 */ u8 unk276[0x182];
        struct {
            /* 0x276 */ u8 unk276BeforeStats[0x40];
            /* 0x2B6 */ u16 values[1];
        } encodedStats;
        struct {
            /* 0x276 */ u8 unk276BeforeLevels[0x94];
            /* 0x30A */ u8 levels[21]; /* encodedStats.values >> 10 */
        } encodedLevels;
        struct {
            /* 0x276 */ u8 unk276BeforeThreshold[4];
            /* 0x27A */ u16 unk27A;
        } thresholdView;
        struct {
            u8 unk276BeforeSelection[0xac];
            s16 kind;    /* 0x322 */
            s16 variant; /* 0x324 */
        } attackSelection;
        struct {
            /* 0x276 */ u8 unk276BeforeQuery[0xBE];
            /* 0x334 */ u16 unk334;
        } queryValue;
        struct {
            /* 0x276 */ u8 unk276BeforeSortBonus[0x11A];
            /* 0x390 */ s16 value;
        } sortBonus;
        struct {
            /* 0x276 */ u8 unk276BeforeIndexedFlags[0x6A];
            /* 0x2E0 */ u8 values[21]; /* per-index flags the scripts query */
        } indexedFlags;
    };
    /* 0x3F8 */ BtlUnitRecordA *record; /* the unit record the combatant was built from */
    /* 0x3FC */ u8 unk3FC[0xC];
};

typedef char BtlCombatantEntryASizeCheck[sizeof(BtlCombatantEntryA) == 0x408 ? 1 : -1];
typedef char BtlCombatantIndexedFlagsOffsetCheck[
    offsetof(BtlCombatantEntryA, indexedFlags.values) == 0x2E0 ? 1 : -1];
typedef char BtlCombatantQueryValueOffsetCheck[
    offsetof(BtlCombatantEntryA, queryValue.unk334) == 0x334 ? 1 : -1];
typedef char BtlCombatantSelectionIndexOffsetCheck[
    offsetof(BtlCombatantEntryA, indexView.selectionIndex) == 0x6E ? 1 : -1];
typedef char BtlCombatantLookupKeyOffsetCheck[
    offsetof(BtlCombatantEntryA, lookupView.lookupKey) == 0x16C ? 1 : -1];
typedef char BtlCombatantSourceRecordOffsetCheck[
    offsetof(BtlCombatantEntryA, record) == 0x3F8 ? 1 : -1];
typedef char BtlCombatantEncodedLevelsOffsetCheck[
    offsetof(BtlCombatantEntryA, encodedLevels.levels) == 0x30A ? 1 : -1];
typedef char BtlCombatantThresholdOffsetCheck[
    offsetof(BtlCombatantEntryA, thresholdView.unk27A) == 0x27A ? 1 : -1];

#endif
