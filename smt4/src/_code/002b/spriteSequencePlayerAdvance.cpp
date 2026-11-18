/* NON_MATCHING: shrink-wrapped prologue; retail forms the frame address before the index store and loads the command list before the incremented step (the Apocalypse twin FUN_00181948 differs the same way); sequence lookup scratch registers differ. */
#include "ui/UiSpriteApi.h"
#include "ui/UiSpriteSequence.h"

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
                    if (sequence == -1 || sequence == -3) {
                        sprite->frameDone = 1;
                        return;
                    }
                    frames = uiSpriteFindFrameSequence(sprite->resources, sequence);
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
