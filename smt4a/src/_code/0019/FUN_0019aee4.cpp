/* NON_MATCHING: the push list now matches retail (r4-r9); the order of the four UV divisions and their field loads differs (retail loads textureX/textureWidth/textureY first, then textureHeight, height, width, offsetX). */
#include "gfx/SpriteTextureRect.h"
extern "C" {
void FUN_0019af70(u32, u32, u32, u32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

// Converts atlas coordinates to normalized UVs and applies the sprite's horizontal bearing.
void FUN_0019aee4(u32, const SpriteTextureRect* rectangle, u32 first, u32 second, u32 third, u32 fourth,
          f32 x, f32 y, f32 width, f32 height, f32 depth)
{
    FUN_0019af70(first, second, third, fourth,
         x + (f32)rectangle->offsetX, y, width, height,
         (f32)rectangle->width / (f32)rectangle->textureWidth, (f32)rectangle->height / (f32)rectangle->textureHeight,
         (f32)rectangle->textureX / (f32)rectangle->textureWidth, (f32)rectangle->textureY / (f32)rectangle->textureHeight, depth);
}
}
