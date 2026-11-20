#include "ui/UiSpriteApi.h"

/* Starts scale key `key` of the sprite at its first value (its last one when `reverse`). */
extern "C" void uiSpriteSetScaleKeyframe(UiSpriteState *sprite, s16 key, s32 reverse)
{
    const UiSpriteScalarKey *value;
    f32 scale;

    if (sprite->scaleKeys != NULL) {
        sprite->scaleKey = key;
        sprite->scaleFrame = 0;
        sprite->scaleDone = 0;
        value = &sprite->scaleKeys[sprite->scaleKey];
        sprite->finished = 0;
        sprite->scaleReverse = reverse;
        if (reverse != 0) {
            scale = value->last;
        } else {
            scale = value->first;
        }
        sprite->scale[0] = scale;
        sprite->scale[1] = scale;
        sprite->scale[2] = scale;
    }
}
