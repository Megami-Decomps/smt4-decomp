/* The texture setup a render target or texture is described with (FUN_0045af48 fills a TexSetup from a TexSource and
 * writes its GPU command blocks). */
#ifndef GFX_TEXSETUP_H
#define GFX_TEXSETUP_H

#include "common.h"

extern "C" {
typedef struct TexSource {
    /* 0x00 */ u32 address;
    /* 0x04 */ u32 height;
    /* 0x08 */ u32 width;
    /* 0x0C */ f32 unk0C;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ u8 format;
    /* 0x21 */ u8 simple;
    /* 0x22 */ u8 kind;
    /* 0x23 */ u8 flag;

    /* The defaults retail stores before a caller fills the source in. */
    TexSource() : unk0C(0.0f), unk10(0.0f), unk14(0.0f), unk18(0.0f), unk1C(1.0f), format(0), simple(0), kind(0), flag(3) {}
} TexSource;

typedef struct TexSetup {
    /* 0x00 */ u32 address;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 height;
    /* 0x0C */ u32 width;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ u32 extra;
    /* 0x28 */ u8 flag;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ u32 height2;
    /* 0x30 */ u32 width2;
    /* 0x34 */ f32 value;
    /* 0x38 */ u8 format;
    /* 0x39 */ u8 unk39[7];
    /* 0x40 */ u32 height3;
    /* 0x44 */ u32 width3;
    /* 0x48 */ u32 lists[3][2];     /* the three command lists FUN_0045af48 publishes (start, size) */
    /* 0x60 */ u8 mode;
    /* 0x61 */ u8 enabled;
    /* 0x62 */ u8 unk62[2];
    /* 0x64 */ u32 sourceAddress;
} TexSetup;

void FUN_0045af48(TexSetup *setup, u32 *commands, u32 address, u32 extra, TexSource *source);
}

#endif
