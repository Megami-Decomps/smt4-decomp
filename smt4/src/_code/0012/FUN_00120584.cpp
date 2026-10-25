/* NON_MATCHING: calls, relative-pointer stores and the byte-fill loop match retail; armcc allocates desc/header/image to r6/r5/r4 (retail r5/r4/r6), loads width and height with one vldmia and multiplies as w*4.0 (retail s2*w), and orders the final conditional stores differently. */
#include "AsdSDK/Source/Gfx/Tex/TextureBuild.h"
#include "AsdSDK/AsdMemUtil.h"

// memset: fill `count` bytes with the low byte of `value`.
static inline void *fillBytes(void *destination, s32 value, u32 count)
{
    u8 *bytes = (u8 *)destination;
    for (u32 left = count; left != 0; left--) {
        *bytes++ = (u8)value;
    }
    return destination;
}

extern "C" {

// Build a texture header and its image record from a description.
TextureHeader *FUN_00120584(const TextureDesc *desc, TextureAllocator *allocator)
{
    TextureHeader *header = (TextureHeader *)allocator->allocate(sizeof(TextureHeader), 4);
    if (header != NULL) {
        memClear(header, sizeof(TextureHeader));
    }
    header->unk00 = 0x20000021;
    header->magic = 0x48535854;
    header->unk08 = 0x5000000;
    header->unk0c = 0;
    header->unk10 = 0;
    header->unk14 = 0;
    header->width = desc->width;
    header->height = desc->height;
    header->unk20 = 0x6040;
    header->unk24 = 0x1405;
    header->unk28 = 0;
    header->unk2c = 0;
    header->unk30 = desc->unk08;
    header->unk34 = 0;

    TextureImage *image = (TextureImage *)allocator->allocate(sizeof(TextureImage), 4);
    if (image != NULL) {
        image->width = 0;
        image->height = 0;
        image->bytes = 0;
        image->pixelsOffset = 0;
        image->allocator = NULL;
        image->unk14 = 0;
        image->unk18 = 0;
        image->unk1c = 0;
    }
    image->allocator = allocator;
    image->width = desc->width;
    image->height = desc->height;
    image->unk14 = 0x20;
    image->unk18 = desc->unk0c;
    u32 bytes = (u32)(4.0f * (f32)desc->width * (f32)desc->height);
    if (desc->allocatePixels == 0) {
        image->bytes = 0;
        image->pixelsOffset = 0;
    } else {
        u8 *pixels = (u8 *)allocator->allocate(bytes, 0x80);
        if (desc->clear != 0) {
            fillBytes(pixels, 0, bytes);
        }
        image->bytes = bytes;
        textureSetRelative(&image->pixelsOffset, pixels);
    }
    textureSetRelative(&header->imageOffset, image);
    header->unk3c = desc->unk11;
    header->unk40 = desc->unk14;
    return header;
}
}
