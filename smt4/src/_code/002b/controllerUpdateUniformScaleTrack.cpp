/* NON_MATCHING (b1454): retail narrows the next segment index twice (call-site cast, then again after the s16 store inside the start helper) and lays the inlined reverse select out differently; the scale add order now matches. */
#include "ui/UiSpriteApi.h"

static __inline f32 scaleSegmentStart(const UiSpriteScalarKey *segment, s32 reverse)
{
    return reverse ? segment->last : segment->first;
}

static __inline f32 scaleSegmentEnd(const UiSpriteScalarKey *segment, s32 reverse)
{
    return reverse ? segment->first : segment->last;
}

static void startScaleSegment(UiSpriteState *sprite, s16 index, s8 reverse)
{
    sprite->scaleKey = index;
    sprite->scaleFrame = 0;
    sprite->scaleReverse = reverse;
    sprite->finished = 0;
    const UiSpriteScalarKey *segment = &sprite->scaleKeys[index];
    f32 scale = scaleSegmentStart(segment, reverse);
    sprite->scale[0] = scale;
    sprite->scale[1] = scale;
    sprite->scale[2] = scale;
}

/* Advances the scale track: interpolates its key, then loops it or continues with the next command; the scale stays
   uniform. */
extern "C" void controllerUpdateUniformScaleTrack(UiSpriteState *sprite)
{
    if (sprite->scaleDone || sprite->scaleKeys == NULL) {
        return;
    }
    const UiSpriteScalarKey *segment = &sprite->scaleKeys[sprite->scaleKey];
    u32 frames = segment->duration;
    if ((s16)sprite->scaleFrame >= (s32)frames) {
        s8 reverse = sprite->scaleReverse;
        if (segment->loop) {
            sprite->scale[0] = scaleSegmentStart(segment, reverse);
            sprite->scaleFrame = 0;
        } else {
            sprite->scale[0] = scaleSegmentEnd(segment, reverse);
            if (!(sprite->commandsRunning && sprite->commands != NULL &&
                  sprite->commands[sprite->scaleStep].scaleKey != -1)) {
                sprite->scaleDone = 1;
            } else {
                ++sprite->scaleStep;
                const SpriteAnimationCommand *next = &sprite->commands[sprite->scaleStep];
                if (next->scaleKey == -1 || next->scaleKey == -3) {
                    sprite->scaleDone = 1;
                } else if (next->scaleKey == -2) {
                    sprite->scaleStep = 0;
                    const SpriteAnimationCommand *first = sprite->commands;
                    startScaleSegment(sprite, (s16)first->scaleKey, first->scaleReverse);
                } else {
                    startScaleSegment(sprite, (s16)next->scaleKey, next->scaleReverse);
                }
            }
        }
    } else {
        f32 step;
        if (sprite->scaleReverse) {
            step = (segment->first - segment->last) / (f32)frames;
        } else {
            step = (segment->last - segment->first) / (f32)frames;
        }
        ++sprite->scaleFrame;
        sprite->scale[0] = sprite->scale[0] + step;
    }
    sprite->scale[1] = sprite->scale[0];
    sprite->scale[2] = sprite->scale[0];
}
