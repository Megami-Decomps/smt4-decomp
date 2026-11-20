/* battle/btlUI.c: the battle UI.
 *
 * One heap block (BtlUi) holds the UI's widgets; the module global that owns it also holds
 * other state. The wrappers elsewhere in the binary forward to the widgets by address.
 * Widget sizes run up to the next field the code is known to touch. */
#ifndef BATTLE_BTLUI_H
#define BATTLE_BTLUI_H

#include "common.h"
#include "battle/BattleUiRequests.h"
#include "battle/BattleUiActionSlot.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>

/* Only the byte column is recovered, not the true boundaries of the underlying records. */
typedef struct BtlUiColumnRecord {
    /* 0x00 */ u8 value;
    /* 0x01 */ u8 unk01[0x2b];
} BtlUiColumnRecord;

/* Shin Megami Tensei IV layout. */
typedef struct BtlUiObjA { /* 0x0000 */ u8 unk[0x21F8]; } BtlUiObjA;
typedef struct BtlUiObjB {
    /* 0x000 */ u8 unk000[0x1C4];
    /* 0x1C4 */ UiSpriteState timer;
    /* 0x250 */ u8 unk250[0x10];
} BtlUiObjB;
typedef char BtlUiObjBLayoutCheck[
    sizeof(BtlUiObjB) == 0x260 && offsetof(BtlUiObjB, timer) == 0x1C4 ? 1 : -1];

extern "C" s32 recordQueryStateThree(BtlUiObjB *owner);
/* One unit's UI record, copied in whole from the caller. */
typedef struct BtlUiUnitRecord {
    /* 0x000 */ u8 unk000[0x46];
    /* 0x046 */ u16 unitId;
    /* 0x048 */ u8 unk048[0x5BC];
} BtlUiUnitRecord;
typedef struct BtlUiObjC {
    /* 0x0000 */ u8 unk[0x307c];
    /* 0x307c */ u8 unk307C;
    /* 0x307d */ u8 unk307D[1];
    union {
        /* 0x307e */ u8 unk307E[0x26da];
        struct {
            u8 prefix[0x882];
            /* 0x3900 */ BtlUiUnitRecord records[4];
        } unitRecords;
        struct {
            u8 prefix[0x19A];
            /* 0x3218 */ u8 cursor[0x6E8];  /* the support-unit selection list */
        } supportSelection;
    };
    /* 0x5758 */ s32 columnCount;
    /* 0x575c */ u8 unk575C[0x1c];
    /* 0x5778 */ BtlUiColumnRecord columns[1];
    /* 0x57a4 */ u8 unk57A4[0x1fc];
} BtlUiObjC;
typedef struct BtlUiAvailabilityRow {
    u8 active;
    u8 padding01[0x9F];
} BtlUiAvailabilityRow;
/* Apocalypse: the availability flag sits 0x4C bytes into each 0xA0-byte row. */
typedef struct BtlUiAvailabilityRowA {
    u8 unk00[0x4C];
    u8 active;
    u8 padding4D[0x53];
} BtlUiAvailabilityRowA;
typedef struct BtlUiAvailabilityCell {
    u8 active;
    u8 padding01[0x13];
} BtlUiAvailabilityCell;
typedef struct BtlUiAvailabilityCellRow {
    BtlUiAvailabilityCell cells[8];
} BtlUiAvailabilityCellRow;
typedef struct BtlUiAvailabilityCellRowA {
    BtlUiAvailabilityCell cells[32];
} BtlUiAvailabilityCellRowA;
struct BtlUiPositionRequest {
    f32 x, y, z;
    u8 active; /* 0x0c */
    u8 mode; /* 0x0d */
    u8 flags; /* 0x0e */
    u8 unk0f[5];
};
struct BtlUiPositionRequestRow {
    BtlUiPositionRequest entries[32];
};

/* One number popup (0x400 bytes, from 0x8C in the battle UI's objD in both games): five digit
 * sprites, two label sprites and the state that places them. */
