#include "ui/UiSpriteApi.h"

/* The first command of group `group`: groups are separated by commands whose position key is -1. */
static __inline SpriteAnimationCommand *findSpriteCommand(UiResourceParameters *resources, s32 group)
{
    s32 current = 0;
    for (u32 i = 0; i < resources->commandBytes / sizeof(SpriteAnimationCommand); ++i) {
        if (current == group)
            return &resources->commands[i];
        if (resources->commands[i].positionKey == -1)
            ++current;
    }
    return NULL;
}

/* Runs the sprite's command group `group`. */
extern "C" void uiSpriteSelectAnim(UiSpriteState *sprite, s16 group)
{
    uiSpriteSetAnimationCommand(sprite, findSpriteCommand(sprite->resources, group));
}
