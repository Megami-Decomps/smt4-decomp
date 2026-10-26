#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "font/ComWin/ComWin.h"

extern "C" void spriteStartAnimation(SpritePlaybackView *sprite, const SpriteAnimationCommand *animation);

/* The `index`th animation command group: groups are separated by commands whose position key is -1. */
static inline SpriteAnimationCommand *findSpriteCommand(SpriteAnimationResource *resource, s32 index)
{
    s32 group = 0;
    for (u32 i = 0; i < resource->commandBytes / sizeof(SpriteAnimationCommand); ++i) {
        if (group == index)
            return &resource->commands[i];
        if (resource->commands[i].positionKey == -1)
            ++group;
    }
    return NULL;
}

/* Starts the sprite's `index`th animation command. */
extern "C" void spriteStartAnimationByIndex(void *object, s32 index)
{
    SpritePlaybackView *sprite = static_cast<SpritePlaybackView *>(object);
    spriteStartAnimation(sprite, findSpriteCommand(sprite->resource, index));
}