typedef struct BtlUiNumberSlot {
    /* 0x000 */ UiSpriteState digitSprites[5];
    /* 0x2BC */ UiSpriteState labelSprites[2];
    /* 0x3D4 */ BattleUiActionVector position;
    /* 0x3E0 */ s8 active;
    /* 0x3E1 */ u8 anchored;      /* whether the position is kept on screen (3D depth shift) */
    /* 0x3E2 */ u8 unk3E2[2];
    /* 0x3E4 */ u32 digitTimers[5];
    /* 0x3F8 */ s32 number;
    /* 0x3FC */ s8 disabled;
    /* 0x3FD */ u8 unk3FD[3];
} BtlUiNumberSlot;
typedef char BtlUiNumberSlotLayoutCheck[offsetof(BtlUiNumberSlot, position) == 0x3D4 &&
    offsetof(BtlUiNumberSlot, active) == 0x3E0 && offsetof(BtlUiNumberSlot, number) == 0x3F8 &&
    offsetof(BtlUiNumberSlot, disabled) == 0x3FC && sizeof(BtlUiNumberSlot) == 0x400 ? 1 : -1];
typedef struct BtlUiAnimationMarker {
    s8 active;
    u8 unk01[0x17];
} BtlUiAnimationMarker;
typedef struct BtlUiAnimationMarkerRow {
    BtlUiAnimationMarker entries[8];
} BtlUiAnimationMarkerRow;
typedef struct BtlUiObjD {
    union {
        /* 0x0000 */ u8 unk[0x7180];
        /* 0x0000 */ UiSpriteState sprite;
        struct {
            u8 prefix[0x4124];
            BtlUiAvailabilityRow rows[1];
        } availability;
        struct {
            u8 prefix[0x5758];
            union {
                BtlUiAvailabilityCell cells[1];
                BtlUiAvailabilityCellRow rows[1];
            };
        } availabilityCells;
        struct {
            u8 prefix[0x615C];
            s8 counts[1];
        } availabilityCounts;
        struct {
            u8 prefix[0x8C];
            BtlUiNumberSlot slots[16];
        } numbers;
        struct {
            u8 prefix[0x4B38];
            BtlUiAnimationMarkerRow rows[1];
        } animationMarkers;
        struct {
            u8 prefix[0x573C];
            s8 counts[1];
        } animationCounts;
        struct {
            u8 prefix[0x61EC];
            BattleUiActionSlot slots[12];
        } actionRequests;
        /* The battle command window (0xC9D8 in BtlUi). */
        struct {
            u8 prefix[0x4B18];
            /* 0x4B18 */ u8 active;
            /* 0x4B19 */ u8 unk4B19[3];
            /* 0x4B1C */ s32 timer;          /* set to 40 when the window opens */
            /* 0x4B20 */ s32 unk4B20;
            /* 0x4B24 */ u32 kind;           /* the command */
            /* 0x4B28 */ u16 value;          /* the command's skill or item */
        } commandWindow;
    };
} BtlUiObjD;
typedef char BtlUiObjDAvailabilityOffsetsCheck[
    offsetof(BtlUiObjD, availability.rows) == 0x4124 &&
    offsetof(BtlUiObjD, availabilityCells.cells) == 0x5758 &&
    offsetof(BtlUiObjD, availabilityCounts.counts) == 0x615C &&
    offsetof(BtlUiObjD, availabilityCells.rows) == 0x5758 &&
    sizeof(BtlUiAvailabilityCellRow) == 0xA0 &&
    sizeof(BtlUiObjD) == 0x7180 &&
    sizeof(BtlUiAvailabilityRow) == 0xA0 &&
    sizeof(BtlUiAvailabilityCell) == 0x14 ? 1 : -1];
typedef char BtlUiObjDAnimationOffsetsCheck[
    offsetof(BtlUiObjD, numbers.slots) == 0x8C &&
    offsetof(BtlUiObjD, animationMarkers.rows) == 0x4B38 &&
    offsetof(BtlUiObjD, animationCounts.counts) == 0x573C &&
    sizeof(BtlUiAnimationMarker) == 0x18 &&
    sizeof(BtlUiAnimationMarkerRow) == 0xC0 && sizeof(BtlUiObjD) == 0x7180 ? 1 : -1];
typedef char BtlUiCommandWindowOffsetCheck[
    offsetof(BtlUiObjD, commandWindow.active) == 0x4B18 &&
    offsetof(BtlUiObjD, commandWindow.value) == 0x4B28 ? 1 : -1];
