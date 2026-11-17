#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Counts a vertical blank since the last submitted frame. */
void asdGxAdvancePreset(void)
{
    ++g_asdGxPresets.elapsedFrames;
}

} /* extern "C" */
