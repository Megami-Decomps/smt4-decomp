/* NON_MATCHING: only register allocation differs - retail keeps each computed position component in r1 (lsl r1,r0,#12; str r1 / add r1,r1,r0) and reloads the sequence table pointer after advancing the step; armcc here uses r0 and keeps the pointer. */
#include "ui/UiSpriteState.h"

extern "C" {
void timerStart(UiSpriteState *sprite, u32 frame, u32 alternate);
void FUN_002b1e08(UiSpriteState *sprite);
void controllerUpdateUniformScaleTrack(UiSpriteState *sprite);
void spriteSequencePlayerAdvance(UiSpriteState *sprite);

/* Advances a sprite's position keyframe by a frame (interpolating between its two points, then walking its keyframe
   sequence), updates its other tracks and returns whether every track has finished. */
s32 FUN_002bf818(UiSpriteState *sprite)
{
    if (sprite == NULL || ((s32)sprite->unk04 < 0 && (s32)sprite->unk08 < 0)) {
        return 1;
    }
    if (sprite->completion.horizontal == 0 && sprite->keyframes != NULL) {
        UiSpriteKeyframe *key = &sprite->keyframes[sprite->animation];
        if (key->duration <= sprite->motionFrame) {
            if (key->rewind != 0) {
                if (sprite->keyframeTrack.alternate != 0) {
                    sprite->slide.x = key->altX << 12;
                    sprite->slide.y = key->altY << 12;
                } else {
                    sprite->slide.x = key->x << 12;
                    sprite->slide.y = key->y << 12;
                }
                sprite->keyframeTrack.elapsed = 0;
            } else {
                if (sprite->keyframeTrack.alternate != 0) {
                    sprite->slide.x = key->x << 12;
                    sprite->slide.y = key->y << 12;
                } else {
                    sprite->slide.x = key->altX << 12;
                    sprite->slide.y = key->altY << 12;
                }
                if (sprite->keyframeSequence.enabled != 0 && sprite->keyframeSteps != NULL &&
                    sprite->keyframeSteps[sprite->keyframeSequence.step].frame != -1) {
                    sprite->keyframeSequence.step = sprite->keyframeSequence.step + 1;
                    UiSpriteKeyframeStep *step = &sprite->keyframeSteps[sprite->keyframeSequence.step];
                    if (step->frame == -1 || step->frame == -3) {
                        sprite->completion.horizontal = 1;
                    } else if (step->frame == -2) {
                        sprite->keyframeSequence.step = 0;
                        timerStart(sprite, (s16)sprite->keyframeSteps[0].frame, sprite->keyframeSteps[0].alternate);
                    } else {
                        timerStart(sprite, (s16)step->frame, step->alternate);
                    }
                } else {
                    sprite->completion.horizontal = 1;
                }
            }
        } else {
            if (sprite->keyframeTrack.alternate != 0) {
                sprite->slide.x += ((key->x - key->altX) << 12) / key->duration;
                sprite->slide.y += ((key->y - key->altY) << 12) / key->duration;
            } else {
                sprite->slide.x += ((key->altX - key->x) << 12) / key->duration;
                sprite->slide.y += ((key->altY - key->y) << 12) / key->duration;
            }
            sprite->keyframeTrack.elapsed++;
        }
    }
    FUN_002b1e08(sprite);
    controllerUpdateUniformScaleTrack(sprite);
    spriteSequencePlayerAdvance(sprite);
    if (sprite->completion.horizontal != 0 && sprite->completion.vertical != 0 &&
        sprite->completion.scale != 0 && sprite->completion.opacity != 0) {
        sprite->animationFlags.completed = 1;
    } else {
        sprite->animationFlags.completed = 0;
    }
    sprite->visibility.active = 1;
    return sprite->animationFlags.completed;
}

} /* extern "C" */
