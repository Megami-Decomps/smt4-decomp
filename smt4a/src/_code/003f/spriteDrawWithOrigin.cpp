/* NON_MATCHING: the position copy uses vldmia/vstmia instead of retail's scalar loads/stores, changing VFP/register scheduling. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" f32 g_spriteDrawYOffset;
extern "C" void FUN_003fd140(SpriteDrawOwner *owner, u32 index, const SpriteDrawVector3 *position,
                            u32 flags, SpriteDrawDimensions dimensions, f32 time, f32 scale);

/* Offset the sprite's origin before forwarding its draw parameters. */
extern "C" void spriteDrawWithOrigin(SpriteDrawOwner *owner, u32 index, const SpriteDrawVector3 *position,
                            u32 flags, SpriteDrawVector2 dimensions, f32 time, f32 scale)
{
    if (owner->origin == NULL) {
        return;
    }
    SpriteDrawVector3 adjusted = *position;
    adjusted.x += (f32)-owner->origin->x * scale;
    adjusted.y -= (-143.0f - (f32)owner->origin->top + (f32)owner->origin->bottom) * scale;
    adjusted.y += g_spriteDrawYOffset;
    SpriteDrawDimensions drawDimensions;
    drawDimensions.width = dimensions.values.x;
    drawDimensions.mode = 1;
    drawDimensions.height = dimensions.values.y;
    FUN_003fd140(owner, index, &adjusted, flags, drawDimensions, time, scale);
}
