/* NON_MATCHING: animation metadata reloads, signed-key branches, and channel-reset register allocation differ. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" void uiSpriteSetKeyframe(SpritePlaybackView *sprite, s16 key, s8 mode);

/* Select a command stream and reset each animation channel it supplies. */
extern "C" void uiSpriteSetAnimationCommand(SpritePlaybackView *sprite, const SpriteAnimationCommand *animation)
{
    sprite->animation = animation;
    if (animation == NULL) {
        return;
    }
    sprite->animationFrame = 0;
    sprite->animationLoop = 0;
    sprite->animationTime = 0;
    sprite->animationStep = 0;
    sprite->running = 1;
    if (animation->positionKey >= 0) {
        uiSpriteSetKeyframe(sprite, (s16)animation->positionKey, animation->positionMode);
    }
    if (sprite->animation->frameKey >= 0) {
        s16 key = (s16)sprite->animation->frameKey;
        s8 mode = sprite->animation->frameMode;
        if (sprite->frameKeys != NULL) {
            sprite->frameKey = key;
            sprite->frameFrame = 0;
            sprite->completed[1] = 0;
            sprite->finished = 0;
            sprite->frameMode = mode;
            sprite->frameValue = mode == 0 ? sprite->frameKeys[key].first : sprite->frameKeys[key].second;
        }
    }
    if (sprite->animation->colorKey >= 0) {
        s16 key = (s16)sprite->animation->colorKey;
        s8 mode = sprite->animation->colorMode;
        if (sprite->colorKeys != NULL) {
            sprite->colorKey = key;
            sprite->colorFrame = 0;
            sprite->completed[2] = 0;
            sprite->finished = 0;
            sprite->colorMode = mode;
            u32 color = mode == 0 ? sprite->colorKeys[key].first : sprite->colorKeys[key].second;
            sprite->colors[0] = color;
            sprite->colors[1] = color;
            sprite->colors[2] = color;
        }
    }
    if (sprite->animation->sequence >= 0) {
        SpriteSequenceEntry *sequence = NULL;
        s32 group = 0;
        u32 count = sprite->resource->sequenceBytes >> 2;
        for (u32 index = 0; index < count; ++index) {
            if (group == (s16)sprite->animation->sequence) {
                sequence = &sprite->resource->sequence[index];
                break;
            }
            if (sprite->resource->sequence[index].value == -1) {
                ++group;
            }
        }
        sprite->sequence = sequence;
        if (sequence != NULL) {
            sprite->sequenceFrame = 0;
            sprite->sequenceCount = 0;
            sprite->completed[3] = 0;
            sprite->finished = 0;
            sprite->sequenceValue = sequence->value;
            sprite->sequenceSentinel = 0xFFFFFFFF;
        }
    }
}
