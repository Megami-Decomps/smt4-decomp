/* NON_MATCHING: the move step branch compiles to 201 rows against retail's 231 (the clamp compares and the duration divide are scheduled differently); the sprite update logic is the same. */
#include "common.h"

extern "C" {

/* One move key of a sprite (12 bytes): a start and an end position in pixels. */
typedef struct SpriteMoveKey {
    s16 startX;
    s16 startY;
    s16 endX;
    s16 endY;
    u16 duration;
    u8 reverseNext;
    u8 unk0B;
} SpriteMoveKey;

/* One keyframe of the sprite's frame animation list (0x1C bytes). */
typedef struct SpriteFrameKey {
    s32 frame;
    s32 param;
    u8 unk08[0x14];
} SpriteFrameKey;

/* The UI sprite (only the fields used here). */
typedef struct UiSprite {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 handleA;
    /* 0x08 */ s32 handleB;
    /* 0x0C */ s32 x;                /* 12-bit fixed point */
    /* 0x10 */ s32 y;
    /* 0x14 */ u8 unk14[0x38];
    /* 0x4C */ SpriteMoveKey *moves;
    /* 0x50 */ s16 moveIndex;
    /* 0x52 */ s16 moveTime;
    /* 0x54 */ u8 reversed;
    /* 0x55 */ u8 unk55[0x23];
    /* 0x78 */ SpriteFrameKey *frames;
    /* 0x7C */ s16 frameIndex;
    /* 0x7E */ u8 unk7E[6];
    /* 0x84 */ u8 hasFrames;
    /* 0x85 */ u8 updated;
    /* 0x86 */ u8 moveDone;
    /* 0x87 */ u8 flagA;
    /* 0x88 */ u8 flagB;
    /* 0x89 */ u8 flagC;
    /* 0x8A */ u8 finished;
} UiSprite;

void FUN_001807a0(UiSprite *sprite, f32 step);
void FUN_00181948(UiSprite *sprite, f32 step);
void FUN_00182348(UiSprite *sprite, f32 step);
void uiSpriteSetKeyframe(UiSprite *sprite, s32 frame, s32 param);

/* Advances a sprite's move keys and frame animation by `step` and returns 1 when everything
 * it plays has finished (a missing sprite counts as finished). */
s32 FUN_00163aa4(UiSprite *sprite, f32 step)
{
    if (sprite == NULL) {
        return 1;
    }
    if (sprite->handleA < 0 && sprite->handleB < 0) {
        return 1;
    }
    if (sprite->moveDone == 0 && sprite->moves != NULL) {
        SpriteMoveKey *key = &sprite->moves[sprite->moveIndex];
        u16 duration = (u16)(u32)((f32)key->duration / step);

        if (sprite->moveTime >= duration) {
            if (key->reverseNext != 0) {
                if (sprite->reversed != 0) {
                    sprite->x = key->endX << 12;
                    sprite->y = key->endY << 12;
                } else {
                    sprite->x = key->startX << 12;
                    sprite->y = key->startY << 12;
                }
                sprite->moveTime = 0;
            } else {
                if (sprite->reversed != 0) {
                    sprite->x = key->startX << 12;
                    sprite->y = key->startY << 12;
                } else {
                    sprite->x = key->endX << 12;
                    sprite->y = key->endY << 12;
                }
                if (sprite->hasFrames != 0 && sprite->frames != NULL && sprite->frames[sprite->frameIndex].frame != -1) {
                    SpriteFrameKey *next = &sprite->frames[++sprite->frameIndex];

                    if (next->frame != -1 && next->frame != -3) {
                        if (next->frame != -2) {
                            uiSpriteSetKeyframe(sprite, (s16)next->frame, (s8)next->param);
                        } else {
                            sprite->frameIndex = 0;
                            uiSpriteSetKeyframe(sprite, (s16)sprite->frames[0].frame, (s8)sprite->frames[0].param);
                        }
                    } else {
                        sprite->moveDone = 1;
                    }
                } else {
                    sprite->moveDone = 1;
                }
            }
        } else {
            s32 dx;
            s32 dy;

            if (sprite->reversed != 0) {
                dx = (key->startX - key->endX) * 0x1000;
                dy = (key->startY - key->endY) * 0x1000;
            } else {
                dx = (key->endX - key->startX) * 0x1000;
                dy = (key->endY - key->startY) * 0x1000;
            }
            sprite->x += dx / duration;
            sprite->y += dy / duration;

            key = &sprite->moves[sprite->moveIndex];
            s32 from = key->startX;
            s32 to = key->endX;
            s32 direction = to - from;
            s32 limit = to;

            if (sprite->reversed != 0) {
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
            if (sprite->reversed != 0) {
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
            sprite->moveTime++;
        }
    } else {
        sprite->moveDone = 1;
    }
    FUN_001807a0(sprite, step);
    FUN_00182348(sprite, step);
    FUN_00181948(sprite, step);
    if (sprite->moveDone != 0 && sprite->flagA != 0 && sprite->flagB != 0 && sprite->flagC != 0) {
        sprite->finished = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->updated = 1;
    return sprite->finished;
}

}
