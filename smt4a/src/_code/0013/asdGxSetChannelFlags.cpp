/* NON_MATCHING: zero-offset address adds (getter arguments) and the placement of the second state load differ. */
#include "shard/W6_W6Match4_GxPresetChannels.h"

extern "C" {
extern GxPresetChannels g_asdGxPresets;

static __inline s32 gxPresetsGetFirstState(const GxPresetChannels *presets)
{
    return presets->firstState;
}

static __inline s32 gxPresetsGetSecondState(const GxPresetChannels *presets)
{
    return presets->secondState;
}

// Update one or both channel flags unless that channel is in state0x500.
void asdGxSetChannelFlags(s32 channel, u8 value)
{
    s32 firstState = gxPresetsGetFirstState(&g_asdGxPresets);
    s32 secondState;

    if (channel == 0) {
        if (firstState != 0x500) {
            g_asdGxPresets.flags[0] = value;
        }
        return;
    }
    secondState = gxPresetsGetSecondState(&g_asdGxPresets);
    if (channel == 1) {
        if (secondState != 0x500) {
            g_asdGxPresets.flags[1] = value;
        }
    } else if (channel == 2) {
        if (firstState != 0x500) {
            g_asdGxPresets.flags[0] = value;
        }
        if (secondState != 0x500) {
            g_asdGxPresets.flags[1] = value;
        }
    }
}
}
