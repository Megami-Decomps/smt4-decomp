#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Requests stereo mode `value` unless it is already the current one. */
void asdGxPresetRequest(s32 value)
{
    if (g_asdGxPresets.stereoMode != value) {
        g_asdGxPresets.pendingStereoMode = value;
    }
}

}