typedef char BtlUiActionRequestsOffsetCheck[
    offsetof(BtlUiObjD, actionRequests.slots) == 0x61EC &&
    sizeof(BtlUiObjD) == 0x7180 ? 1 : -1];

/* Two words the panel hands back to its caller as a pair. */
typedef struct BtlUiValuePair {
    u32 first;
    u32 second;
} BtlUiValuePair;

/* Panel status is embedded at 0x7e00; its active flag belongs to the sprite animation. */
typedef struct BtlUiPanelState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BtlUiValuePair firstPair;
    /* 0x30 */ BtlUiValuePair secondPair;
    /* 0x38 */ s32 state;
    /* 0x3C */ u8 unk3C[0x0C];
    /* 0x48 */ s8 requiresTargetSelection;
    /* 0x49 */ u8 pairFlag;              /* reported with the two pairs */
    /* 0x4A */ u8 unk4A;
    /* 0x4B */ u8 spriteActive;
} BtlUiPanelState;
typedef char BtlUiPanelStateLayoutCheck[offsetof(BtlUiPanelState, firstPair) == 0x28 &&
    offsetof(BtlUiPanelState, state) == 0x38 && offsetof(BtlUiPanelState, pairFlag) == 0x49 &&
    sizeof(BtlUiPanelState) == 0x4C ? 1 : -1];

typedef struct BtlUiSettings {
    /* 0x00 */ u16 slotRanks[4];
} BtlUiSettings;

/* The UI block, 0xF040 bytes. */
typedef struct BtlUi {
    /* 0x0000 */ void *owner;
    /* 0x0004 */ u8 unk0004[4];
    /* 0x0008 */ BtlUiObjA objA;
    /* 0x2200 */ BtlUiObjB objB;
    /* 0x2460 */ BtlUiObjC objC;
    /* 0x7E00 */ BtlUiPanelState panelState;
    /* 0x7E4C */ u8 unk7E4C[2];
    /* 0x7E4E */ u16 unk7E4E;
    /* 0x7E50 */ u16 unk7E50;
    /* 0x7E52 */ u8 unk7E52[2];
    /* 0x7E54 */ u16 listedIds[0x20];
    /* 0x7E94 */ BtlUiSettings settings;
    /* 0x7E9C */ s8 listedIdCount;
    /* 0x7E9D */ u8 unk7E9D[0x23];
    /* 0x7EC0 */ BtlUiObjD objD;
} BtlUi;

/* The module global (Shin Megami Tensei IV). */
typedef struct BtlUiGlobals {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlUi *ui;
} BtlUiGlobals;

/* Apocalypse layout: the same four widgets at other offsets. */
typedef struct BtlUiObjAA {
    union {
        /* 0x0000 */ u8 unk[0x24B4];
        struct {
            u8 prefix[0x23F8];
            /* 0x23F8 */ u8 subobject[0xBC];  /* FUN_00502754 returns the panel that follows it */
        } tail;
    };
} BtlUiObjAA;
/* The seven-sprite battle event panel, bounded by objC at parent offset 0x28C4. */
struct BtlUiPanelTimerA {
    s32 frame;
    s32 state;
};

/* A new panel animation phase starts at frame zero. */
static __inline BtlUiPanelTimerA panelStartState(s32 state)
{
    BtlUiPanelTimerA timer = {0, state};
    return timer;
}

typedef struct BtlUiObjBA {
    /* 0x000 */ UiResourceParameters parameters;
    /* 0x020 */ UiSpriteState sprites[7];
    /* 0x3F4 */ BtlUiPanelTimerA timer;
    /* 0x3FC */ s32 mode;
    /* 0x400 */ u8 optionA;
    /* 0x401 */ u8 optionB;
    /* 0x402 */ u8 initialized;
    /* 0x403 */ u8 animated;
    /* 0x404 */ s32 delay;
} BtlUiObjBA;
typedef char BtlUiObjBALayoutCheck[
    sizeof(BtlUiObjBA) == 0x408 && offsetof(BtlUiObjBA, sprites) == 0x20 &&
    offsetof(BtlUiObjBA, timer) == 0x3F4 && offsetof(BtlUiObjBA, delay) == 0x404 ? 1 : -1];
