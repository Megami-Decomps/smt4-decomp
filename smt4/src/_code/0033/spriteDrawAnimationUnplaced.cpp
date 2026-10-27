#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" void FUN_0033f3a0(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                             u32 flags, SpriteDrawOptions options, f32 time, f32 scale);

/* Plays the animation without a placement offset (the guard's body is a shrink-wrapped helper). */
static __inline void drawKeyframe(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                                  u32 flags, s32 filter, f32 time, f32 scale)
{
    SpriteDrawOptions options = {filter, 0, 0};
    FUN_0033f3a0(owner, index, position, flags, options, time, scale);
}

/* Draw an animation without applying the keyframe's placement transform. */
extern "C" void spriteDrawAnimationUnplaced(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                            u32 flags, s32 filter, f32 time, f32 scale)
{
    if (owner->origin != NULL) {
        drawKeyframe(owner, index, position, flags, filter, time, scale);
    }
}
