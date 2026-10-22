#ifndef GFX_TEXTURE_2D_H
#define GFX_TEXTURE_2D_H
#include "common.h"
struct GfxTexture2D {
    u32 filters[2]; // 0x00
    u32 wrapModes[2]; // 0x08
    u32 unk10; // 0x10
    s32 unk14; // 0x14
    f32 unk18[3]; // 0x18
    f32 unk24[2]; // 0x24
    u32 unk2C; // 0x2C
    u8 unk30[0x44]; // 0x30
    u32 parameter; // 0x74
};
#endif
