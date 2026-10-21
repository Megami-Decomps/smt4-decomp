/* NON_MATCHING: second-channel state load is not hoisted, zero-offset address adds are removed and switch return/branch layout differs. */
#include "shard/W6_W6Match4_GxPresetChannels.h"

extern "C" {
extern GxPresetChannels g_asdGxPresets;

// Update one or both channel flags unless that channel is in state0x500.
void asdGxSetChannelFlags(s32 channel, u8 value)
{
    switch (channel) {
    case 2:
        if (g_asdGxPresets.firstState != 0x500) {
            g_asdGxPresets.flags[0] = value;
        }
        // Both channels also use the second-channel path.
    case 1:
        if (g_asdGxPresets.secondState != 0x500) {
            g_asdGxPresets.flags[1] = value;
        }
        break;
    case 0:
        if (g_asdGxPresets.firstState != 0x500) {
            g_asdGxPresets.flags[0] = value;
        }
        break;
    }
}
}
