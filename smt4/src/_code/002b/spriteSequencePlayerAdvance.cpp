/* NON_MATCHING: frame index/elapsed and zero/-1 constants use different registers; queued-sequence addressing and the final finished store also schedule differently. */
#include "ui/UiSpriteApi.h"

static __inline UiSpriteFrameKey *findSpriteSequence(UiResourceParameters *resources, s16 sequence)
{
    s32 current = 0;
    for (u32 i = 0; i < (resources->frameKeyBytes >> 2); ++i) {
        if (current == sequence)
            return &resources->frameKeys[i];
        if (resources->frameKeys[i].image == -1)
            ++current;
    }
    return NULL;
}

extern "C" {
// Advances the image-frame track: shows the next frame, restarts the sequence at -2 and, at its end (-1), continues
// with the next command's frame sequence.
void spriteSequencePlayerAdvance(UiSpriteState *sprite)
{
    if (!sprite->frameDone && sprite->frameKeys != NULL) {
        UiSpriteFrameKey *frames = sprite->frameKeys;
        if (sprite->frameElapsed < frames[sprite->frameIndex].duration) {
            ++sprite->frameElapsed;
        } else {
            sprite->frameElapsed = 0;
            ++sprite->frameIndex;
            s32 frame = frames[sprite->frameIndex].image;
            if (frame == -1) {
                if (sprite->commandsRunning && sprite->commands &&
                    sprite->commands[sprite->frameStep].frameSequence != -1) {
                    ++sprite->frameStep;
                    s32 sequence = sprite->commands[sprite->frameStep].frameSequence;
                    if (sequence != -1 && sequence != -3) {
                        frames = findSpriteSequence(sprite->resources, sequence);
                        sprite->frameKeys = frames;
                        if (frames == NULL)
                            return;
                        sprite->frameIndex = 0;
                        sprite->frameElapsed = 0;
                        sprite->frameDone = 0;
                        sprite->finished = 0;
                        sprite->image = frames[0].image;
                        sprite->secondaryImage = -1;
                        return;
                    }
                }
                sprite->frameDone = 1;
                return;
            }
            if (frame == -2) {
                sprite->frameIndex = 0;
                sprite->image = frames[0].image;
                sprite->secondaryImage = -1;
            } else {
                sprite->image = frame;
                sprite->secondaryImage = -1;
            }
        }
    }
}
}
