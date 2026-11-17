#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
/* NON_MATCHING: zero-offset address adds (getter arguments) and the placement of the second state load differ. */

extern "C" {

static __inline s32 gxPresetsGetFirstState(const AsdGxPresets *presets)
{
    return presets->framebuffers[0].mode;
}

static __inline s32 gxPresetsGetSecondState(const AsdGxPresets *presets)
{
    return presets->framebuffers[2].mode;
}

// Update one or both channel flags unless that channel is in state0x500.
void asdGxSetChannelFlags(s32 channel, u8 value)
{
    s32 firstState = gxPresetsGetFirstState(&g_asdGxPresets);
    s32 secondState;

    if (channel == 0) {
        if (firstState != 0x500) {
            g_asdGxPresets.fullResolution[0] = value;
        }
        return;
    }
    secondState = gxPresetsGetSecondState(&g_asdGxPresets);
    if (channel == 1) {
        if (secondState != 0x500) {
            g_asdGxPresets.fullResolution[1] = value;
        }
    } else if (channel == 2) {
        if (firstState != 0x500) {
            g_asdGxPresets.fullResolution[0] = value;
        }
        if (secondState != 0x500) {
            g_asdGxPresets.fullResolution[1] = value;
        }
    }
}
}
