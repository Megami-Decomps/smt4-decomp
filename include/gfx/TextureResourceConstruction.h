#ifndef GFX_TEXTURE_RESOURCE_CONSTRUCTION_H
#define GFX_TEXTURE_RESOURCE_CONSTRUCTION_H

#include "gfx/ResourceDispatch.h"
#include "classes/AsdAllocatorObject.h"

// Prefix of the resolved texture data, not its complete serialized extent.
struct TextureConstructionResource {
    u32 type; // 0x00
    u8 unk04[0x14];
    s32 height; // 0x18
    s32 width; // 0x1c
    u8 unk20[0x10];
    u32 flags; // 0x30
    u32 format; // 0x34
};
struct TextureConstructionDescription {
    s32 width; // 0x00
    s32 height; // 0x04
    u16 format; // 0x08
    u16 depthFormat; // 0x0a
    u32 flags; // 0x0c
    u32 mipFlags; // 0x10
    u8 cube; // 0x14

    TextureConstructionDescription()
        : height(240), format(0x8058), depthFormat(0x88f0),
          flags(0x20000), mipFlags(0x30000), cube(0) {}
};
struct TextureResourceFormats {
    u16 values[14];
};
typedef char TextureResourceFormatsSizeCheck[sizeof(TextureResourceFormats) == 0x1c ? 1 : -1];
struct ConstructedTexture;
typedef char TextureConstructionLayoutCheck[
    sizeof(TextureConstructionResource) == 0x38 &&
    offsetof(TextureConstructionResource, height) == 0x18 &&
    offsetof(TextureConstructionResource, flags) == 0x30 &&
    offsetof(TextureConstructionResource, format) == 0x34 &&
    sizeof(TextureConstructionDescription) == 0x18 &&
    offsetof(TextureConstructionDescription, format) == 8 &&
    offsetof(TextureConstructionDescription, cube) == 0x14 ? 1 : -1];

#endif
