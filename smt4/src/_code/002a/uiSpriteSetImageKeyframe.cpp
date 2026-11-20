#include "ui/UiSpriteApi.h"

/* Starts opacity key `key` of the sprite at its first value (its last one when `reverse`). */
extern "C" void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s16 key, s32 reverse)
{
    const UiSpriteScalarKey *value;

    if (sprite->alphaKeys != NULL) {
        sprite->alphaKey = key;
        sprite->alphaFrame = 0;
        sprite->alphaDone = 0;
        value = &sprite->alphaKeys[sprite->alphaKey];
        sprite->finished = 0;
        sprite->alphaReverse = reverse;
        if (reverse != 0) {
            sprite->alpha = value->last;
        } else {
            sprite->alpha = value->first;
        }
    }
}
