/* AsdSDK/Source/Gfx/Effect/AsdEffectTexture.c: textures used by effects. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_ASDEFFECTTEXTURE_H
#define ASDSDK_SOURCE_GFX_EFFECT_ASDEFFECTTEXTURE_H

#include "common.h"

/* Texture image file: a 0x80-byte header followed by the pixel data. */
typedef struct EffectTextureFile {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 size;        /* bytes of pixel data */
    /* 0x20 */ u8 unk20[0x60];
    /* 0x80 */ u8 pixels[1];
} EffectTextureFile;

/* A texture object (0x44+ bytes) as the graphics layer wants it. */
typedef struct EffectTexture {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;       /* from the file's unk08 */
    /* 0x08 */ u32 unk08;       /* 0x30000 */
    /* 0x0C */ u8 unk0c[8];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 *pixels;      /* copy of the file's pixels */
    /* 0x28 */ u32 size;
    /* 0x2C */ u8 unk2c[0x10];
    /* 0x3C */ u32 unk3c;
    /* 0x40 */ u32 unk40;
} EffectTexture;

#endif
