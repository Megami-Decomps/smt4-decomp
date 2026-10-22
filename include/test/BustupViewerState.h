#ifndef TEST_BUSTUPVIEWERSTATE_H
#define TEST_BUSTUPVIEWERSTATE_H

#include "common.h"
#include <stddef.h>

struct BustupViewerState {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u8 unk40[0x10];
    /* 0x50 */ s32 selection;
    /* 0x54 */ u32 portraitIds[4];
    /* 0x64 */ u8 unk64[4];
    /* 0x68 */ u32 unk68[4];
    /* 0x78 */ u32 unk78[4];
    /* 0x88 */ f32 unk88[4];
    /* 0x98 */ u8 unk98[8];
    /* 0xa0 */ u32 text;
};
typedef char BustupViewerStateSizeCheck[sizeof(BustupViewerState) == 0xA4 ? 1 : -1];
typedef char BustupViewerStateOffsetsCheck[offsetof(BustupViewerState, selection) == 0x50 && offsetof(BustupViewerState, text) == 0xA0 ? 1 : -1];

#endif
