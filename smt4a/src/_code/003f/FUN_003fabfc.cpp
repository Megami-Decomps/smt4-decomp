/* NON_MATCHING: retail argument packing or conditional store scheduling differs. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

/* Draw an animation without applying the keyframe's placement transform. */
extern "C" void FUN_003fabfc(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                            u32 flags, s32 filter, f32 time, f32 scale)
{
    if (owner->origin != NULL) {
        SpriteDrawOptions options = {filter, 0, 0};
        FUN_003fd140(owner, index, position, flags, options, time, scale);
    }
}
