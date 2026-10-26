/* NON_MATCHING: Texture-descriptor store grouping and resource argument registers differ. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"

extern "C" {
TextureUploadResourcePrefixIV *FUN_002d5a08(u32 source, u32 sourceInfo,
    u32 extent, u32 format, u32 pixelType, u32 internalFormat, u32 options);
TextureObject *FUN_0036ec8c(const TextureCreateInfoIV *info,
    MemoryAllocator *allocator);
void FUN_002bd498(TextureObject **object, MemoryAllocator *allocator, u32 flags);

void FUN_00343e5c(TextureBindingPrefixIV *binding, u32 extent,
    u32 options, u32 source, u32 sourceInfo)
{
    binding->resource = FUN_002d5a08(source, sourceInfo, extent,
        0x1908, 0x8033, 0x81a5, options);

    MemoryAllocator *allocator = reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA());
    TextureCreateInfoIV info;
    info.height = 0;
    info.width = 0;
    info.unk08 = 1;
    info.unk0C = 0x02020000;
    info.data = 0;
    info.hardwareFormat = 0;
    info.flag18 = 0;
    info.flag19 = 1;

    info.data = binding->resource->data;
    info.hardwareFormat = binding->resource->texture->image.hardwareFormat & 0xffu;
    info.width = binding->resource->texture->dimensions.width;
    info.height = binding->resource->texture->dimensions.height;

    binding->object = FUN_0036ec8c(&info, allocator);
    allocator = reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA());
    FUN_002bd498(&binding->object, allocator, 0);
}
}
