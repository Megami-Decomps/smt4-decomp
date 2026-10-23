/* NON_MATCHING: descriptor-copy loop becomes a countdown and sequence-kind branches are laid out differently. */
#include "gfx/ChannelSequenceState.h"

// Copy up to nine sequence descriptors and enumerate their enabled channels, excluding channel two.
extern "C" void FUN_003f9970(ChannelSequenceState* state,
                             const ChannelSequenceDescription* descriptions, u32 count)
{
    state->count = count;
    if (count > 9)
        state->count = 9;
    for (s32 index = 0; index < state->count; ++index)
        state->entries[index].description = descriptions[index];
    state->primaryCount = -1;
    state->secondaryCount = -1;
    for (s32 index = 0; index < state->count; ++index) {
        ChannelSequenceEntry* entry = &state->entries[index];
        entry->frame = 0.0f;
        entry->active = 1;
        entry->count = 0;
        entry->current = 0;
        for (s32 channel = 0; channel < 14; ++channel) {
            if (channel != 2 && (entry->description.channelMask & (1u << channel)))
                entry->channels[entry->count++] = channel;
        }
        if (entry->description.active) {
            if (entry->description.kind != 1) {
                if (state->secondaryCount <= entry->description.index)
                    state->secondaryCount = entry->description.index;
            } else {
                if (state->primaryCount <= entry->description.index)
                    state->primaryCount = entry->description.index;
            }
        }
    }
    ++state->primaryCount;
    ++state->secondaryCount;
}
