/* battle/btlAction.c: battle actions. */
#ifndef BATTLE_BTLACTION_H
#define BATTLE_BTLACTION_H

#include "common.h"
#include <stddef.h>

struct BtlActionRecord {
    union {
        /* 0x00 */ u8 unk00[0x48];
        /* 0x00 */ u32 restoredValue;
        struct {
            u8 unk00BeforeKind[0x3c];
            /* 0x3c */ u8 kind;
        } animation;
        struct {
            u8 unk00BeforeIdentity[0x44];
            /* 0x44 */ s8 category;
            /* 0x45 */ s8 variant;
        } identity;
        struct {
            /* 0x00 */ u8 unk00[0xC];
            /* 0x0C */ u32 value;
        } history;
        struct {
            /* 0x00 */ u8 unk00[0xC];
            /* 0x0C */ f32 position[3];
            /* 0x18 */ u8 unk18[0x28];
            /* 0x40 */ f32 scale;
        } geometry;
    };
    /* 0x48 */ u32 task;
    /* 0x4c */ u32 unk4c;
    /* 0x50 */ u32 status;
    /* 0x54 */ u32 flags;
    union {
        /* 0x58 */ u8 unk58[0xa];
        /* 0x58 */ u16 presentationFlags;
        struct {
            u8 unk58[8];
            /* 0x60 */ s16 combatantIndex;
        } participant;
    };
    /* 0x62 */ s16 memberId;
    union {
        /* 0x64 */ u8 unk64[0x94];
        struct {
            /* 0x64 */ u8 unk64[6];
            /* 0x6A */ s16 memberId;
        } apocalypse;
        struct {
            /* 0x64 */ u32 current;
            /* 0x68 */ u32 saved;
        } editorRestore;
    };
    /* 0xf8 */ u32 stateFlags;
    /* 0xfc */ u8 unkfc[0x18];
};

typedef char BtlActionRecordLayoutCheck[sizeof(BtlActionRecord) == 0x114 &&
    offsetof(BtlActionRecord, task) == 0x48 &&
    offsetof(BtlActionRecord, status) == 0x50 &&
    offsetof(BtlActionRecord, flags) == 0x54 &&
    offsetof(BtlActionRecord, memberId) == 0x62 &&
    offsetof(BtlActionRecord, stateFlags) == 0xf8 ? 1 : -1];
typedef char BtlActionIdentityOffsetCheck[
    offsetof(BtlActionRecord, identity.category) == 0x44 &&
    offsetof(BtlActionRecord, identity.variant) == 0x45 ? 1 : -1];
typedef char BtlActionHistoryValueOffsetCheck[offsetof(BtlActionRecord, history.value) == 0xC &&
    sizeof(BtlActionRecord) == 0x114 ? 1 : -1];
typedef char BtlActionRestoredValueOffsetCheck[
    offsetof(BtlActionRecord, restoredValue) == 0 &&
    sizeof(BtlActionRecord) == 0x114 ? 1 : -1];
typedef char BtlActionApocalypseMemberIdOffsetCheck[
    offsetof(BtlActionRecord, apocalypse.memberId) == 0x6A ? 1 : -1];
typedef char BtlActionParticipantOffsetCheck[
    offsetof(BtlActionRecord, participant.combatantIndex) == 0x60 ? 1 : -1];
typedef char BtlActionEditorRestoreOffsetCheck[
    offsetof(BtlActionRecord, editorRestore.current) == 0x64 &&
    offsetof(BtlActionRecord, editorRestore.saved) == 0x68 ? 1 : -1];
typedef char BtlActionAnimationKindOffsetCheck[
    offsetof(BtlActionRecord, animation.kind) == 0x3c ? 1 : -1];
typedef char BtlActionPresentationOffsetCheck[
    offsetof(BtlActionRecord, presentationFlags) == 0x58 ? 1 : -1];

/* The module global: a word and the action data block's pointer, side by side. */
typedef struct BtlActionGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *data;       /* heap block */
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u64 targetableMask; /* entry flags that make a combatant a target */
    union {
        /* 0x18 */ u8 unk18[0x60];
        struct {
            u8 prefix[0x18];
            /* 0x30 */ u64 requiredMask;
            u8 padding38[8];
            /* 0x40 */ u64 excludedMask;
        } interaction;
        struct {
            u8 unk18[0x40];
            /* 0x58 */ u64 mask;
        } clearedFlags;
    };
    /* 0x78 */ u64 untargetableMask; /* entry flags that rule a combatant out */
} BtlActionGlobals;

typedef char BtlActionGlobalsLayoutCheck[offsetof(BtlActionGlobals, targetableMask) == 0x10 &&
    offsetof(BtlActionGlobals, untargetableMask) == 0x78 ? 1 : -1];
typedef char BtlActionClearedFlagsOffsetCheck[
    offsetof(BtlActionGlobals, clearedFlags.mask) == 0x58 &&
    sizeof(BtlActionGlobals) == 0x80 ? 1 : -1];
typedef char BtlActionInteractionMasksOffsetCheck[
    offsetof(BtlActionGlobals, interaction.requiredMask) == 0x30 &&
    offsetof(BtlActionGlobals, interaction.excludedMask) == 0x40 ? 1 : -1];

struct BtlActionResourceEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ void *resource;
    /* 0x08 */ u16 baseIndex;
    /* 0x0A */ u8 unk0A[0x12];
};

typedef char BtlActionResourceEntrySizeCheck[sizeof(BtlActionResourceEntry) == 0x1C ? 1 : -1];


struct BtlActionSelection {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u16 memberId;
    /* 0x12 */ s8 category;
    /* 0x13 */ s8 variant;
};
typedef char BtlActionSelectionLayout[sizeof(BtlActionSelection) == 0x14 &&
    offsetof(BtlActionSelection, memberId) == 0x10 &&
    offsetof(BtlActionSelection, category) == 0x12 &&
    offsetof(BtlActionSelection, variant) == 0x13 ? 1 : -1];

typedef char BtlActionGeometryOffsetsCheck[
    offsetof(BtlActionRecord, geometry.position) == 0xC &&
    offsetof(BtlActionRecord, geometry.scale) == 0x40 &&
    sizeof(BtlActionRecord) == 0x114 ? 1 : -1];
#endif
