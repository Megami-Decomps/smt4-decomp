/* AsdSDK/Source/Gfx/Text/AsdText.c: text objects. */
#ifndef ASDSDK_SOURCE_GFX_TEXT_ASDTEXT_H
#define ASDSDK_SOURCE_GFX_TEXT_ASDTEXT_H

#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* A laid-out character's metrics. */
struct AsdTextCellMetrics {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ s8 advance;      /* pixels to the next character */
    /* 0x07 */ u8 unk07[0x15];
};

/* One character of a text object's converted text (0x20 bytes). */
struct AsdTextCell {
    /* 0x00 */ u16 code;        /* a character or a 0xF8xx control code; 0 ends the text */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ AsdTextCellMetrics metrics;
};

/* The control codes messageWindowSetupLayoutSprites tests while it measures a line. */
enum {
    ASD_TEXT_CODE_LINE_END = 0xF801,
    ASD_TEXT_CODE_PAGE_END = 0xF802,
    ASD_TEXT_CODE_F813 = 0xF813,
    ASD_TEXT_CODE_NONE = 0xFFFF
};

/* A text object (0xB4 bytes; smt4a appends an 8-entry table at 0xB4). */
typedef struct AsdText {
    /* 0x00 */ AsdTextCell *cells;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ s32 firstCell;   /* the shown text's first cell */
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 hasText;     /* zero while the object holds no converted text */
    /* 0x18 */ f32 spacing;     /* added to every character's advance */
    /* 0x1C */ u8 unk1C[0x18];
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

typedef char AsdTextTextOffsetCheck[sizeof(AsdTextCell) == 0x20 && sizeof(AsdText) == 0xBC ? 1 : -1];

extern "C" {
unsigned int qcGetCenterSlotGroups(int param_1);
}

extern "C" {
u32 aocIndexValueOrDefault(u32 index);
}

extern "C" {
u32 asdGxGetCommandCursor(void);
}

#endif
