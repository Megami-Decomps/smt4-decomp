/* AsdSDK/Source/Gfx/Model/AsdModel.c: the model system's start-up configuration. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMDLCONFIG_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMDLCONFIG_H

#include "common.h"
#include <stddef.h>

/* What a model slot array is built from (0x24 bytes, passed to the slot array constructor). */
struct AsdModelSlotConfig {
    /* 0x00 */ u16 flags;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u16 kind;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 unk20;

    AsdModelSlotConfig()
        : flags(0x8058), unk04(0x100000), unk08(0x200), unk0c(0), unk10(0), kind(0x700), unk18(2), unk1c(2), unk20(8)
    {
    }
};

/* The optional settings the game passes to the model system's initializer. */
struct AsdModelSettings {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u16 slotFlags;
    /* 0x86 */ u8 unk86[2];
    /* 0x88 */ u32 unk88;
};

/* The capacity limits of the model system (the part initialized here). */
struct AsdModelLimits {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0c[8];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24[0xc];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3c;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u8 unk48[8];
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u8 unk54[8];
    /* 0x5C */ u32 unk5c;
    /* 0x60 */ u8 unk60[0xc];
    /* 0x6C */ u32 unk6c;
    /* 0x70 */ u8 unk70[8];
    /* 0x78 */ u32 unk78;
    /* 0x7C */ u32 unk7c;
};

typedef char AsdModelLimitsLayoutCheck[offsetof(AsdModelLimits, unk3c) == 0x3C &&
    offsetof(AsdModelLimits, unk7c) == 0x7C && sizeof(AsdModelSlotConfig) == 0x24 ? 1 : -1];

#endif
