#include "shard/W6_W6Match8_AnimatedSprite.h"

static __inline void drawKeyframe(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                                  u32 flags, s32 filter, f32 time, f32 scale)
{
    spriteAnimationPlayAtTime(owner, index, position, flags, filter, 0, 0, time, scale);
}

/* Draw an animation without applying the keyframe's placement transform. */
extern "C" void spriteDrawAnimationUnplaced(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                            u32 flags, s32 filter, f32 time, f32 scale)
{
    if (owner->origin != NULL) {
        drawKeyframe(owner, index, position, flags, filter, time, scale);
    }
}
