/* NON_MATCHING: only the scale store and the flags' zero load are scheduled in the opposite order. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "gfx/VertexStreams.h"

extern "C" {
AsdTexture *asdTextureCreate(s32);
f32 texFormatGetBytesPerPixel(u32, u32, u32 *);
void nn_gxlow_CTR_FlushDataCacheForward(const void *, u32); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Creates a tile's texture over caller-owned pixels and flushes them for the GPU; the tile's
 * position in the source image (x, y) is not used here. */
void asdTextureTileCreate(AsdTextureTile *tile, s32 textureWidth, s32 textureHeight, s32 x, s32 y,
                  s32 width, s32 height, u32 format, u32 type, void *pixels, s32 reserved)
{
    tile->texture = asdTextureCreate(0);
    tile->texture->dimensions.width = textureWidth;
    tile->texture->dimensions.height = textureHeight;
    tile->texture->target = ASDTEXTURE_TARGET_2D;
    tile->texture->heap = 0x10000; /* ASD_HEAP_EXTRA (AsdMemory.h clashes with gfx/VertexStreams.h here) */
    tile->texture->image.flags = 0x2000000;
    tile->texture->storage.pixels = pixels;
    tile->width = (f32)width;
    tile->height = (f32)height;
    tile->format = format;
    tile->type = type;
    f32 bytesPerPixel = texFormatGetBytesPerPixel(tile->format, tile->type, &tile->texture->image.hardwareFormat);
    u32 bytes = (u32)((f32)(tile->texture->dimensions.width * tile->texture->dimensions.height) * bytesPerPixel);
    nn_gxlow_CTR_FlushDataCacheForward(tile->texture->storage.pixels, bytes);
    u32 physicalAddress = asdGxGetPhysicalAddress((u32)tile->texture->storage.pixels);
    tile->texture->image.physicalAddress = physicalAddress;
    tile->scale = 1.0f;
    for (u32 i = 0; i < sizeof(tile->flags) / sizeof(tile->flags[0]); ++i) {
        tile->flags[i] = 0;
    }
}
}
