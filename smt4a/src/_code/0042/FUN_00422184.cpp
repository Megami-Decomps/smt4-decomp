/* NON_MATCHING: retail 62 vs built 62 rows; texture-field store ordering and saved integer/VFP register allocation differ. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "gfx/VertexStreams.h"

extern "C" {
AsdTexture *asdTextureCreate(s32);
f32 FUN_00168fbc(u32, u32, u32 *);
void nn_gxlow_CTR_FlushDataCacheForward(const void *, u32);

__softfp void FUN_00422184(AsdTextureRegion *region, s32 textureWidth, s32 textureHeight,
                          u32 format, u32 type, s32 x, s32 y, f32 width, f32 height,
                          void *pixels)
{
    region->texture = asdTextureCreate(0);
    region->texture->dimensions.width = textureWidth;
    region->texture->dimensions.height = textureHeight;
    region->texture->target = ASDTEXTURE_TARGET_2D;
    region->texture->unk08 = 0x10000;
    region->texture->image.flags = 0x2000000;
    region->texture->storage.pixels = pixels;
    region->x = static_cast<f32>(x);
    region->y = static_cast<f32>(y);
    region->width = width;
    region->height = height;
    f32 bytesPerPixel = FUN_00168fbc(format, type, &region->texture->image.hardwareFormat);
    u32 bytes = static_cast<u32>(static_cast<f32>(region->texture->dimensions.width *
                                               region->texture->dimensions.height) * bytesPerPixel);
    nn_gxlow_CTR_FlushDataCacheForward(region->texture->storage.pixels, bytes);
    region->texture->image.physicalAddress = asdGxGetPhysicalAddress(reinterpret_cast<u32>(region->texture->storage.pixels));
    region->scale = 1.0f;
    region->flags[0] = 0;
    region->flags[1] = 0;
}
}
