/* NON_MATCHING: format-table aggregate uses memcpy rather than VFP transfer; descriptor register scheduling differs. */
#include "gfx/TextureResourceConstruction.h"

extern "C" {
extern const TextureResourceFormats g_textureResourceFormats;
void FUN_00448ca4(ConstructedTexture *texture, AsdAllocatorObject *allocator,
    const TextureConstructionDescription *description, TextureConstructionResource *resource);

// Allocate a texture wrapper and derive its constructor parameters from resource metadata.
void FUN_0044582c(AsdAllocatorObject *allocator, DispatchResource *resource)
{
    ConstructedTexture *texture = (ConstructedTexture *)allocator->allocate(0x48, 0x20);
    TextureConstructionResource *data = (TextureConstructionResource *)resource;
    if (resource->flags == 0x20000004)
        data = (TextureConstructionResource *)resource->payload.get();

    TextureResourceFormats formats = g_textureResourceFormats;
    TextureConstructionDescription description;
    description.width = data->width;
    description.height = data->height;
    description.format = formats.values[data->format];
    description.depthFormat = 0;
    description.mipFlags = 0;
    description.flags = data->flags & ~0x03000000;
    switch (data->type) {
    case 0x20000009:
    case 0x20000011:
        break;
    case 0x20000021:
        description.cube = 1;
        break;
    }
    if (texture != NULL)
        FUN_00448ca4(texture, allocator, &description, data);
}
}
