/* NON_MATCHING: the keyframe offset (index * 3) takes r4 (with push/pop) instead of reusing the dead index register r1. */
#include "ui/UiSpriteApi.h"

/* Starts opacity key `key` of the sprite at its first value (its last one when `reverse`). */
extern "C" void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 reverse)
{
    const UiSpriteScalarKey *value;

    if (sprite->alphaKeys != NULL) {
        sprite->alphaKey = key;
        sprite->alphaFrame = 0;
        sprite->alphaDone = 0;
        value = &sprite->alphaKeys[key];
        sprite->finished = 0;
        sprite->alphaReverse = reverse;
        if (reverse != 0) {
            sprite->alpha = value->last;
        } else {
            sprite->alpha = value->first;
        }
    }
}
