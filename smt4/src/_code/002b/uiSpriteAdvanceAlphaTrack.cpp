/* NON_MATCHING: the key starter's index (retail sign-extends the stored key a second time, after the stores) and the interpolation's vadd operand order differ. */
#include "ui/UiSpriteApi.h"

static __inline void uiBeginSpriteScalarKey(UiSpriteState *sprite, s16 index, s32 reverse)
{
    sprite->alphaKey = index;
    sprite->alphaFrame = 0;
    sprite->alphaReverse = reverse;
    sprite->finished = 0;
    const UiSpriteScalarKey *key = &sprite->alphaKeys[index];
    sprite->alpha = reverse ? key->last : key->first;
}

extern "C" {
/* Advances the opacity track: interpolates its key, then loops it or continues with the next command. */
void uiSpriteAdvanceAlphaTrack(UiSpriteState *sprite)
{
    if (sprite->alphaDone != 0 || sprite->alphaKeys == NULL)
        return;
    const UiSpriteScalarKey *key = &sprite->alphaKeys[sprite->alphaKey];
    if (sprite->alphaFrame >= key->duration) {
        s8 reverse = sprite->alphaReverse;
        if (key->loop) {
            sprite->alpha = reverse ? key->last : key->first;
            sprite->alphaFrame = 0;
            return;
        }
        sprite->alpha = reverse ? key->first : key->last;
        if (sprite->commandsRunning && sprite->commands != NULL &&
            sprite->commands[sprite->alphaStep].alphaKey != -1) {
            const SpriteAnimationCommand *steps = sprite->commands;
            ++sprite->alphaStep;
            const SpriteAnimationCommand *next = &steps[sprite->alphaStep];
            if (next->alphaKey == -1 || next->alphaKey == -3) {
                sprite->alphaDone = 1;
            } else if (next->alphaKey == -2) {
                sprite->alphaStep = 0;
                uiBeginSpriteScalarKey(sprite, steps[0].alphaKey, steps[0].alphaReverse);
            } else {
                uiBeginSpriteScalarKey(sprite, next->alphaKey, next->alphaReverse);
            }
        } else {
            sprite->alphaDone = 1;
        }
    } else {
        f32 step;
        if (sprite->alphaReverse)
            step = (key->first - key->last) / (f32)(u32)key->duration;
        else
            step = (key->last - key->first) / (f32)(u32)key->duration;
        ++sprite->alphaFrame;
        sprite->alpha += step;
    }
}
}
