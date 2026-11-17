/* NON_MATCHING: interpolation cold branch and sequence reset paths are merged differently; VFP allocation differs. */
#include "ui/UiSpriteApi.h"

extern "C" {
// Advances the opacity track: interpolates its key, then loops it or continues with the next command.
void FUN_002b1e08(UiSpriteState *sprite)
{
    if (sprite->alphaDone != 0 || sprite->alphaKeys == NULL)
        return;
    UiSpriteScalarKey *key = &sprite->alphaKeys[sprite->alphaKey];
    if (sprite->alphaFrame < key->duration) {
        f32 delta;
        if (sprite->alphaReverse)
            delta = (key->first - key->last) / (f32)(u32)key->duration;
        else
            delta = (key->last - key->first) / (f32)(u32)key->duration;
        ++sprite->alphaFrame;
        sprite->alpha += delta;
        return;
    }
    if (key->loop != 0) {
        sprite->alpha = sprite->alphaReverse ? key->last : key->first;
        sprite->alphaFrame = 0;
        return;
    }
    sprite->alpha = sprite->alphaReverse ? key->first : key->last;
    if (sprite->commandsRunning && sprite->commands != NULL &&
        sprite->commands[sprite->alphaStep].alphaKey != -1) {
        ++sprite->alphaStep;
        const SpriteAnimationCommand *step = &sprite->commands[sprite->alphaStep];
        if (step->alphaKey != -1 && step->alphaKey != -3) {
            if (step->alphaKey == -2) {
                sprite->alphaStep = 0;
                step = sprite->commands;
            }
            sprite->alphaKey = step->alphaKey;
            sprite->alphaFrame = 0;
            sprite->alphaReverse = step->alphaReverse;
            sprite->finished = 0;
            key = &sprite->alphaKeys[sprite->alphaKey];
            sprite->alpha = sprite->alphaReverse ? key->last : key->first;
            return;
        }
    }
    sprite->alphaDone = 1;
}
}
