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
    /* 0x0C */ union {
        u8 unk0c[0x2C];
        struct {
            u8 unk0c[8];
            s32 width; // 0x14
            s32 height; // 0x18
        } dimensions;
        struct {
            u8 unk0c[0x18];
            void *pixels; // 0x24
            u32 unk28;
            u32 flags; // 0x2c
        } storage;
        struct {
            u32 flags; // 0x0c
            u8 unk10[0x0c];
            u32 format; // 0x1c
            u32 type; // 0x20
            u8 unk24[0x0c];
            u32 physicalAddress; // 0x30
            u32 hardwareFormat; // 0x34
        } image;
    };
    /* 0x38 */ u32 unk38;       /* 2 when created */
    /* 0x3C */ u32 unk3c;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ union {
        u32 unk44;
        void *auxiliaryData;
    };
} AsdTexture;

#ifdef __cplusplus
extern "C" {
#endif
void asdTextureSetImage(AsdTexture *texture);
#ifdef __cplusplus
}
#endif

#endif
