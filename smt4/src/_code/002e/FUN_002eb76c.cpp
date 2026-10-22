/* NON_MATCHING: compiler splits the not-found return and hoists the selected-entry address into the loop. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

// Select the requested delimiter-separated sequence and restart its playback state.
extern "C" void FUN_002eb76c(SpritePlaybackView *sprite, s32 sequence)
{
    s32 group = 0;
    u32 count = sprite->resource->sequenceBytes >> 2;
    SpriteSequenceEntry *selected = NULL;
    for (u32 index = 0; index < count; ++index) {
        SpriteSequenceEntry *entry = &sprite->resource->sequence[index];
        if (group == sequence) {
            selected = entry;
            break;
        }
        if (entry->value == -1)
            ++group;
    }
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
