#include "ui/UiSpriteApi.h"

/* Starts opacity key `key` of the sprite at its first value (its last one when `reverse`). */
extern "C" void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s16 key, s32 reverse)
{
    if (sprite->alphaKeys != NULL) {
        sprite->alphaKey = (s16)key;
        sprite->alphaFrame = 0;
        sprite->alphaDone = 0;
        sprite->finished = 0;
        sprite->alphaReverse = (s8)reverse;
        const UiSpriteScalarKey *value = &sprite->alphaKeys[sprite->alphaKey];
        sprite->alpha = reverse != 0 ? value->last : value->first;
    }
}
