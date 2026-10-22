/* AsdSDK/Source/Gfx/Tex/AsdTexture.c: texture objects. */
#ifndef ASDSDK_SOURCE_GFX_TEX_ASDTEXTURE_H
#define ASDSDK_SOURCE_GFX_TEX_ASDTEXTURE_H

#include "common.h"
#include <stddef.h>

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

/* A positioned rectangle backed by a texture; both games use this wrapper. */
struct AsdTextureRegion {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 width;
    /* 0x0C */ f32 height;
    /* 0x10 */ AsdTexture *texture;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ f32 scale;
    /* 0x1C */ u8 flags[2];
    /* 0x1E */ u8 unk1E[2];
};
typedef char AsdTextureRegionLayoutCheck[sizeof(AsdTextureRegion) == 0x20 &&
    offsetof(AsdTextureRegion, y) == 4 && offsetof(AsdTextureRegion, width) == 8 &&
    offsetof(AsdTextureRegion, height) == 0xC && offsetof(AsdTextureRegion, texture) == 0x10 &&
    offsetof(AsdTextureRegion, scale) == 0x18 && offsetof(AsdTextureRegion, flags) == 0x1C ? 1 : -1];


/* Buffer-handle entry: texture and backing allocation are independently owned. */
typedef struct AsdBufferHandle {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AsdTexture *texture;
    /* 0x0C */ void *buffer;
    /* 0x10 */ u32 active;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u32 flags;
} AsdBufferHandle;

typedef struct AsdTgaHeader {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ u8 widthLow;
    /* 0x0D */ u8 widthHigh;
    /* 0x0E */ u8 heightLow;
    /* 0x0F */ u8 heightHigh;
    /* 0x10 */ u8 depth;
    /* 0x11 */ u8 descriptor;
} AsdTgaHeader;
typedef struct AsdNw4cUserData {
    /* 0x00 */ char identifier[16];
    /* 0x10 */ u32 offset;
} AsdNw4cUserData;
typedef struct AsdNw4cChunk {
    /* 0x00 */ char identifier[8];
    /* 0x08 */ u32 bytes;
} AsdNw4cChunk;
typedef char AsdTgaHeaderSizeCheck[sizeof(AsdTgaHeader) == 0x12 ? 1 : -1];
typedef char AsdNw4cUserDataSizeCheck[sizeof(AsdNw4cUserData) == 0x14 ? 1 : -1];
typedef char AsdNw4cChunkSizeCheck[sizeof(AsdNw4cChunk) == 0x0C ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
void asdTextureSetImage(AsdTexture *texture);
#ifdef __cplusplus
}
#endif

#endif
