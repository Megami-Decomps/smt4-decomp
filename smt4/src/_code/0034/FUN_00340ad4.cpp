/* NON_MATCHING: dimension helper registers, descriptor constructor's redundant zero stores, and allocator argument scheduling differ. */
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"

struct EffectTargetConfigurationViewIV {
    u8 unk00[4];
    u16 kind;
    u8 unk06[0x92];
    u8 alternateMode;
};
typedef char EffectTargetConfigurationOffsets[
    offsetof(EffectTargetConfigurationViewIV, kind) == 4 &&
    offsetof(EffectTargetConfigurationViewIV, alternateMode) == 0x98 ? 1 : -1];

static inline s32 effectTargetNextSize(u16 dimension)
{
    s32 size = 8;
    for (s32 bit = 3; bit < 11; ++bit) {
        if (dimension < (1 << bit)) {
            size = 1 << bit;
            break;
        }
    }
    return size;
}

extern "C" {
TextureUploadResourcePrefixIV *FUN_002d5a08(s32 width, s32 height, u32 parameter, u32 format, u32 type, u32 depthFormat, u32 flags);
TextureObject *FUN_0036ec8c(const TextureCreateInfoIV *info, MemoryAllocator *allocator);
void FUN_002bd498(TextureObject **object, MemoryAllocator *allocator, u32 flags);
void FUN_003407d0(EffectBoundsSource *source, const EffectTargetConfigurationViewIV *configuration);

// Choose bounded target dimensions, apply special effect modes, and create a texture object over its upload resource.
void FUN_00340ad4(EffectBoundsSource *source, u32 parameter, u32 flags, const EffectTargetConfigurationViewIV *configuration)
{
    source->marginX = 0.0f;
    source->marginY = 0.0f;
    source->useCustomSize = 0;
    source->useAlternateMode = 0;
    const EffectBoundsImage *image = source->binding->image;
    s32 width = effectTargetNextSize(image->width);
    s32 height = effectTargetNextSize(image->height);
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
    binding->resource = FUN_002d5a08(width, height, parameter, 0x1908, 0x8033, 0x81A5, flags);
    MemoryAllocator *allocator = reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA());
    TextureCreateInfoIV info;
    info.unk08 = 0;
    info.unk0C = 0x02020000;
    info.flag18 = 0;
    info.flag19 = 1;
    info.data = binding->resource->data;
    info.hardwareFormat = (u8)binding->resource->texture->image.hardwareFormat;
    info.width = binding->resource->texture->dimensions.width;
    info.height = binding->resource->texture->dimensions.height;
    binding->object = FUN_0036ec8c(&info, allocator);
    FUN_002bd498(&binding->object, reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA()), 0);
    FUN_003407d0(source, configuration);
}
}
