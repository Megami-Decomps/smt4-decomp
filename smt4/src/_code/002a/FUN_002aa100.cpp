/* NON_MATCHING: Sprite argument loads use different VFP registers; the retail adjacent-tail NOP also differs. */
#include "gfx/SpriteTextureRect.h"
extern "C" {
void FUN_002aa18c(u32, u32, u32, u32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

// Converts atlas coordinates to normalized UVs and applies the sprite's horizontal bearing.
void FUN_002aa100(u32, const SpriteTextureRect* rectangle, u32 first, u32 second, u32 third, u32 fourth,
          f32 x, f32 y, f32 width, f32 height, f32 depth)
{
    f32 textureWidth = (f32)rectangle->textureWidth;
    f32 textureHeight = (f32)rectangle->textureHeight;
    FUN_002aa18c(first, second, third, fourth,
         x + (f32)rectangle->offsetX, y, width, height,
         (f32)rectangle->width / textureWidth, (f32)rectangle->height / textureHeight,
         (f32)rectangle->textureX / textureWidth, (f32)rectangle->textureY / textureHeight, depth);
}
}
