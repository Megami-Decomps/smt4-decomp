/* battle/btlAction.c: battle actions. */
#ifndef BATTLE_BTLACTION_H
#define BATTLE_BTLACTION_H

#include "common.h"
#include <stddef.h>

struct BtlActionRecord {
    union {
        /* 0x00 */ u8 unk00[0x48];
        /* 0x00 */ u32 restoredValue;
        /* 0x00 */ u32 id;
        struct {
            u8 unk00BeforeKind[0x3c];
            /* 0x3c */ u8 kind;
        } animation;
        struct {
            u8 unk00BeforeTeam[0x3c];
            /* 0x3c */ u8 team;        /* 2: the player's team */
        } side;
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
        /* 0x58 */ u8 unk58[4];
        /* 0x58 */ u16 presentationFlags;
    };
    /* 0x5C */ u32 pendingValue;        /* cleared with the record when its combatant leaves the battle */
    struct {
        /* 0x60 */ s16 combatantIndex;
    } participant;
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
        struct {
            /* 0x64 */ u8 unk64[0x8C];
            /* 0xF0 */ s32 slot;       /* negative: not placed in a slot yet */
            /* 0xF4 */ s32 nextSlot;   /* reset to -1 with slot */
        } placement;
        /* 0x64 */ u32 work[13];       /* the words a combatant's removal clears (editorRestore is the first two) */
    };
    /* 0xf8 */ u32 stateFlags;
    union {
        /* 0xfc */ u8 unkfc[0x18];
        /* 0xfc */ u32 groupKey;
        /* 0xfc */ u32 groupWork[6];   /* groupKey and the five words after it, cleared together */
    };
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
typedef char BtlActionPlacementSlotOffsetCheck[
    offsetof(BtlActionRecord, placement.slot) == 0xF0 ? 1 : -1];
typedef char BtlActionPresentationOffsetCheck[
    offsetof(BtlActionRecord, presentationFlags) == 0x58 ? 1 : -1];

struct BtlActionSlot;
struct BtlActionSlotA;

/* The action module's global (Shin Megami Tensei IV, g_btlAction at 0x434278): its four unit slots
 * (battle/BtlUnitWork.h). The slots pointer is also the symbol g_btlScriptUnit (0x43427c), the script
 * context reference btlUnitGet resolves. */
typedef struct BtlActionGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ BtlActionSlot *slots;    /* heap block of four slots */
    /* 0x08 */ u8 unk08[0x10];
} BtlActionGlobals;
typedef char BtlActionGlobalsLayoutCheck[
    offsetof(BtlActionGlobals, slots) == 4 && sizeof(BtlActionGlobals) == 0x18 ? 1 : -1];

/* The same global in Apocalypse (g_btlAction at 0x571138): twelve unit slots and the entry-flag masks
 * the target selection tests. */
typedef struct BtlActionGlobalsA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ BtlActionSlotA *slots;   /* heap block of twelve slots; also g_btlScriptUnit */
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u64 targetableMask; /* entry flags that make a combatant a target */
    union {
        /* 0x18 */ u8 unk18[0x60];
        struct {
            u8 prefix[0x18];
            /* 0x30 */ u64 requiredMask;
            /* 0x38 */ u64 reachMask;
            /* 0x40 */ u64 excludedMask;
        } interaction;
        struct {
            u8 unk18[0x40];
            /* 0x58 */ u64 mask;
        } clearedFlags;
        struct {
            /* 0x18 */ u64 confirm;      /* the masks FUN_004ecee8 tests the held buttons with */
            /* 0x20 */ u64 unk20;
            /* 0x28 */ u64 confirmAlt;
            /* 0x30 */ u64 cancel;
            /* 0x38 */ u64 cancelAlt;
        } buttons;
    };
    /* 0x78 */ u64 untargetableMask; /* entry flags that rule a combatant out */
    /* 0x80 */ u8 unk80[0x58];
    /* 0xD8 */ u64 aiActMask;       /* battle state bits that let the AI script act (FUN_004ec950) */
    /* 0xE0 */ u64 cameraExcludedMask;  /* battle state bits that suppress the action camera (FUN_004e69e8) */
    /* 0xE8 */ u8 unkE8[8];
    /* 0xF0 */ u64 cameraExcludedMaskB; /* more battle state bits that suppress it */
    /* 0xF8 */ u64 helpModeMask;    /* battle state bits that pick the targetable-combatant help subject (FUN_004ecd7c) */
    /* 0x100 */ u8 unk100[0x28];
    /* 0x128 */ u64 interruptMask; /* actor flag bits that block the skill start */
    /* 0x130 */ u8 unk130[0x50];
    /* 0x180 */ u64 aiMenuMask;     /* battle state bits that make the AI open a menu command */
    /* 0x188 */ u64 aiTargetMask;   /* battle state bits that make the AI pick a target command */
    /* 0x190 */ u8 unk190[0x28];
} BtlActionGlobalsA;

typedef char BtlActionGlobalsALayoutCheck[offsetof(BtlActionGlobalsA, targetableMask) == 0x10 &&
    offsetof(BtlActionGlobalsA, untargetableMask) == 0x78 && sizeof(BtlActionGlobalsA) == 0x1B8 ? 1 : -1];
typedef char BtlActionClearedFlagsOffsetCheck[
    offsetof(BtlActionGlobalsA, clearedFlags.mask) == 0x58 &&
    offsetof(BtlActionGlobalsA, interruptMask) == 0x128 && offsetof(BtlActionGlobalsA, aiActMask) == 0xD8 &&
    offsetof(BtlActionGlobalsA, aiMenuMask) == 0x180 && offsetof(BtlActionGlobalsA, aiTargetMask) == 0x188 &&
    offsetof(BtlActionGlobalsA, cameraExcludedMask) == 0xE0 && offsetof(BtlActionGlobalsA, cameraExcludedMaskB) == 0xF0 && offsetof(BtlActionGlobalsA, helpModeMask) == 0xF8 ? 1 : -1];
typedef char BtlActionInteractionMasksOffsetCheck[
    offsetof(BtlActionGlobalsA, interaction.requiredMask) == 0x30 &&
    offsetof(BtlActionGlobalsA, interaction.reachMask) == 0x38 &&
    offsetof(BtlActionGlobalsA, interaction.excludedMask) == 0x40 ? 1 : -1];

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
#ifdef __cplusplus
extern "C" {
#endif

u32 questCurrentIsFlagged(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 channelRunMagnitudeQueries(u32 target, s32 channel, u32 a, u32 b);

#ifdef __cplusplus
}
#endif

#endif
