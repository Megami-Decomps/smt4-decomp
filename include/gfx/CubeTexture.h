#ifndef GFX_CUBE_TEXTURE_H
#define GFX_CUBE_TEXTURE_H
#include "common.h"
#include <stddef.h>

/* One face of a cube texture. */
struct GfxCubeTextureFace {
    u8 unk00[0x40]; // 0x00
    u32 parameter; // 0x40
};

/* A cube texture: the GfxTexture2D sampler header, then six faces. */
struct GfxCubeTexture {
    u32 filters[2]; // 0x00
    u32 wrapModes[2]; // 0x08
    u32 unk10; // 0x10
    s32 unk14; // 0x14
    f32 unk18[3]; // 0x18
    f32 unk24[2]; // 0x24
    u32 unk2C; // 0x2C
    u32 unk30; // 0x30
    GfxCubeTextureFace faces[6]; // 0x34
};
typedef char GfxCubeTextureLayoutCheck[sizeof(GfxCubeTexture) == 0x1CC &&
    offsetof(GfxCubeTexture, faces) == 0x34 ? 1 : -1];
#endif
