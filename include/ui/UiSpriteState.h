#ifndef UI_UISPRITESTATE_H
#define UI_UISPRITESTATE_H

#include "common.h"
#include <stddef.h>

struct UiSpriteSource {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
};

struct UiSpriteState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ u16 unk38;
    /* 0x3A */ u8 unk3A[0xE];
    /* 0x48 */ UiSpriteSource *source;
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ s16 animation;
    /* 0x52 */ u8 unk52[6];
    /* 0x58 */ u32 unk58;
    /* 0x5C */ s16 mode;
    /* 0x5E */ u8 unk5E[6];
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u8 unk68[8];
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u8 unk74[4];
    /* 0x78 */ u32 unk78;
    /* 0x7C */ u8 unk7C[0xA];
    /* 0x86 */ u8 unk86[5];
    /* 0x8B */ u8 unk8B;
};

typedef char UiSpriteStateSizeCheck[sizeof(UiSpriteState) == 0x8C ? 1 : -1];
typedef char UiSpriteStateOffsetsCheck[offsetof(UiSpriteState, source) == 0x48 && offsetof(UiSpriteState, animation) == 0x50 && offsetof(UiSpriteState, mode) == 0x5C && offsetof(UiSpriteState, unk86) == 0x86 ? 1 : -1];

#endif