typedef struct BtlUiObjCA { /* 0x0000 */ u8 unk[0x38B0]; } BtlUiObjCA;
typedef struct BtlUiObjDA {
    union {
        /* 0x0000 */ u8 unk[0x5AA4];
        /* 0x0000 */ UiSpriteState sprite;
        struct {
            u8 prefix[0x8C];
            /* 0x75B4 in BtlUiA */ BtlUiNumberSlot slots[16];
        } numbers;
        struct {
            u8 unk0000[0x3D8];
            BattleUiBankStatus banks[16];
        } requests;
        /* Strided byte view, not recovered underlying record boundaries. */
        struct {
            u8 prefix[0x40D8];
            BtlUiAvailabilityRowA rows[1];
        } availability;
    };
} BtlUiObjDA;

/* One unit's UI record in Apocalypse, copied in whole from the caller. */
typedef struct BtlUiUnitRecordA {
    /* 0x000 */ u8 unk000[0x62];
    /* 0x062 */ u16 unitId;
    /* 0x064 */ u8 unk064[0xC8];
} BtlUiUnitRecordA;

typedef struct BtlUiA {
    /* 0x0000 */ u32 owner;
    /* 0x0004 */ u8 unk0004[4];
    /* 0x0008 */ BtlUiObjAA objA;
    /* 0x24BC */ BtlUiObjBA objB;
    /* 0x28C4 */ BtlUiObjCA objC;
    /* 0x6174 */ u8 unk6174;
    /* 0x6175 */ u8 unk6175[1];
    union {
        /* 0x6176 */ u8 unk6176[0x1312];
        struct {
            u8 prefix[0x97E];
            /* 0x6AF4 */ BtlUiUnitRecordA records[4];
        } unitRecords;
    };
    /* 0x7488 */ u32 unk7488;              /* the preview controller, deleted on teardown */
    /* 0x748C */ u8 unk748C[4];
    /* 0x7490 */ BtlUiValuePair firstPair;
    /* 0x7498 */ BtlUiValuePair secondPair;
    /* 0x74A0 */ s32 state;
    /* 0x74A4 */ u8 unk74A4[0x0C];
    /* 0x74B0 */ s8 requiresTargetSelection;
    /* 0x74B1 */ u8 pairFlag;              /* reported with the two pairs */
    /* 0x74B2 */ u8 unk74B2;
    /* 0x74B3 */ s8 spriteActive;
    /* 0x74B4 */ u8 unk74B4[2];
    /* 0x74B6 */ u16 unk74B6;
    /* 0x74B8 */ u16 unk74B8;
    /* 0x74BA */ u8 unk74BA[2];
    /* 0x74BC */ u16 listedIds[0x20];
    /* 0x74FC */ u16 ids[4];
    /* 0x7504 */ s8 listedIdCount;
    /* 0x7505 */ u8 unk7505[0x23];
    /* 0x7528 */ BtlUiObjDA objD;
    /* 0xCFCC */ union {
        u8 unkCFCC[0x6000];
        struct {
            u8 unkCFCC[0x2098];
            /* 0xF064 */ s8 counts[16];
        } requestCounts;
        /* Strided byte view; slots start 32 cell strides apart. */
        struct {
            u8 prefix[0x20B4];
            /* 0xF080 */ union {
                BtlUiAvailabilityCell cells[1];
                BtlUiAvailabilityCellRowA rows[1];
            };
        } availabilityCells;
        struct {
            u8 prefix[0x48B8];
            /* 0x11884 */ s8 counts[1];
        } availabilityCounts;
        struct {
            u8 prefix[0x20a8];
            /* 0xF074 */ BtlUiPositionRequestRow rows[16];
        } positionRequests;
        struct {
            u8 prefix[0x4948];
            /* 0x11914 */ BattleUiActionSlot slots[12];
        } actionRequests;
    };
    /* 0x12FCC */ u32 unk12FCC;
} BtlUiA;

/* The module global (Apocalypse). */
typedef struct BtlUiGlobalsA {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiA *ui;
} BtlUiGlobalsA;

