/* AsdSDK/Source/Gfx/Tex/AsdTexture.c: texture objects. */
#ifndef ASDSDK_SOURCE_GFX_TEX_ASDTEXTURE_H
#define ASDSDK_SOURCE_GFX_TEX_ASDTEXTURE_H

#include "common.h"

#define ASDTEXTURE_TARGET_2D 0xde1  /* GL_TEXTURE_2D */

/* A texture object (0x48 bytes). */
typedef struct AsdTexture {
    /* 0x00 */ s32 refCount;
    /* 0x04 */ u32 target;      /* ASDTEXTURE_TARGET_2D */
    /* 0x08 */ u32 unk08;       /* 0x10000 when created */
    /* 0x0C */ u8 unk0c[0x2C];
    /* 0x38 */ u32 unk38;       /* 2 when created */
    /* 0x3C */ u32 unk3c;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
} AsdTexture;

#endif
