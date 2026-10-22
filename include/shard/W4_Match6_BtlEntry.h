/* Battle entry table (smt4): the battle main state's array of 0x6d combatant entries. */
#ifndef SHARD_W4_MATCH6_BTLENTRY_H
#define SHARD_W4_MATCH6_BTLENTRY_H

#include "common.h"

struct BtlActionRecord;

#define BTL_ENTRY_COUNT 0x6D

#define BTL_ENTRY_FLAG_ACTIVE   0x01
#define BTL_ENTRY_FLAG_PRESENT  0x10
#define BTL_ENTRY_FLAG_BLOCKED  0x40

/* A persistent unit record, including its eight equipment item ids. */
typedef struct BtlEquip {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0E */ s16 maxHp;
    /* 0x10 */ s16 maxMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2e[6];
    /* 0x34 */ u16 items[8];
} BtlEquip;

typedef struct BtlEntry {
    /* 0x000 */ u32 flags;
    union {
        /* 0x004 */ u8 unk004[0x6E];
        struct {
            /* 0x004 */ u8 unk004[4];
            /* 0x008 */ s16 ids[50];
        } members;
    };
    /* 0x072 */ s16 stat[12];       /* indexed by the script's kind (7, 10 and 11 are used) */
    union {
        /* 0x08A */ u8 unk08a[0xCE - 0x8A];
        struct {
            u8 unk08a[0x24];
            u16 values[9];       /* 0x0AE */
        } modifiers;
        struct {
            u8 unk08a[0xE];
            s16 unk098;          /* 0x098: positive while the entry can still act */
        } turn;
    };
    /* 0x0CE */ u16 id;             /* the id scripts refer to the entry by */
    /* 0x0D0 */ u8 unk0d0[0x1B4 - 0xD0];
    /* 0x1B4 */ s16 value;          /* returned by the script command that looks an entry up by listed id */
    /* 0x1B6 */ s16 maxHp;
    /* 0x1B8 */ s16 mp;
    /* 0x1BA */ s16 maxMp;
    /* 0x1BC */ u8 unk1bc[0xa];
    /* 0x1C6 */ u16 groupMask;      /* one bit per script group */
    /* 0x1C8 */ u8 unk1c8[0x278 - 0x1C8];
    /* 0x278 */ BtlEquip *equipA;
    /* 0x27C */ BtlEquip *equipB;
    union {
        /* 0x280 */ u32 unk280;
        /* 0x280 */ BtlEquip *reserve;
    };
    /* 0x284 */ void *devil;        /* non-NULL when the entry is a demon */
} BtlEntry; /* 0x288 bytes */

typedef char BtlEntryMaxHpOffsetCheck[__INTADDR__(&((BtlEntry *)0)->maxHp) == 0x1B6 ? 1 : -1];

typedef struct BtlMainState {
    union {
        /* 0x0000 */ u8 unk0000[0x1FC0];
        struct {
            u8 prefix[0x58];
            /* 0x58 */ u32 job;
        } editor;
        struct {
            u8 prefix[0x760];
            /* 0x760 */ s32 unitIndex;
        } talk;
        struct {
            u8 prefix[0x1E88];
            /* 0x1E88 */ void *file;
        } arrangement;
        struct {
            u8 unk0000[0x1E98];
            /* 0x1E98 */ struct BtlActionRecord *records;
            /* 0x1E9C */ u8 padding1E9C;
            /* 0x1E9D */ u8 completedCount;
        } actions;
    };
    /* 0x1FC0 */ BtlEntry *entries; /* BTL_ENTRY_COUNT entries */
    /* 0x1FC4 */ u8 unk1fc4[0xC];
    /* 0x1FD0 */ s64 pendingAction;
    union {
        /* 0x1FD8 */ u8 unk1fd8[0x44A0 - 0x1FD8];
        /* 0x1FD8 */ s64 secondaryPendingAction;
    };
    /* 0x44A0 */ u32 battleFlags;
    union {
        /* 0x44A4 */ u8 unk44a4[0x49C0 - 0x44A4];
        struct {
            u8 unk44a4[4];
            /* 0x44A8 */ u32 flags;
        } editorControl;
    };
    /* 0x49C0 */ s32 selectedGroup;  /* 0xff when no group is selected */
    /* 0x49C4 */ u8 unk49c4;
    /* 0x49C5 */ s8 hasActiveEntry;
} BtlMainState;

typedef char BtlMainStatePendingActionOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->pendingAction) == 0x1FD0 ? 1 : -1];
typedef char BtlMainStateHasActiveEntryOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->hasActiveEntry) == 0x49C5 ? 1 : -1];
typedef char BtlMainStateBattleFlagsOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->battleFlags) == 0x44A0 ? 1 : -1];
typedef char BtlMainStateSelectedGroupOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->selectedGroup) == 0x49C0 ? 1 : -1];
typedef char BtlMainStateSecondaryPendingActionOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->secondaryPendingAction) == 0x1FD8 &&
    sizeof(BtlMainState) == 0x49C8 ? 1 : -1];
typedef char BtlMainStateActionRecordsOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->actions.records) == 0x1E98 ? 1 : -1];
typedef char BtlMainStateArrangementFileOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->arrangement.file) == 0x1E88 ? 1 : -1];
typedef char BtlMainStateTalkUnitOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->talk.unitIndex) == 0x760 ? 1 : -1];
typedef char BtlMainStateCompletedCountOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->actions.completedCount) == 0x1E9D ? 1 : -1];
typedef char BtlMainStateEditorOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->editor.job) == 0x58 &&
    __INTADDR__(&((BtlMainState *)0)->editorControl.flags) == 0x44A8 ? 1 : -1];

#endif
