/* NON_MATCHING: the loop prologue now matches retail (count shift and entry address stay inside the loop); armcc threads the found-entry path into a duplicated store tail and uses ip for the group counter where retail uses r3. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

// Select the requested delimiter-separated sequence and restart its playback state.
extern "C" void FUN_0036b644(SpritePlaybackView *sprite, s32 sequence)
{
    s32 group = 0;
    u32 count = sprite->resource->sequenceBytes >> 2;
    SpriteSequenceEntry *selected = NULL;
    for (u32 index = 0; index < (u32)(sprite->resource->sequenceBytes >> 2); ++index) {
        SpriteSequenceEntry *entry = &sprite->resource->sequence[index];
        if (group == sequence) {
            selected = &sprite->resource->sequence[index];
            break;
        }
        if (sprite->resource->sequence[index].value == -1)
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
