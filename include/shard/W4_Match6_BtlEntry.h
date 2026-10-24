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
    /* 0x0D0 */ u8 unk0d0[0x1B4 - 0xD0];
    /* 0x1B4 */ s16 value;          /* returned by the script command that looks an entry up by listed id */
    /* 0x1B6 */ s16 maxHp;
    /* 0x1B8 */ s16 mp;
    /* 0x1BA */ s16 maxMp;
    /* 0x1BC */ u8 unk1bc[0xa];
    /* 0x1C6 */ u16 groupMask;      /* one bit per script group */
    union {
        /* 0x1C8 */ u8 unk1c8[0x278 - 0x1C8];
        struct {
            u8 unk1C8[0x58];
            /* 0x220 */ BtlEntryActionIV selected;
            /* 0x228 */ BtlEntryActionIV available[5];
        } actionList;
    };
    /* 0x278 */ BtlEquip *equipA;
    /* 0x27C */ BtlEquip *equipB;
    union {
        /* 0x280 */ u32 unk280;
        /* 0x280 */ BtlEquip *reserve;
    };
    /* 0x284 */ void *devil;        /* non-NULL when the entry is a demon */
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

struct BtlEncounterEntry {
    s32 id;
    s16 listedId;
    s8 category;
    u8 unk07[0x19];
};
typedef char BtlEncounterEntrySizeCheck[sizeof(BtlEncounterEntry) == 0x20 ? 1 : -1];

struct BtlLoadedActionResource {
    u32 unk00;
    s32 id; /* 0x04 */
};

typedef struct BtlMainState {
    union {
        /* 0x0000 */ u8 unk0000[0x1FC0];
        struct {
            u8 prefix[0x58];
            /* 0x58 */ u32 job;
        } editor;
        struct {
            u8 unk000BeforeSprite[0xC0];
            /* 0x0C0 */ s32 templateIndex;
            /* 0x0C4 */ s32 fallbackIndex;
            u8 unk0C8[0x7C];
            /* 0x144 */ void *metadata;
            /* 0x148 */ s32 metadataIndex;
            u32 unk14C;
            /* 0x150 */ s32 bank;
            /* 0x154 */ s32 page;
            /* 0x158 */ u32 coordinates[5];
        } spriteSource;
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
        struct {
            u32 ownerJob;
            u32 unk04;
            u32 drawJob;
            u8 unk0c[0xb4];
            s32 encounterId; /* 0xc0 */
            u8 unkc4[0x1c];
            u32 flags; /* 0xe0 */
            u8 unke4[0x310];
            BtlEncounterEntry records[50]; /* 0x3f4 */
        } encounter;
        struct {
            u8 unk0000[0x84];
            s32 index; /* 0x84 */
            s32 mode; /* 0x88 */
        } actionState;
    };
    /* 0x1FC0 */ BtlEntry *entries; /* BTL_ENTRY_COUNT entries */
    union {
        /* 0x1FC4 */ u8 unk1fc4[0xC];
        s16 eventCount; /* 0x1fc4 */
        struct {
            u8 unk1FC4[2];
            /* 0x1FC6 */ s16 gate;
        } emergencyAction;
        struct {
            u8 unk1FC4[4];
            /* 0x1FC8 */ s16 kind;
        } resolution;
    };
    /* 0x1FD0 */ s64 pendingAction;
    union {
        /* 0x1FD8 */ u8 unk1fd8[0x44A0 - 0x1FD8];
        /* 0x1FD8 */ s64 secondaryPendingAction;
        struct {
            u8 unk1FD8[0x15C];
            /* 0x2134 */ BtlLoadedActionResource *resources[42];
            /* 0x21DC */ s16 retainedIds[42];
            u8 unk2230[0x2224];
            /* 0x4454 */ s32 selectedAction;
            /* 0x4458 */ BtlLoadedActionResource *selectedResource;
        } actionCleanup;
        struct {
            u8 prefix1FD8[0x258];
            u32 messageHandle;
        } dialog;
    };
    /* 0x44A0 */ u32 battleFlags;
    union {
        /* 0x44A4 */ u8 unk44a4[0x49C0 - 0x44A4];
        /* 0x44A4 */ u32 spriteFlags;
        struct {
            u8 unk44a4[4];
            /* 0x44A8 */ u32 flags;
        } editorControl;
        struct {
            u8 unk44a4[0x13];
            u8 blocked; /* 0x44b7 */
        } encounterControl;
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
typedef char BtlMainStateActionCleanupOffsets[
    __INTADDR__(&((BtlMainState *)0)->actionCleanup.resources) == 0x2134 &&
    __INTADDR__(&((BtlMainState *)0)->actionCleanup.retainedIds) == 0x21DC &&
    __INTADDR__(&((BtlMainState *)0)->actionCleanup.selectedAction) == 0x4454 &&
    __INTADDR__(&((BtlMainState *)0)->actionCleanup.selectedResource) == 0x4458 &&
    sizeof(BtlMainState) == 0x49C8 ? 1 : -1];
typedef char BtlMainStateSecondaryPendingActionOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->secondaryPendingAction) == 0x1FD8 &&
    sizeof(BtlMainState) == 0x49C8 ? 1 : -1];
typedef char BtlEquipmentSkillIdsOffsetCheck[
    __INTADDR__(&((BtlEquip *)0)->skillIds) == 0x34 && sizeof(BtlEquip) == 0x44 ? 1 : -1];
typedef char BtlMainStateDialogOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->dialog.messageHandle) == 0x2230 &&
    sizeof(BtlMainState) == 0x49C8 ? 1 : -1];
typedef char BtlMainStateEmergencyActionGateOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->emergencyAction.gate) == 0x1FC6 &&
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
typedef char BtlMainEncounterOffsetsCheck[
    __INTADDR__(&((BtlMainState *)0)->encounter.drawJob) == 8 &&
    __INTADDR__(&((BtlMainState *)0)->encounter.encounterId) == 0xc0 &&
    __INTADDR__(&((BtlMainState *)0)->encounter.flags) == 0xe0 &&
    __INTADDR__(&((BtlMainState *)0)->encounter.records) == 0x3f4 &&
    __INTADDR__(&((BtlMainState *)0)->encounterControl.blocked) == 0x44b7 &&
    sizeof(BtlMainState) == 0x49c8 ? 1 : -1];
typedef char BtlMainActionStateOffsetsCheck[
    __INTADDR__(&((BtlMainState *)0)->actionState.index) == 0x84 &&
    __INTADDR__(&((BtlMainState *)0)->actionState.mode) == 0x88 &&
    __INTADDR__(&((BtlMainState *)0)->eventCount) == 0x1fc4 &&
    sizeof(BtlMainState) == 0x49c8 ? 1 : -1];
typedef char BtlMainSpriteSourceOffsetsCheck[
    __INTADDR__(&((BtlMainState *)0)->spriteSource.templateIndex) == 0xC0 &&
    __INTADDR__(&((BtlMainState *)0)->spriteSource.metadata) == 0x144 &&
    __INTADDR__(&((BtlMainState *)0)->spriteSource.coordinates) == 0x158 &&
    __INTADDR__(&((BtlMainState *)0)->spriteFlags) == 0x44A4 &&
    sizeof(BtlMainState) == 0x49C8 ? 1 : -1];
typedef char BtlMainResolutionKindOffsetCheck[
    __INTADDR__(&((BtlMainState *)0)->resolution.kind) == 0x1fc8 &&
    sizeof(BtlMainState) == 0x49c8 ? 1 : -1];

#endif
