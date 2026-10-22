/* NON_MATCHING: compiler hoists animation/key pointers across channel stores and uses r6 rather than lr for sequence scanning. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" void timerStart(SpritePlaybackView *sprite, s32 key, s32 mode);

static inline SpriteSequenceEntry *findSpriteSequence(SpriteAnimationResource *resource, s16 sequence)
{
    s32 group = 0;
    for (u32 index = 0; index < resource->sequenceBytes / sizeof(SpriteSequenceEntry); ++index) {
        if (group == sequence)
            return &resource->sequence[index];
        if (resource->sequence[index].value == -1)
            ++group;
    }
    return NULL;
}

/* Activate an animation command and initialize its selected playback channels. */
extern "C" void spriteStartAnimation(SpritePlaybackView *sprite, const SpriteAnimationCommand *animation)
{
    sprite->animation = animation;
    if (animation == NULL)
        return;
    sprite->animationFrame = 0;
    sprite->animationLoop = 0;
    sprite->animationTime = 0;
    sprite->animationStep = 0;
    sprite->running = 1;
    if (animation->positionKey > -1)
        timerStart(sprite, (s16)animation->positionKey, animation->positionMode);
    if (sprite->animation->frameKey > -1) {
        s16 key = sprite->animation->frameKey;
        s8 mode = sprite->animation->frameMode;
        if (sprite->frameKeys != NULL) {
            sprite->frameKey = key;
            sprite->frameFrame = 0;
            sprite->completed[1] = 0;
            sprite->finished = 0;
            sprite->frameMode = mode;
            const SpriteValueKey *value = &sprite->frameKeys[sprite->frameKey];
            sprite->frameValue = mode == 0 ? value->first : value->second;
        }
    }
    if (sprite->animation->colorKey > -1) {
        s16 key = sprite->animation->colorKey;
        s8 mode = sprite->animation->colorMode;
        if (sprite->colorKeys != NULL) {
            sprite->colorKey = key;
            sprite->colorFrame = 0;
            sprite->completed[2] = 0;
            sprite->finished = 0;
            sprite->colorMode = mode;
            const SpriteValueKey *value = &sprite->colorKeys[sprite->colorKey];
            u32 color = mode == 0 ? value->first : value->second;
            sprite->colors[0] = color;
            sprite->colors[1] = color;
            sprite->colors[2] = color;
        }
    }
    if (sprite->animation->sequence > -1) {
        sprite->sequence = findSpriteSequence(sprite->resource, (s16)sprite->animation->sequence);
        if (sprite->sequence != NULL) {
            sprite->sequenceFrame = 0;
            sprite->sequenceCount = 0;
            sprite->completed[3] = 0;
            sprite->finished = 0;
            sprite->sequenceValue = sprite->sequence->value;
            sprite->sequenceSentinel = -1u;
        }
    }
}
