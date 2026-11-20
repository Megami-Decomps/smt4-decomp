#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" f32 g_spriteDrawYOffset;

/* Offsets the sprite's origin before forwarding its draw parameters. */
extern "C" void spriteDrawWithOrigin(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                            u32 flags, s32 filter, s32 flipY, f32 time, f32 scale)
{
    if (owner->origin == NULL) {
        return;
    }
    SpriteDrawVector3 adjusted = *position;
    adjusted.x += (f32)(-owner->origin->x) * scale;
    adjusted.y -= (-143.0f - (f32)owner->origin->top + (f32)owner->origin->bottom) * scale;
    adjusted.y += g_spriteDrawYOffset;
    spriteAnimationPlayAtTime(owner, index, &adjusted, flags, filter, 1, flipY, time, scale);
}
