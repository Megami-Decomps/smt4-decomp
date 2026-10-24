/* NON_MATCHING: armcc hoists the self-pointer stores and pairs the float stores with vstm; retail keeps strict offset order with single vstr stores */
#include "common.h"

struct ScreenElementStyle;

/* Display style of one screen element: groups of fields that each point back at the owning style. */
struct ScreenElementStyle {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 unk03[2];
    /* 0x05 */ u8 unk05[2];
    /* 0x07 */ u8 unk07[4];
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ ScreenElementStyle *owner0C;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12[2];
    /* 0x14 */ ScreenElementStyle *owner14;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 unk19;
    /* 0x1A */ u8 unk1A[2];
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ ScreenElementStyle *owner2C;
    /* 0x30 */ u8 unk30[3];
    /* 0x33 */ u8 unk33;
    /* 0x34 */ ScreenElementStyle *owner34;
    /* 0x38 */ u8 unk38;
    /* 0x39 */ u8 unk39;
    /* 0x3A */ u8 unk3A[2];
    /* 0x3C */ u8 unk3C;
    /* 0x3D */ u8 unk3D[3];
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u8 unk48[3];
    /* 0x4B */ u8 unk4B;
    /* 0x4C */ ScreenElementStyle *owner4C;
    /* 0x50 */ u8 unk50;
    /* 0x51 */ u8 unk51[3];
    /* 0x54 */ u8 unk54;
    /* 0x55 */ u8 unk55;
    /* 0x56 */ u8 unk56;
    /* 0x57 */ u8 unk57;
    /* 0x58 */ ScreenElementStyle *owner58;
    /* 0x5C */ u8 unk5C;
    /* 0x5D */ u8 unk5D;
    /* 0x5E */ u8 unk5E;
    /* 0x5F */ u8 unk5F;
    /* 0x60 */ ScreenElementStyle *owner60;
    /* 0x64 */ f32 unk64;
    /* 0x68 */ u8 unk68;
    /* 0x69 */ u8 unk69[3];
    /* 0x6C */ f32 unk6C;
    /* 0x70 */ f32 unk70;
    /* 0x74 */ f32 unk74;
    /* 0x78 */ u8 unk78;
    /* 0x79 */ u8 unk79[3];
    /* 0x7C */ ScreenElementStyle *owner7C;
};

extern "C" {
/* Resets a screen element style to its defaults. */
void FUN_0023a928(ScreenElementStyle *style)
{
    style->unk00[0] = 0;
    style->unk00[1] = 0;
    style->unk00[2] = 0;
    style->unk03[0] = 6;
    style->unk03[1] = 6;
    style->unk05[0] = 7;
    style->unk05[1] = 7;
    style->unk07[0] = 0xff;
    style->unk07[1] = 0xff;
    style->unk07[2] = 0xff;
    style->unk07[3] = 0xff;
    style->owner0C = style;
    style->unk10 = 0;
    style->unk11 = 6;
    style->owner14 = style;
    style->unk18 = 0;
    style->unk19 = 1;
    style->unk1C = 0.0f;
    style->unk20 = 1.0f;
    style->unk24 = 0.0f;
    style->unk28 = 1.0f;
    style->owner2C = style;
    style->unk30[0] = 0;
    style->unk30[1] = 0;
    style->unk30[2] = 0;
    style->owner34 = style;
    style->unk38 = 0;
    style->unk39 = 0xff;
    style->unk3C = 1;
    style->unk40 = 0;
    style->unk44 = 0xff;
    style->unk48[0] = 0;
    style->unk48[1] = 0;
    style->unk48[2] = 0;
    style->owner4C = style;
    style->unk50 = 0xf;
    style->unk54 = 1;
    style->unk55 = 1;
    style->unk56 = 4;
    style->owner58 = style;
    style->unk5C = 1;
    style->unk5D = 1;
    style->unk5E = 1;
    style->owner60 = style;
    style->unk64 = 0.0f;
    style->unk68 = 0;
    style->unk6C = 0.0f;
    style->unk70 = 0.0f;
    style->unk74 = 1.0f;
    style->unk78 = 0x18;
    style->owner7C = style;
}
}

typedef char ScreenElementStyleSize[sizeof(ScreenElementStyle) == 0x80 ? 1 : -1];