typedef char BtlUiUnitRecordLayoutCheck[sizeof(BtlUiUnitRecord) == 0x604 &&
    offsetof(BtlUiObjC, unitRecords.records) == 0x3900 ? 1 : -1];
typedef char BtlUiUnitRecordALayoutCheck[sizeof(BtlUiUnitRecordA) == 0x12C &&
    offsetof(BtlUiA, unitRecords.records) == 0x6AF4 &&
    offsetof(BtlUiA, requiresTargetSelection) == 0x74B0 && sizeof(BtlUiA) == 0x12FD0 ? 1 : -1];
typedef char BtlUiColumnLayoutCheck[sizeof(BtlUiColumnRecord) == 0x2c &&
    sizeof(BtlUiObjC) == 0x59a0 &&
    offsetof(BtlUiObjC, unk307C) == 0x307c &&
    offsetof(BtlUiObjC, columnCount) == 0x5758 &&
    offsetof(BtlUiObjC, columns) == 0x5778 &&
    offsetof(BtlUiObjC, supportSelection.cursor) == 0x3218 ? 1 : -1];
typedef char BtlUiLayoutCheck[sizeof(BtlUi) == 0xf040 &&
    offsetof(BtlUi, objC) == 0x2460 &&
    offsetof(BtlUi, panelState) == 0x7e00 &&
    offsetof(BtlUi, settings) == 0x7e94 &&
    offsetof(BtlUi, listedIds) == 0x7e54 &&
    offsetof(BtlUi, listedIdCount) == 0x7e9c &&
    offsetof(BtlUi, objD) == 0x7ec0 ? 1 : -1];
typedef char BtlUiARequestOffsetsCheck[sizeof(BtlUiObjDA) == 0x5AA4 &&
    sizeof(BtlUiA) == 0x12FD0 && offsetof(BtlUiA, objD.requests.banks) == 0x7900 &&
    offsetof(BtlUiA, requestCounts.counts) == 0xF064 ? 1 : -1];

typedef char BtlUiAPanelOffsetsCheck[offsetof(BtlUiA, firstPair) == 0x7490 &&
    offsetof(BtlUiA, pairFlag) == 0x74B1 && offsetof(BtlUiA, listedIds) == 0x74BC &&
    offsetof(BtlUiA, listedIdCount) == 0x7504 && offsetof(BtlUiA, objD.numbers.slots) == 0x75B4 &&
    offsetof(BtlUiA, objA.tail.subobject) == 0x2400 ? 1 : -1];
typedef char BtlUiObjDAAvailabilityOffsetsCheck[
    offsetof(BtlUiObjDA, availability.rows) == 0x40D8 &&
    offsetof(BtlUiA, objD.availability.rows) == 0xB600 &&
    offsetof(BtlUiAvailabilityRowA, active) == 0x4C && sizeof(BtlUiAvailabilityRowA) == 0xA0 &&
    sizeof(BtlUiObjDA) == 0x5AA4 ? 1 : -1];

typedef char BtlUiAAvailabilityOffsetsCheck[
    offsetof(BtlUiA, availabilityCells.cells) == 0xF080 &&
    offsetof(BtlUiA, availabilityCounts.counts) == 0x11884 &&
    sizeof(BtlUiAvailabilityRow) == 0xA0 &&
    sizeof(BtlUiAvailabilityCell) == 0x14 &&
    sizeof(BtlUiA) == 0x12FD0 ? 1 : -1];
typedef char BtlUiAActionRequestsOffsetCheck[
    offsetof(BtlUiA, actionRequests.slots) == 0x11914 &&
    sizeof(BtlUiA) == 0x12FD0 ? 1 : -1];
typedef char BtlUiPositionRequestOffsetsCheck[
    offsetof(BtlUiA, positionRequests.rows) == 0xf074 &&
    sizeof(BtlUiPositionRequest) == 0x14 &&
    offsetof(BtlUiPositionRequest, active) == 0xc &&
    sizeof(BtlUiPositionRequestRow) == 0x280 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

/* Apocalypse: selects the global turn-icon panel; the supplied owner is unused. */
void FUN_004a9a50(void *owner, s32 totalChange, s32 partialChange);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_003ae120(BtlUi *arg0, s8 arg1, s8 arg2);

#ifdef __cplusplus
}
#endif

#endif
