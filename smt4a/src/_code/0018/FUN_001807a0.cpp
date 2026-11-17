/* NON_MATCHING: scalar-track narrow-index casts and interpolation VFP allocation differ from retail (retail also hoists the constant 1 and keeps r5 live). */
#include "ui/UiSpriteApi.h"

static inline void uiBeginSpriteScalarKey(UiSpriteState *sprite, s16 index, s8 reverse)
{
    sprite->alphaKey = index;
    sprite->alphaFrame = 0;
    sprite->alphaReverse = reverse;
    sprite->finished = 0;
    const UiSpriteScalarKey *key = &sprite->alphaKeys[index];
    sprite->alpha = reverse ? key->last : key->first;
}

extern "C" void FUN_001807a0(UiSpriteState *sprite, f32 rate)
{
    if (!sprite->alphaDone && sprite->alphaKeys) {
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
            if (sprite->commandsRunning && sprite->commands &&
                sprite->commands[sprite->alphaStep].alphaKey != -1) {
                const SpriteAnimationCommand *steps = sprite->commands;
                ++sprite->alphaStep;
                const SpriteAnimationCommand *next = &steps[sprite->alphaStep];
                if (next->alphaKey != -1 && next->alphaKey != -3) {
                    if (next->alphaKey != -2) {
                        uiBeginSpriteScalarKey(sprite, next->alphaKey, next->alphaReverse);
                    } else {
                        sprite->alphaStep = 0;
                        uiBeginSpriteScalarKey(sprite, steps[0].alphaKey, steps[0].alphaReverse);
                    }
                    return;
                }
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
            return;
        }
    }
    sprite->alphaDone = 1;
}
