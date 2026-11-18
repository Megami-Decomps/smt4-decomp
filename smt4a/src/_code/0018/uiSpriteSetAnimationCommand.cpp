/* NON_MATCHING: compiler hoists animation/key pointers across channel stores and uses r6 rather than lr for sequence scanning. */
#include "ui/UiSpriteApi.h"
#include "ui/UiSpriteSequence.h"

/* Runs a command list: starts the key each track's first command names. */
extern "C" void uiSpriteSetAnimationCommand(UiSpriteState *sprite, const SpriteAnimationCommand *command)
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
    if (sprite->commands->alphaKey > -1) {
        s16 key = sprite->commands->alphaKey;
        s8 reverse = sprite->commands->alphaReverse;
        if (sprite->alphaKeys != NULL) {
            sprite->alphaKey = key;
            sprite->alphaFrame = 0;
            sprite->alphaDone = 0;
            sprite->finished = 0;
            sprite->alphaReverse = reverse;
            const UiSpriteScalarKey *value = &sprite->alphaKeys[sprite->alphaKey];
            sprite->alpha = reverse == 0 ? value->first : value->last;
        }
    }
    if (sprite->commands->scaleKey > -1) {
        s16 key = sprite->commands->scaleKey;
        s8 reverse = sprite->commands->scaleReverse;
        if (sprite->scaleKeys != NULL) {
            sprite->scaleKey = key;
            sprite->scaleFrame = 0;
            sprite->scaleDone = 0;
            sprite->finished = 0;
            sprite->scaleReverse = reverse;
            const UiSpriteScalarKey *value = &sprite->scaleKeys[sprite->scaleKey];
            f32 scale = reverse == 0 ? value->first : value->last;
            sprite->scale[0] = scale;
            sprite->scale[1] = scale;
            sprite->scale[2] = scale;
        }
    }
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
