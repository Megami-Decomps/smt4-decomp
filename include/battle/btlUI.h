/* battle/btlUI.c: the battle UI.
 *
 * One heap block (BtlUi) holds the UI's widgets; the module global that owns it also holds
 * other state. The wrappers elsewhere in the binary forward to the widgets by address.
 * Widget sizes run up to the next field the code is known to touch. */
#ifndef BATTLE_BTLUI_H
#define BATTLE_BTLUI_H

#include "common.h"

/* Shin Megami Tensei IV layout. */
typedef struct BtlUiObjA { u8 unk[0x21F8]; } BtlUiObjA;
typedef struct BtlUiObjB { u8 unk[0x260]; } BtlUiObjB;
typedef struct BtlUiObjC { u8 unk[0x307C]; } BtlUiObjC;
typedef struct BtlUiObjD { u8 unk[0x7180]; } BtlUiObjD;

/* The UI block, 0xF040 bytes. */
typedef struct BtlUi {
    /* 0x0000 */ void *owner;
    /* 0x0004 */ u8 unk0004[4];
    /* 0x0008 */ BtlUiObjA objA;
    /* 0x2200 */ BtlUiObjB objB;
    /* 0x2460 */ BtlUiObjC objC;
    /* 0x54DC */ u8 unk54DC;
    /* 0x54DD */ u8 unk54DD[0x2943];
    /* 0x7E20 */ u32 unk7E20;
    /* 0x7E24 */ u8 unk7E24[0x14];
    /* 0x7E38 */ s32 state;
    /* 0x7E3C */ u8 unk7E3C[0x0F];
    /* 0x7E4B */ u8 unk7E4B;
    /* 0x7E4C */ u8 unk7E4C[2];
    /* 0x7E4E */ u16 unk7E4E;
    /* 0x7E50 */ u16 unk7E50;
    /* 0x7E52 */ u8 unk7E52[0x6E];
    /* 0x7EC0 */ BtlUiObjD objD;
} BtlUi;

/* The module global (Shin Megami Tensei IV). */
typedef struct BtlUiGlobals {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlUi *ui;
} BtlUiGlobals;

/* Apocalypse layout: the same four widgets at other offsets. */
typedef struct BtlUiObjAA { u8 unk[0x24B4]; } BtlUiObjAA;
typedef struct BtlUiObjBA { u8 unk[0x408]; } BtlUiObjBA;
typedef struct BtlUiObjCA { u8 unk[0x38B0]; } BtlUiObjCA;
typedef struct BtlUiObjDA { u8 unk[0x5AA4]; } BtlUiObjDA;

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
    /* 0x74B3 */ u8 unk74B3;
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

#endif
