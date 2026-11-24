/* NON_MATCHING: 12 lines; same instructions as retail. The descriptor's constructor loads its constants into
 * r0/r2 after moving the allocator to r1, where retail loads them into r2/r3 and moves the allocator afterwards. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"
#include "nw/gfx/ResGraphicsFile.h"

extern "C" {
TextureUploadResourcePrefixIV *asdGxRenderTargetCreate(u32 source, u32 sourceInfo,
    u32 extent, u32 format, u32 pixelType, u32 internalFormat, u32 options);
TextureObject *FUN_0036ec8c(const TextureCreateInfoIV *info,
    MemoryAllocator *allocator);
void FUN_002bd498(TextureObject **object, MemoryAllocator *allocator, ResGraphicsFile file);

void uniteResultLoadTexture(TextureBindingPrefixIV *binding, u32 extent,
    u32 options, u32 source, u32 sourceInfo)
{
    binding->resource = asdGxRenderTargetCreate(source, sourceInfo, extent,
        0x1908, 0x8033, 0x81a5, options);

    MemoryAllocator *allocator = reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA());
    binding->object = FUN_0036ec8c(
        &TextureCreateInfoIV()
            .setData(binding->resource->data)
            .setHardwareFormat((u8)binding->resource->texture->image.hardwareFormat)
            .setWidth(binding->resource->texture->dimensions.width)
            .setHeight(binding->resource->texture->dimensions.height),
        allocator);
    FUN_002bd498(&binding->object, reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA()), ResGraphicsFile(NULL));
}
}
