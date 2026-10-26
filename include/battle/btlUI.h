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
#include <stddef.h>

/* Only the byte column is recovered, not the true boundaries of the underlying records. */
typedef struct BtlUiColumnRecord {
    /* 0x00 */ u8 value;
    /* 0x01 */ u8 unk01[0x2b];
} BtlUiColumnRecord;

/* Shin Megami Tensei IV layout. */
typedef struct BtlUiObjA { /* 0x0000 */ u8 unk[0x21F8]; } BtlUiObjA;
typedef struct BtlUiObjB { /* 0x000 */ u8 unk[0x260]; } BtlUiObjB;
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

typedef struct BtlUiAnimationGroup {
    s8 active;
    u8 unk01[0x1B];
    s8 disabled;
    u8 unk1D[0x3E3];
} BtlUiAnimationGroup;
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
            u8 prefix[0x46C];
            BtlUiAnimationGroup groups[1];
        } animationGroups;
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
    offsetof(BtlUiObjD, animationGroups.groups) == 0x46C &&
    offsetof(BtlUiObjD, animationMarkers.rows) == 0x4B38 &&
    offsetof(BtlUiObjD, animationCounts.counts) == 0x573C &&
    offsetof(BtlUiAnimationGroup, disabled) == 0x1C &&
    sizeof(BtlUiAnimationGroup) == 0x400 && sizeof(BtlUiAnimationMarker) == 0x18 &&
    sizeof(BtlUiAnimationMarkerRow) == 0xC0 && sizeof(BtlUiObjD) == 0x7180 ? 1 : -1];
typedef char BtlUiActionRequestsOffsetCheck[
    offsetof(BtlUiObjD, actionRequests.slots) == 0x61EC &&
    sizeof(BtlUiObjD) == 0x7180 ? 1 : -1];

/* Panel status is embedded at 0x7e00; its active flag belongs to the sprite animation. */
typedef struct BtlUiPanelState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24[0x14];
    /* 0x38 */ s32 state;
    /* 0x3C */ u8 unk3C[0x0C];
    /* 0x48 */ u8 requiresTargetSelection;
    /* 0x49 */ u8 unk49[2];
    /* 0x4B */ u8 spriteActive;
} BtlUiPanelState;

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
typedef struct BtlUiObjAA { /* 0x0000 */ u8 unk[0x24B4]; } BtlUiObjAA;
typedef struct BtlUiObjBA { /* 0x0000 */ u8 unk[0x408]; } BtlUiObjBA;
typedef struct BtlUiObjCA { /* 0x0000 */ u8 unk[0x38B0]; } BtlUiObjCA;
typedef struct BtlUiObjDA {
    union {
        /* 0x0000 */ u8 unk[0x5AA4];
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
    /* 0x7488 */ u32 unk7488;
    /* 0x748C */ u8 unk748C[0x14];
    /* 0x74A0 */ s32 state;
    /* 0x74A4 */ u8 unk74A4[0x0F];
    /* 0x74B3 */ s8 spriteActive;
    /* 0x74B4 */ u8 unk74B4[2];
    /* 0x74B6 */ u16 unk74B6;
    /* 0x74B8 */ u16 unk74B8;
    /* 0x74BA */ u8 unk74BA[0x42];
    /* 0x74FC */ u16 ids[4];
    /* 0x7504 */ u8 unk7504[0x24];
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
            /* 0xF080 */ BtlUiAvailabilityCell cells[1];
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
    offsetof(BtlUiA, unitRecords.records) == 0x6AF4 && sizeof(BtlUiA) == 0x12FD0 ? 1 : -1];
typedef char BtlUiColumnLayoutCheck[sizeof(BtlUiColumnRecord) == 0x2c &&
    sizeof(BtlUiObjC) == 0x59a0 &&
    offsetof(BtlUiObjC, unk307C) == 0x307c &&
    offsetof(BtlUiObjC, columnCount) == 0x5758 &&
    offsetof(BtlUiObjC, columns) == 0x5778 ? 1 : -1];
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

void FUN_004a9a50(void);

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
