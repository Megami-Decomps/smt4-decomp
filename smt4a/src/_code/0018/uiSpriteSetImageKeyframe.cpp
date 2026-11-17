/* NON_MATCHING: retail multiplies the index by 3 in place (r1) and returns with bx lr; the build keeps the product in r4 (push/pop {r4}). */
#include "ui/UiSpriteApi.h"

/* Starts opacity key `key` of the sprite at its first value (its last one when `reverse`). */
extern "C" void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 reverse)
{
    if (sprite->alphaKeys != NULL) {
        sprite->alphaKey = (s16)key;
        sprite->alphaFrame = 0;
        sprite->alphaDone = 0;
        sprite->finished = 0;
        sprite->alphaReverse = (s8)reverse;
        const UiSpriteScalarKey *value = &sprite->alphaKeys[key];
        sprite->alpha = reverse != 0 ? value->last : value->first;
    }
}
