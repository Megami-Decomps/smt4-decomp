/* NON_MATCHING: retail reads the bottom framebuffer's mode before the channel tests (each mode through a
 * zero-offset address add) where the build reads it in each arm. Copying both modes into const locals in the
 * both-channels arm gives IDENTICAL (w93-s12), but the flag stores cannot change the modes, so those locals
 * only steer the schedule. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

enum {
    CHANNEL_TOP = 0,
    CHANNEL_BOTTOM = 1,
    CHANNEL_BOTH = 2,
    FRAMEBUFFER_TOP = 0,
    FRAMEBUFFER_BOTTOM = 2,
    FRAMEBUFFER_NO_ANTIALIAS = 0x500
};

/* Updates the selected channels' full-resolution flags when antialiasing is available. */
extern "C" void asdGxSetChannelFlags(s32 channel, u8 value)
{
    AsdGxPresets *presets = &g_asdGxPresets;
    switch (channel) {
    case CHANNEL_TOP:
        if (presets->framebuffers[FRAMEBUFFER_TOP].mode != FRAMEBUFFER_NO_ANTIALIAS) {
            presets->fullResolution[CHANNEL_TOP] = value;
        }
        break;
    case CHANNEL_BOTTOM:
        if (presets->framebuffers[FRAMEBUFFER_BOTTOM].mode != FRAMEBUFFER_NO_ANTIALIAS) {
            presets->fullResolution[CHANNEL_BOTTOM] = value;
        }
        break;
    case CHANNEL_BOTH:
        if (presets->framebuffers[FRAMEBUFFER_TOP].mode != FRAMEBUFFER_NO_ANTIALIAS) {
            presets->fullResolution[CHANNEL_TOP] = value;
        }
        if (presets->framebuffers[FRAMEBUFFER_BOTTOM].mode != FRAMEBUFFER_NO_ANTIALIAS) {
            presets->fullResolution[CHANNEL_BOTTOM] = value;
        }
        break;
    default:
        break;
    }
}
