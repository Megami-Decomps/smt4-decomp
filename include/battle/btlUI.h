/* battle/btlUI.c: the battle UI.
 *
 * One heap block (BtlUi) holds the UI's widgets; the module global that owns it also holds
 * other state. The wrappers elsewhere in the binary forward to the widgets by address.
 * Widget sizes run up to the next field the code is known to touch. */
#ifndef BATTLE_BTLUI_H
#define BATTLE_BTLUI_H

#include "common.h"
#include <stddef.h>

/* Only the byte column is recovered, not the true boundaries of the underlying records. */
typedef struct BtlUiColumnRecord {
    /* 0x00 */ u8 value;
    /* 0x01 */ u8 unk01[0x2b];
} BtlUiColumnRecord;

/* Shin Megami Tensei IV layout. */
typedef struct BtlUiObjA { /* 0x0000 */ u8 unk[0x21F8]; } BtlUiObjA;
typedef struct BtlUiObjB { /* 0x000 */ u8 unk[0x260]; } BtlUiObjB;
typedef struct BtlUiObjC {
    /* 0x0000 */ u8 unk[0x307c];
    /* 0x307c */ u8 unk307C;
    /* 0x307d */ u8 unk307D[0x26db];
    /* 0x5758 */ s32 columnCount;
    /* 0x575c */ u8 unk575C[0x1c];
    /* 0x5778 */ BtlUiColumnRecord columns[1];
    /* 0x57a4 */ u8 unk57A4[0x1fc];
} BtlUiObjC;
typedef struct BtlUiObjD { /* 0x0000 */ u8 unk[0x7180]; } BtlUiObjD;

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
typedef struct BtlUiObjDA { /* 0x0000 */ u8 unk[0x5AA4]; } BtlUiObjDA;

typedef struct BtlUiA {
    /* 0x0000 */ u32 owner;
    /* 0x0004 */ u8 unk0004[4];
    /* 0x0008 */ BtlUiObjAA objA;
    /* 0x24BC */ BtlUiObjBA objB;
    /* 0x28C4 */ BtlUiObjCA objC;
    /* 0x6174 */ u8 unk6174;
    /* 0x6175 */ u8 unk6175[0x1313];
    /* 0x7488 */ u32 unk7488;
    /* 0x748C */ u8 unk748C[0x14];
    /* 0x74A0 */ s32 state;
    /* 0x74A4 */ u8 unk74A4[0x0F];
    /* 0x74B3 */ u8 spriteActive;
    /* 0x74B4 */ u8 unk74B4[2];
    /* 0x74B6 */ u16 unk74B6;
    /* 0x74B8 */ u16 unk74B8;
    /* 0x74BA */ u8 unk74BA[0x42];
    /* 0x74FC */ u16 ids[4];
    /* 0x7504 */ u8 unk7504[0x24];
    /* 0x7528 */ BtlUiObjDA objD;
    /* 0xCFCC */ u8 unkCFCC[0x6000];
    /* 0x12FCC */ u32 unk12FCC;
} BtlUiA;

/* The module global (Apocalypse). */
typedef struct BtlUiGlobalsA {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiA *ui;
} BtlUiGlobalsA;

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

#endif
