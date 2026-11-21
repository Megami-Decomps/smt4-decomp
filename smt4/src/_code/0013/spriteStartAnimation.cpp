/* NON_MATCHING: 38 lines: the opacity and scale starters are the same file's uiSpriteSetImageKeyframe and uiSpriteSetScaleKeyframe bodies, but retail schedules the key-table address after the flag stores, and the frame-sequence search keeps its entry in lr where this build saves r6. */
#include "ui/UiSpriteApi.h"
#include "ui/UiSpriteSequence.h"

/* uiSpriteSetImageKeyframe's body (the same file's function, inlined here; this ternary form compiles
 * that function out of line identically). */
static __inline void spriteStartAlphaKey(UiSpriteState *sprite, s16 key, s32 reverse)
{
    const UiSpriteScalarKey *value;

    if (sprite->alphaKeys != NULL) {
        sprite->alphaKey = key;
        sprite->alphaFrame = 0;
        sprite->alphaDone = 0;
        value = &sprite->alphaKeys[sprite->alphaKey];
        sprite->finished = 0;
        sprite->alphaReverse = reverse;
        sprite->alpha = reverse != 0 ? value->last : value->first;
    }
}

/* uiSpriteSetScaleKeyframe's body (the same file's function, inlined here; this ternary form compiles
 * that function out of line identically). */
static __inline void spriteStartScaleKey(UiSpriteState *sprite, s16 key, s32 reverse)
{
    const UiSpriteScalarKey *value;
    f32 scale;

    if (sprite->scaleKeys != NULL) {
        sprite->scaleKey = key;
        sprite->scaleFrame = 0;
        sprite->scaleDone = 0;
        value = &sprite->scaleKeys[sprite->scaleKey];
        sprite->finished = 0;
        sprite->scaleReverse = reverse;
        scale = reverse != 0 ? value->last : value->first;
        sprite->scale[0] = scale;
        sprite->scale[1] = scale;
        sprite->scale[2] = scale;
    }
}

/* Runs a command list: starts the key each track's first command names. */
extern "C" void spriteStartAnimation(UiSpriteState *sprite, const SpriteAnimationCommand *command)
{
    sprite->commands = command;
    if (command == NULL)
        return;
    sprite->positionStep = 0;
    sprite->alphaStep = 0;
    sprite->scaleStep = 0;
    sprite->frameStep = 0;
    sprite->commandsRunning = 1;
    if (command->positionKey > -1)
        uiSpriteSetKeyframe(sprite, (s16)command->positionKey, command->positionReverse);
    if (sprite->commands->alphaKey > -1)
        spriteStartAlphaKey(sprite, (s16)sprite->commands->alphaKey, sprite->commands->alphaReverse);
    if (sprite->commands->scaleKey > -1)
        spriteStartScaleKey(sprite, (s16)sprite->commands->scaleKey, sprite->commands->scaleReverse);
    if (sprite->commands->frameSequence > -1) {
        sprite->frameKeys = uiSpriteFindFrameSequence(sprite->resources, (s16)sprite->commands->frameSequence);
        if (sprite->frameKeys != NULL) {
            sprite->frameIndex = 0;
            sprite->frameElapsed = 0;
            sprite->frameDone = 0;
            sprite->finished = 0;
            sprite->image = sprite->frameKeys->image;
            sprite->secondaryImage = -1;
        }
    }
}
