/* NON_MATCHING: structure, locals and frame now match retail; armcc keeps the allocated object in r3 (retail keeps it in r0 and copies the resource pointer to r3) and so numbers the temporaries differently. */
#include "AsdSDK/Source/Gfx/Tex/TextureBuild.h"

extern "C" {

/* The render-target description the texture object is created from (0x20 bytes). */
struct RenderTargetDesc {
    RenderTargetDesc()
        : width(400), height(240), colorFormat(0x8058), depthFormat(0x88F0), colorLocation(0x20000),
          depthLocation(0x30000), unk14(0), unk18(0), renderable(0)
    {
    }
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
    /* 0x08 */ u16 colorFormat;      /* OpenGL internal format */
    /* 0x0A */ u16 depthFormat;      /* OpenGL internal format; 0 for none */
    /* 0x0C */ u32 colorLocation;
    /* 0x10 */ u32 depthLocation;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 renderable;
};

/* A texture resource: either the texture header itself or (kind 0x20000004) a wrapper that points at one. */
struct TextureResource {
    /* 0x00 */ u32 kind;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ s32 headerOffset;    /* self-relative; 0 for none */
};

/* The header a wrapper's self-relative offset points at (NULL for none). */
static __inline const TextureHeader *textureResourceHeader(const TextureResource *resource)
{
    s32 offset = resource->headerOffset;
    if (offset == 0) {
        return NULL;
    }
    return (const TextureHeader *)((const u8 *)&resource->headerOffset + offset);
}

void *FUN_0012c628(void *object, TextureAllocator *allocator, const RenderTargetDesc *desc);

/* Creates the texture object of a built texture header: a render target description (the 400x240 RGBA8 default,
 * overridden by the header's size, format and location bits) handed to the object's constructor. */
void *FUN_0011f8b8(TextureAllocator *allocator, const TextureResource *resource)
{
    void *object = allocator->allocate(0x50, 0x20);
    const TextureHeader *source = (const TextureHeader *)resource;
    if (resource->kind == 0x20000004) {
        source = textureResourceHeader(resource);
    }

    u16 formats[14] = {0x8058, 0x8051, 0x8057, 0x8D62, 0x8056, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    RenderTargetDesc desc;

    desc.width = source->height;
    desc.height = source->width;
    desc.colorFormat = formats[source->unk34];
    desc.depthFormat = 0;
    desc.colorLocation = source->unk30 & ~0x3000000u;
    desc.depthLocation = 0;
    switch (source->unk00) {
    case 0x20000009:
    case 0x20000011:
        break;
    case 0x20000021:
        desc.renderable = 1;
        break;
    }
    if (object != NULL) {
        return FUN_0012c628(object, allocator, &desc);
    }
    return object;
}

} /* extern "C" */
