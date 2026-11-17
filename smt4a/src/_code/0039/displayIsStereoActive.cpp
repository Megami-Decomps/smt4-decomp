#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "shard/Shard0039.h"

extern "C" {
extern s32 nngxIsStereoVisionAllowed(void);

/* True when the display mode is 1 and stereoscopic 3D is allowed. */
u32 displayIsStereoActive(void)
{
    if (g_asdGxPresets.stereoMode == 1 && nngxIsStereoVisionAllowed() != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
