/* NON_MATCHING: endpoint/sequence register lifetimes, cold completion exit and interpolation scheduling differ; redundant mirror stores are omitted. */
#include "ui/UiSpriteApi.h"

static __inline void uiSpriteBeginScaleStep(UiSpriteState *sprite, s16 index, s8 reverse)
{
    sprite->scaleKey = index;
    sprite->scaleFrame = 0;
    sprite->scaleReverse = reverse;
    sprite->finished = 0;
    const UiSpriteScalarKey *key = &sprite->scaleKeys[index];
    sprite->scale[0] = reverse ? key->last : key->first;
}

// Advances the scale track by `rate` frames: interpolates its key, then loops it or continues with the next command.
extern "C" void FUN_00182348(UiSpriteState *sprite, f32 rate)
{
    if (sprite->scaleDone || sprite->scaleKeys == NULL) {
        sprite->scaleDone = 1;
        return;
    }
    const UiSpriteScalarKey *key = &sprite->scaleKeys[sprite->scaleKey];
    f32 current = sprite->scale[0];
    f32 delta = key->last - key->first;
    f32 direction = sprite->scaleReverse ? key->first - key->last : delta;
    f32 target = sprite->scaleReverse ? key->first : key->last;
    bool reached = direction < 0.0f ? target >= current : target <= current;
    if (reached) {
        if (key->loop) {
            sprite->scale[0] = sprite->scaleReverse ? key->last : key->first;
            sprite->scaleFrame = 0;
        } else {
            sprite->scale[0] = target;
            if (sprite->commandsRunning && sprite->commands != NULL &&
                sprite->commands[sprite->scaleStep].scaleKey != -1) {
                const SpriteAnimationCommand *commands = sprite->commands;
                ++sprite->scaleStep;
                const SpriteAnimationCommand *step = &commands[sprite->scaleStep];
                if (step->scaleKey == -1 || step->scaleKey == -3) {
                    sprite->scaleDone = 1;
                } else if (step->scaleKey == -2) {
                    sprite->scaleStep = 0;
                    uiSpriteBeginScaleStep(sprite, (s16)commands[0].scaleKey, commands[0].scaleReverse);
                } else {
                    uiSpriteBeginScaleStep(sprite, (s16)step->scaleKey, step->scaleReverse);
                }
            } else {
                sprite->scaleDone = 1;
            }
        }
    } else {
        f32 duration = (f32)(u32)key->duration / rate;
        if (sprite->scaleReverse)
            delta = key->first - key->last;
        sprite->scale[0] = delta / duration + current;
        ++sprite->scaleFrame;
    }
    sprite->scale[1] = sprite->scale[0];
    sprite->scale[2] = sprite->scale[0];
}
