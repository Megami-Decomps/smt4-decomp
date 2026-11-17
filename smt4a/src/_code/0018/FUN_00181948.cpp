/* NON_MATCHING: control flow and stores match; the frame-key address is formed after the step store (retail before it) and the sequence-step lookup allocates r2/r5/r6 differently. */
#include "ui/UiSpriteApi.h"

static inline UiSpriteFrameKey *spriteFrameSet(UiResourceParameters *resources, s16 requested)
{
    s32 section = 0;
    for (u32 i = 0; i < (resources->frameKeyBytes >> 2); ++i) {
        if (section == requested) {
            return &resources->frameKeys[i];
        }
        if (resources->frameKeys[i].image == -1) {
            ++section;
        }
    }
    return NULL;
}

// Advances the image-frame track by `rate` frames: shows the next frame, restarts the sequence at -2 and, at its end (-1),
// continues with the next command's frame sequence.
extern "C" void FUN_00181948(UiSpriteState *sprite, f32 rate)
{
    if (sprite->frameDone != 0 || sprite->frameKeys == NULL) {
        sprite->frameDone = 1;
        return;
    }
    UiSpriteFrameKey *keys = sprite->frameKeys;
    u16 duration = (u32)((f32)keys[sprite->frameIndex].duration / rate);
    if (sprite->frameElapsed < duration) {
        ++sprite->frameElapsed;
        return;
    }
    sprite->frameElapsed = 0;
    ++sprite->frameIndex;
    s32 image = keys[sprite->frameIndex].image;
    if (image == -1) {
        if (sprite->commandsRunning != 0 && sprite->commands != NULL &&
            sprite->commands[sprite->frameStep].frameSequence != -1) {
            ++sprite->frameStep;
            s32 next = sprite->commands[sprite->frameStep].frameSequence;
            if (next != -1 && next != -3) {
                keys = spriteFrameSet(sprite->resources, (s16)next);
                sprite->frameKeys = keys;
                if (keys == NULL) {
                    return;
                }
                sprite->frameIndex = 0;
                sprite->frameElapsed = 0;
                sprite->frameDone = 0;
                sprite->finished = 0;
                sprite->image = keys->image;
                sprite->secondaryImage = -1;
                return;
            }
        }
        sprite->frameDone = 1;
        return;
    }
    if (image == -2) {
        sprite->frameIndex = 0;
        sprite->image = keys->image;
        sprite->secondaryImage = -1;
        return;
    }
    sprite->secondaryImage = -1;
    sprite->image = image;
}
