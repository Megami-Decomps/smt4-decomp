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

/* Advances the opacity track by `rate` frames: interpolates its key, then loops it or continues with the next command. */
extern "C" void uiSpriteAdvanceAlphaTrack(UiSpriteState *sprite, f32 rate)
{
    if (!sprite->alphaDone && sprite->alphaKeys != NULL) {
        const UiSpriteScalarKey *key = &sprite->alphaKeys[sprite->alphaKey];
        u16 duration = (u32)((f32)(u32)key->duration / rate);
        if (sprite->alphaFrame >= duration) {
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
            f32 frames = (f32)(u32)key->duration / rate;
            f32 step;
            if (sprite->alphaReverse)
                step = (key->first - key->last) / frames;
            else
                step = (key->last - key->first) / frames;
            ++sprite->alphaFrame;
            sprite->alpha += step;
        }
    } else {
        sprite->alphaDone = 1;
    }
}
