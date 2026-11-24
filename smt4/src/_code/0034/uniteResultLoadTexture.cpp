#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"
#include "nw/gfx/ResGraphicsFile.h"

extern "C" {
TextureUploadResourcePrefixIV *asdGxRenderTargetCreate(u32 source, u32 sourceInfo,
    u32 extent, u32 format, u32 pixelType, u32 internalFormat, u32 options);
TextureObject *textureBuildFileFromConfig(const TextureCreateInfoIV *info,
    MemoryAllocator *allocator);
void FUN_002bd498(TextureObject **object, MemoryAllocator *allocator, ResGraphicsFile file);

/* Creates the render target and sets up a texture object from its upload resource. */
void uniteResultLoadTexture(TextureBindingPrefixIV *binding, u32 extent,
    u32 options, u32 width, u32 height)
{
    binding->resource = asdGxRenderTargetCreate(width, height, extent,
        0x1908, 0x8033, 0x81a5, options);

    MemoryAllocator *allocator = (MemoryAllocator *)asdMemoryGetAllocatorA();
    binding->object = textureBuildFileFromConfig(
        &TextureCreateInfoIV()
            .setData(binding->resource->data)
            .setHardwareFormat((u8)binding->resource->texture->image.hardwareFormat)
            .setWidth(binding->resource->texture->dimensions.width)
            .setHeight(binding->resource->texture->dimensions.height),
        allocator);
    FUN_002bd498(&binding->object, (MemoryAllocator *)asdMemoryGetAllocatorA(), ResGraphicsFile(NULL));
}
}
