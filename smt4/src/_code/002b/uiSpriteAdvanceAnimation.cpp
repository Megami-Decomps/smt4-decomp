/* NON_MATCHING: only register allocation differs - retail keeps each computed position component in r1 (lsl r1,r0,#12; str r1 / add r1,r1,r0) and reloads the sequence table pointer after advancing the step; armcc here uses r0 and keeps the pointer. */
#include "ui/UiSpriteApi.h"

extern "C" {

/* Advances a sprite's position key by a frame (interpolating between its two points, then walking the track's
   commands), updates its other tracks and returns whether every track has finished. */
s32 uiSpriteAdvanceAnimation(UiSpriteState *sprite)
{
    if (sprite == NULL || (sprite->image < 0 && sprite->secondaryImage < 0)) {
        return 1;
    }
    if (sprite->positionDone == 0 && sprite->positionKeys != NULL) {
        UiSpritePositionKey *key = &sprite->positionKeys[sprite->positionKey];
        if (key->duration <= (s16)sprite->positionFrame) { // retail compares it signed (ldrsh) but steps it as a u16
            if (key->loop != 0) {
                if (sprite->positionReverse != 0) {
                    sprite->x = key->endX << 12;
                    sprite->y = key->endY << 12;
                } else {
                    sprite->x = key->startX << 12;
                    sprite->y = key->startY << 12;
                }
                sprite->positionFrame = 0;
            } else {
                if (sprite->positionReverse != 0) {
                    sprite->x = key->startX << 12;
                    sprite->y = key->startY << 12;
                } else {
                    sprite->x = key->endX << 12;
                    sprite->y = key->endY << 12;
                }
                if (sprite->commandsRunning != 0 && sprite->commands != NULL &&
                    sprite->commands[sprite->positionStep].positionKey != -1) {
                    sprite->positionStep = sprite->positionStep + 1;
                    const SpriteAnimationCommand *step = &sprite->commands[sprite->positionStep];
                    if (step->positionKey == -1 || step->positionKey == -3) {
                        sprite->positionDone = 1;
                    } else if (step->positionKey == -2) {
                        sprite->positionStep = 0;
                        uiSpriteSetKeyframe(sprite, (s16)sprite->commands[0].positionKey, sprite->commands[0].positionReverse);
                    } else {
                        uiSpriteSetKeyframe(sprite, (s16)step->positionKey, step->positionReverse);
                    }
                } else {
                    sprite->positionDone = 1;
                }
            }
        } else {
            if (sprite->positionReverse != 0) {
                sprite->x += ((key->startX - key->endX) << 12) / key->duration;
                sprite->y += ((key->startY - key->endY) << 12) / key->duration;
            } else {
                sprite->x += ((key->endX - key->startX) << 12) / key->duration;
                sprite->y += ((key->endY - key->startY) << 12) / key->duration;
            }
            sprite->positionFrame++;
        }
    }
    uiSpriteAdvanceAlphaTrack(sprite);
    controllerUpdateUniformScaleTrack(sprite);
    spriteSequencePlayerAdvance(sprite);
    if (sprite->positionDone != 0 && sprite->alphaDone != 0 &&
        sprite->scaleDone != 0 && sprite->frameDone != 0) {
        sprite->finished = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->updated = 1;
    return sprite->finished;
}

} /* extern "C" */
