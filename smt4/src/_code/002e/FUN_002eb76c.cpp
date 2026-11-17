/* NON_MATCHING: with the search as an inline helper returning the entry, control flow and the store tail match retail; only the resource pointer and the count halfword trade r4/r5. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

/* The first entry of delimiter-separated sequence `sequence` (-1 values end each one), or NULL. */
static __inline UiSpriteFrameKey *findSequence(UiSpriteState *sprite, s32 sequence)
{
    s32 group = 0;
    for (u32 index = 0; index < (u32)(sprite->resources->frameKeyBytes >> 2); ++index) {
        if (group == sequence)
            return &sprite->resources->frameKeys[index];
        if (sprite->resources->frameKeys[index].image == -1)
            ++group;
    }
    return NULL;
}

// Select the requested delimiter-separated sequence and restart its playback state.
extern "C" void FUN_002eb76c(UiSpriteState *sprite, s32 sequence)
{
    UiSpriteFrameKey *selected = findSequence(sprite, sequence);
    sprite->frameKeys = selected;
    if (selected != NULL) {
        sprite->frameIndex = 0;
        sprite->frameElapsed = 0;
        sprite->frameDone = 0;
        sprite->finished = 0;
        sprite->image = selected->image;
        sprite->secondaryImage = static_cast<u32>(-1);
    }
}
