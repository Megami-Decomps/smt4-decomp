/* NON_MATCHING: 11 lines; the hardware-format address for texFormatGetBytesPerPixel is built in r0 instead of r2,
 * and the physical address result is copied to r1 before its store. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
AsdTexture *asdTextureCreate(s32);
f32 texFormatGetBytesPerPixel(u32, u32, u32 *);
u32 osVirtToPhysAddress(const void *); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Creates a tile's texture over caller-owned pixels and flushes them for the GPU; the tile's
 * position in the source image (x, y) is not used here. */
void asdTextureTileCreate(AsdTextureTile *tile, s32 textureWidth, s32 textureHeight, s32 x, s32 y,
                  s32 width, s32 height, u32 format, u32 type, void *pixels, s32 reserved)
{
    tile->texture = asdTextureCreate(0);
    tile->texture->dimensions.width = textureWidth;
    tile->texture->dimensions.height = textureHeight;
    tile->texture->target = ASDTEXTURE_TARGET_2D;
    tile->texture->heap = ASD_HEAP_EXTRA;
    tile->texture->image.flags = 0x2000000;
    tile->texture->storage.pixels = pixels;
    tile->width = (f32)width;
    tile->height = (f32)height;
    tile->format = format;
    tile->type = type;
    f32 bytesPerPixel = texFormatGetBytesPerPixel(format, type, &tile->texture->image.hardwareFormat);
    u32 bytes = (u32)((f32)(tile->texture->dimensions.width * tile->texture->dimensions.height) * bytesPerPixel);
    nn_gxlow_CTR_FlushDataCacheForward((u32)(tile->texture->storage.pixels), bytes);
    tile->texture->image.physicalAddress = osVirtToPhysAddress(tile->texture->storage.pixels);
    tile->scale = 1.0f;
    tile->flags[0] = 0;
    tile->flags[1] = 0;
}
}
