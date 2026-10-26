#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "ui/UiControl.h"

extern "C" {
void uiSpriteSetAnimationCommand(SpritePlaybackView *sprite, const SpriteAnimationCommand *animation);
}

/* The first command of the given group: a command with a position key of -1 ends a group. */
static __inline const SpriteAnimationCommand *spriteFindGroup(const SpriteAnimationResource *resource, s32 group)
{
    s32 currentGroup = 0;

    for (u32 i = 0; i < resource->commandBytes / sizeof(SpriteAnimationCommand); i++) {
        if (currentGroup == group) {
            return &resource->commands[i];
        }
        if (resource->commands[i].positionKey == -1) {
            currentGroup++;
        }
    }
    return NULL;
}

extern "C" void uiSpriteSelectAnim(void *object, s32 group)
{
    SpritePlaybackView *sprite = static_cast<SpritePlaybackView *>(object);
    uiSpriteSetAnimationCommand(sprite, spriteFindGroup(sprite->resource, group));
}
