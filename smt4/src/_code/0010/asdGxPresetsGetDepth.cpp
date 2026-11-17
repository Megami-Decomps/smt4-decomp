#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Returns the frame time in microseconds. */
f32 asdGxPresetsGetDepth(void)
{
    return g_asdGxPresets.frameTime;
}

} /* extern "C" */
