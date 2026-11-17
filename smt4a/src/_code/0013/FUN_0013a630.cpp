#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Sets the frame interval and the frame time it gives (59.831 Hz refresh). */
void FUN_0013a630(s32 interval)
{
    g_asdGxPresets.frameTime = 1000000.0f / (59.83100128173828f / (interval + 1));
    g_asdGxPresets.interval = interval;
}

} /* extern "C" */
