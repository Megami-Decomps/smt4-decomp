/* NON_MATCHING: the position copy uses vldmia/vstmia instead of retail's scalar loads/stores, changing VFP/register scheduling. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" f32 g_spriteDrawYOffset;

/* Offset the sprite's origin before forwarding its draw parameters. */
extern "C" void spriteDrawWithOrigin(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                            u32 flags, SpriteDrawPlacementOptions options, f32 time, f32 scale)
{
    if (owner->origin == NULL) {
        return;
    }
    SpriteDrawVector3 adjusted = *position;
    adjusted.x += (f32)-owner->origin->x * scale;
    adjusted.y -= (-143.0f - (f32)owner->origin->top + (f32)owner->origin->bottom) * scale;
    adjusted.y += g_spriteDrawYOffset;
    SpriteDrawOptions drawOptions = {options.filter, 1, options.flipY};
    FUN_003fd140(owner, index, &adjusted, flags, drawOptions, time, scale);
}
