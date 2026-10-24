/* Textures the game builds at run time: a 0x48-byte header whose `TXHS` chunk points (by
 * self-relative offset) to the 0x20-byte image record, whose own offset points to the pixels. */
#ifndef ASDSDK_SOURCE_GFX_TEX_TEXTUREBUILD_H
#define ASDSDK_SOURCE_GFX_TEX_TEXTUREBUILD_H

#include "common.h"

/* The allocator textures are built from; slot 2 allocates. */
class TextureAllocator {
public:
    virtual ~TextureAllocator() = 0;
    virtual void *allocate(u32 size, u32 alignment) = 0;
};

/* What the caller wants built. */
struct TextureDesc {
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 clear;       /* zero the pixels */
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12[2];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 allocatePixels;
};

/* The image record (0x20 bytes). */
struct TextureImage {
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
    /* 0x08 */ u32 bytes;
    /* 0x0C */ s32 pixelsOffset;   /* self-relative; 0 for none */
    /* 0x10 */ TextureAllocator *allocator;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
};

/* The texture header (0x48 bytes). */
struct TextureHeader {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 magic;          /* 'TXHS' */
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ s32 width;
    /* 0x1C */ s32 height;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ s32 imageOffset;    /* self-relative */
    /* 0x3C */ u8 unk3c;
    /* 0x3D */ u8 unk3d[3];
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
};

/* Store the offset from `field` to `target` (0 for no target). */
static inline void textureSetRelative(s32 *field, const void *target)
{
    if (target != NULL) {
        *field = (s32)((const u8 *)target - (const u8 *)field);
    } else {
        *field = 0;
    }
}

#endif
