/* NON_MATCHING: with the search as an inline helper returning the entry, control flow and the store tail match retail; only the resource pointer and the count halfword trade r4/r5. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

/* The first entry of delimiter-separated sequence `sequence` (-1 values end each one), or NULL. */
static __inline SpriteSequenceEntry *findSequence(SpritePlaybackView *sprite, s32 sequence)
{
    s32 group = 0;
    for (u32 index = 0; index < (u32)(sprite->resource->sequenceBytes >> 2); ++index) {
        if (group == sequence)
            return &sprite->resource->sequence[index];
        if (sprite->resource->sequence[index].value == -1)
            ++group;
    }
    return NULL;
}

// Select the requested delimiter-separated sequence and restart its playback state.
extern "C" void FUN_002eb76c(SpritePlaybackView *sprite, s32 sequence)
{
    SpriteSequenceEntry *selected = findSequence(sprite, sequence);
    sprite->sequence = selected;
    if (selected != NULL) {
        sprite->sequenceFrame = 0;
        sprite->sequenceCount = 0;
        sprite->completed[3] = 0;
        sprite->finished = 0;
        sprite->sequenceValue = selected->value;
        sprite->sequenceSentinel = static_cast<u32>(-1);
    }
}
