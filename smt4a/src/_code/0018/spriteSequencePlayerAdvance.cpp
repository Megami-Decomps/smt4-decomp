/* NON_MATCHING: retail forms the next frame key's address before storing the incremented frame index, and loads the command list before the incremented step; the plain source orders both the other way (a single-use reference and command-list local reproduce them). */
#include "ui/UiSpriteApi.h"
#include "ui/UiSpriteSequence.h"

// Advances the image-frame track by `rate` frames: shows the next frame, restarts the sequence at -2 and, at its end (-1),
// continues with the next command's frame sequence.
extern "C" void spriteSequencePlayerAdvance(UiSpriteState *sprite, f32 rate)
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
    s16 image = keys[sprite->frameIndex].image;
    if (image == -1) {
        if (sprite->commandsRunning != 0 && sprite->commands != NULL &&
            sprite->commands[sprite->frameStep].frameSequence != -1) {
            ++sprite->frameStep;
            s32 next = sprite->commands[sprite->frameStep].frameSequence;
            if (next == -1 || next == -3) {
                sprite->frameDone = 1;
                return;
            }
            keys = uiSpriteFindFrameSequence(sprite->resources, static_cast<s16>(next));
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
