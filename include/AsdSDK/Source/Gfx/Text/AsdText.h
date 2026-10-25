/* AsdSDK/Source/Gfx/Text/AsdText.c: text objects. */
#ifndef ASDSDK_SOURCE_GFX_TEXT_ASDTEXT_H
#define ASDSDK_SOURCE_GFX_TEXT_ASDTEXT_H

#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* A text object (0xB4 bytes; smt4a appends an 8-entry table at 0xB4). */
typedef struct AsdText {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 unk34;       /* 0x402 when created */
    /* 0x38 */ u32 color;       /* default color with the low byte cleared */
    /* 0x3C */ u8 unk3c[0x14];
    /* 0x50 */ s32 unk50;       /* -1 when created */
    /* 0x54 */ u32 unk54;       /* nonzero once the text can be drawn */
    /* 0x58 */ f32 scale;
    /* 0x5C */ char text[0x40];
    /* 0x9C */ s32 unk9c;       /* -1 when created */
    /* 0xA0 */ u8 unkA0[0xC];
    /* 0xAC */ u8 unkAC;
    /* 0xAD */ u8 unkAD[3];
    /* 0xB0 */ u32 unkB0;
    /* 0xB4 */ u8 unkB4[8];
} AsdText;

typedef char AsdTextTextOffsetCheck[sizeof(AsdText) == 0xBC ? 1 : -1];

extern "C" {
unsigned int FUN_00287704(int param_1);
}

extern "C" {
u32 FUN_0014bd84(u32 index);
}

extern "C" {
u32 asdGxGetCommandCursor(void);
}

#endif
