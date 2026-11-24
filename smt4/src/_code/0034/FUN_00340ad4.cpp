/* NON_MATCHING: 24 lines (24 by shape); same instructions, branches and frame as retail. What differs: the
 * target parameter and the image width swap r8/r9, and the descriptor's constructor loads its 0x02020000 into
 * r0 after moving the allocator to r1, where retail loads it into r2 and moves the allocator afterwards. */
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"
#include "nw/gfx/ResGraphicsFile.h"

struct EffectTargetConfigurationViewIV {
    u8 unk00[4];
    u16 kind;
    u8 unk06[0x92];
    u8 alternateMode;
};
typedef char EffectTargetConfigurationOffsets[
    offsetof(EffectTargetConfigurationViewIV, kind) == 4 &&
    offsetof(EffectTargetConfigurationViewIV, alternateMode) == 0x98 ? 1 : -1];

extern "C" {
TextureUploadResourcePrefixIV *asdGxRenderTargetCreate(s32 width, s32 height, u32 parameter, u32 format, u32 type, u32 depthFormat, u32 flags);
TextureObject *FUN_0036ec8c(const TextureCreateInfoIV *info, MemoryAllocator *allocator);
void FUN_002bd498(TextureObject **object, MemoryAllocator *allocator, ResGraphicsFile file);
void FUN_003407d0(EffectBoundsSource *source, const EffectTargetConfigurationViewIV *configuration);

// Choose bounded target dimensions, apply special effect modes, and create a texture object over its upload resource.
void FUN_00340ad4(EffectBoundsSource *source, u32 parameter, u32 flags, const EffectTargetConfigurationViewIV *configuration)
{
    source->marginX = 0.0f;
    source->marginY = 0.0f;
    source->useCustomSize = 0;
    source->useAlternateMode = 0;
    s32 width = 8;
    s32 height = 8;
    const EffectBoundsImage *image = source->binding->image;
    for (s32 bit = 3; bit < 11; ++bit) {
        if (image->width < (1 << bit)) {
            width = 1 << bit;
            break;
        }
    }
    for (s32 bit = 3; bit < 11; ++bit) {
        if (image->height < (1 << bit)) {
            height = 1 << bit;
            break;
        }
    }
    if (height > 512)
        height = 512;
    if (width > 512)
        width = 512;
    if (configuration) {
        if (configuration->kind == 15) {
            height = 512;
            width = 512;
            source->useCustomSize = 1;
        }
        if (configuration->kind == 16 && configuration->alternateMode)
            source->useAlternateMode = 1;
    }
    TextureBindingPrefixIV *binding = (TextureBindingPrefixIV *)source;
    binding->resource = asdGxRenderTargetCreate(width, height, parameter, 0x1908, 0x8033, 0x81A5, flags);
    MemoryAllocator *allocator = reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA());
    binding->object = FUN_0036ec8c(
        &TextureCreateInfoIV()
            .setData(binding->resource->data)
            .setHardwareFormat((u8)binding->resource->texture->image.hardwareFormat)
            .setWidth(binding->resource->texture->dimensions.width)
            .setHeight(binding->resource->texture->dimensions.height),
        allocator);
    FUN_002bd498(&binding->object, reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA()), ResGraphicsFile(NULL));
    FUN_003407d0(source, configuration);
}
}
