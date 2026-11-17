#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {
/* Returns the stereo mode (1: stereoscopic 3D). */
u32 gxIsStereoscopic3dEnabled(void)
{
    return g_asdGxPresets.stereoMode;
}

} /* extern "C" */
