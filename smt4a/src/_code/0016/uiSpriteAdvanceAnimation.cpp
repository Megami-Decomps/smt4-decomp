/* NON_MATCHING: the move step now divides inside each direction branch like retail (four idivmod calls), but armcc hoists both key-field numerator loads above the first divide where retail reloads them after each store; 211 rows against retail's 231. */
#include "ui/UiSpriteApi.h"

extern "C" {

/* Advances a sprite's position key and command list by `step` and returns 1 when everything
 * it plays has finished (a missing sprite counts as finished). */
s32 uiSpriteAdvanceAnimation(UiSpriteState *sprite, f32 step)
{
    if (sprite == NULL) {
        return 1;
    }
    if (sprite->image < 0 && sprite->secondaryImage < 0) {
        return 1;
    }
    if (sprite->positionDone == 0 && sprite->positionKeys != NULL) {
        UiSpritePositionKey *key = &sprite->positionKeys[sprite->positionKey];
        u16 duration = (u16)(u32)((f32)key->duration / step);

        if ((s16)sprite->positionFrame >= duration) {
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
                if (sprite->commandsRunning != 0 && sprite->commands != NULL && sprite->commands[sprite->positionStep].positionKey != -1) {
                    const SpriteAnimationCommand *next = &sprite->commands[++sprite->positionStep];

                    if (next->positionKey != -1 && next->positionKey != -3) {
                        if (next->positionKey != -2) {
                            uiSpriteSetKeyframe(sprite, (s16)next->positionKey, (s8)next->positionReverse);
                        } else {
                            sprite->positionStep = 0;
                            uiSpriteSetKeyframe(sprite, (s16)sprite->commands[0].positionKey, (s8)sprite->commands[0].positionReverse);
                        }
                    } else {
                        sprite->positionDone = 1;
                    }
                } else {
                    sprite->positionDone = 1;
                }
            }
        } else {
            if (sprite->positionReverse != 0) {
                sprite->x += (key->startX - key->endX) * 0x1000 / duration;
                sprite->y += (key->startY - key->endY) * 0x1000 / duration;
            } else {
                sprite->x += (key->endX - key->startX) * 0x1000 / duration;
                sprite->y += (key->endY - key->startY) * 0x1000 / duration;
            }

            key = &sprite->positionKeys[sprite->positionKey];
            s32 from = key->startX;
            s32 to = key->endX;
            s32 direction = to - from;
            s32 limit = to;

            if (sprite->positionReverse != 0) {
                direction = from - to;
                limit = from;
            }
            if (direction >= 1) {
                if (limit <= (sprite->x >> 12)) {
                    sprite->x = limit << 12;
                }
            } else if ((sprite->x >> 12) <= limit) {
                sprite->x = limit << 12;
            }
            from = key->startY;
            to = key->endY;
            direction = to - from;
            limit = to;
            if (sprite->positionReverse != 0) {
                direction = from - to;
                limit = from;
            }
            if (direction >= 1) {
                if (limit <= (sprite->y >> 12)) {
                    sprite->y = limit << 12;
                }
            } else if ((sprite->y >> 12) <= limit) {
                sprite->y = limit << 12;
            }
            sprite->positionFrame++;
        }
    } else {
        sprite->positionDone = 1;
    }
    FUN_001807a0(sprite, step);
    FUN_00182348(sprite, step);
    spriteSequencePlayerAdvance(sprite, step);
    if (sprite->positionDone != 0 && sprite->alphaDone != 0 && sprite->scaleDone != 0 && sprite->frameDone != 0) {
        sprite->finished = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->updated = 1;
    return sprite->finished;
}

}
